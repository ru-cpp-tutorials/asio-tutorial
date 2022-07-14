#include <boost/asio.hpp> (ref:simple_server)

int main() {
    std::uint16_t port = 15001;

    boost::asio::io_context io_context;
    boost::asio::ip::udp::endpoint receiver(boost::asio::ip::udp::v4(), port);
    boost::asio::ip::udp::socket socket(io_context, receiver);

    while (true) {
        char buffer[65536];
        boost::asio::ip::udp::endpoint sender;
        std::size_t bytes_transferred =
            socket.receive_from(boost::asio::buffer(buffer), sender);
        socket.send_to(boost::asio::buffer(buffer, bytes_transferred), sender);
    }

    return 0;
}
