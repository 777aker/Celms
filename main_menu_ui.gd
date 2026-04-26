extends Node

@export var hostPortText: TextEdit
@export var joinIPText: TextEdit
@export var joinPortText: TextEdit

@export var lobby: PackedScene

func _on_host_game_pressed() -> void:
	NetworkHandler.start_server(int(hostPortText.text))
	get_tree().change_scene_to_packed(lobby)


func _on_join_game_pressed() -> void:
	NetworkHandler.start_client(joinIPText.text, int(joinPortText.text))
	get_tree().change_scene_to_packed(lobby)
