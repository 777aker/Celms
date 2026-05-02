extends Node

var peer: ENetMultiplayerPeer

func start_server(hostPort: int) -> void:
	peer = ENetMultiplayerPeer.new()
	peer.create_server(hostPort)
	multiplayer.multiplayer_peer = peer
	
func start_client(clientIP: String, clientPort: int) -> void:
	peer = ENetMultiplayerPeer.new()
	peer.create_client(clientIP, clientPort)
	multiplayer.multiplayer_peer = peer
