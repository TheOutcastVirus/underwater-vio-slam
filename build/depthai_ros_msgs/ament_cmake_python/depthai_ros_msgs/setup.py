from setuptools import find_packages
from setuptools import setup

setup(
    name='depthai_ros_msgs',
    version='3.0.9',
    packages=find_packages(
        include=('depthai_ros_msgs', 'depthai_ros_msgs.*')),
)
