FROM ubuntu:22.04
ENV DEBIAN_FRONTEND=noninteractive

RUN apt update && apt install -y locales \
    && locale-gen en_US.UTF-8 \
    && update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8 \
    && export LANG=en_US.UTF-8


RUN apt update && apt install -y software-properties-common
RUN add-apt-repository universe

RUN apt install curl -y
RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

RUN echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | tee /etc/apt/sources.list.d/ros2.list > /dev/null

RUN apt update
RUN apt upgrade -y
RUN apt install ros-dev-tools -y

RUN apt install ros-iron-desktop -y

RUN apt install libgpiod-dev gpiod -y
RUN apt install python3-colcon-common-extensions -y
RUN apt install net-tools -y
RUN apt install -y iputils-ping


RUN git clone https://github.com/lsantos7654/Sandbox