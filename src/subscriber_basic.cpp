#include "unit6_exercises/subscriber_basic.h"

MagicSubscriber::MagicSubscriber(ros::NodeHandle &ros_node,
                                 const string subscriber_topic) {
  // Usamos una lista de inicialización
  this->m_subscriber_topic = subscriber_topic;
  this->m_ros_node_object = &ros_node;

  if (ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME,
                                     ros::console::levels::Info)) {
    ros::console::notifyLoggerLevelsChanged();
  }

  image_sub_ = this->m_ros_node_object->subscribe(
      this->m_subscriber_topic, 1, &MagicSubscriber::CallbackToTopic, this);
}

void MagicSubscriber::CallbackToTopic(const sensor_msgs::ImageConstPtr &msg) {
  // uint8 es un alias de unsigned char, por eso hacemos cast a int
  ROS_INFO_STREAM(
      "Call Back Topic Image Data[0]=" << static_cast<int>(msg->data[0]));
}

// Destructor
MagicSubscriber::~MagicSubscriber() {
  cout << "MagicSubscriber Destructor is called" << endl;
}
