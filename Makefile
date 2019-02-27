mac:
	g++ -std=c++11 botshot-tx2-central.cpp -pthread -o out/macOS

jetson:
	g++ -std=c++11 botshot-tx2-central.cpp -lpthread -o out/jetson
