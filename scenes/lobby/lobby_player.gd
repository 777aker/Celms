extends HBoxContainer

func _enter_tree() -> void:
	set_multiplayer_authority(name.to_int())
	
	if is_multiplayer_authority():
		$PlayerName.placeholder_text = "Your Name"
