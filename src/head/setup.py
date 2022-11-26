from setuptools import setup

package_name = 'head'

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
    maintainer='Martin Howecker',
    maintainer_email='mhowecker@student.tgm.ac.at',
    description='Pkg for moving the roboter head',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'head_move_sub = head.head_move_sub:main',
            'head_tf_move_sub = head.head_tf_move_sub:main',
            'head_state_service = head.head_state_service:main',
        ],
    },
)
