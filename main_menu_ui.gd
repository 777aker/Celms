extends Node

@onready var hostPortText: TextEdit = $HostContainer/HostPort
@onready var joinIPText: TextEdit = $JoinContainer/JoinIP
@onready var joinPortText: TextEdit = $JoinContainer/JoinPort

@export var lobby: PackedScene

func _on_host_game_pressed() -> void:
	NetworkHandler.start_server(int(hostPortText.text))
	get_tree().change_scene_to_packed(lobby)


func _on_join_game_pressed() -> void:
	NetworkHandler.start_client(joinIPText.text, int(joinPortText.text))
	get_tree().change_scene_to_packed(lobby)
