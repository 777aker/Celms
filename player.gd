extends CharacterBody3D


const SPEED = 14
const GRAVITY = 75

var target_velocity = Vector3.ZERO


func _enter_tree() -> void:
	set_multiplayer_authority(name.to_int())
	
	if is_multiplayer_authority():
		$Camera3D.make_current()


func _physics_process(delta: float) -> void:
	if !is_multiplayer_authority(): return
	
	var direction = Vector3.ZERO
	
	if Input.is_action_pressed("move right"):
		direction.x += 1
	if Input.is_action_pressed("move left"):
		direction.x -= 1
	if Input.is_action_pressed("move back"):
		direction.z += 1
	if Input.is_action_pressed("move forward"):
		direction.z -= 1
		
	if direction != Vector3.ZERO:
		direction = direction.normalized()
		
	target_velocity.x = direction.x * SPEED
	target_velocity.z = direction.z * SPEED
	
	if not is_on_floor():
		target_velocity.y = target_velocity.y - (GRAVITY * delta)
		
	velocity = target_velocity
	move_and_slide()
	
