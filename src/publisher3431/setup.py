from setuptools import setup

package_name = 'publisher3431'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsa2021',
    maintainer_email='z5122189@unsw.edu.au',
    description='Examples of minimal publisher/subscriber using rclpy',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = publisher3431.publisher:main',
                'listener = publisher3431.subscriber:main',
                'listener_ass2 = publisher3431.subscriber_ass2:main',
                
        ],
    },
)
