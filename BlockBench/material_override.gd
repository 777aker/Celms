extends Node3D

@export var material3d: StandardMaterial3D

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	for child in find_children("*", "MeshInstance3D", true):
		child.material_override = material3d


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	pass
