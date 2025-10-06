#include <ros/ros.h>

using std::string;

int main(int argc, char **argv) {
    ros::init(argc, argv, "lambda_basics_node");
    ros::NodeHandle _n("lambda_basics_ns");

    // Capture list example Complex
    std::string MutableName = "Prismo";
    int MutableId = 1;

    auto mutable_lambda = [=]() mutable {
        MutableId += 1;
        MutableName = "Prismo-" + std::to_string(MutableId);
        std::cout << "MutableName Inside Lambda =" << MutableName << std::endl;
        std::cout << "MutableId Inside Lambda =" << MutableId << std::endl;
        return;
    };

    mutable_lambda();
    std::cout << "MutableName Outside Lambda =" << MutableName << std::endl;
    std::cout << "MutableId Outside Lambda =" << MutableId << std::endl;

    mutable_lambda();
    std::cout << "MutableName Outside Lambda =" << MutableName << std::endl;
    std::cout << "MutableId Outside Lambda =" << MutableId << std::endl;

  return 0;
}