#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/lberthault/robogym_ws/src/robo-gym-robot-servers/mir100_robot_server"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/lberthault/robogym_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/lberthault/robogym_ws/install/lib/python3/dist-packages:/home/lberthault/robogym_ws/build/mir100_robot_server/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/lberthault/robogym_ws/build/mir100_robot_server" \
    "/usr/bin/python3" \
    "/home/lberthault/robogym_ws/src/robo-gym-robot-servers/mir100_robot_server/setup.py" \
     \
    build --build-base "/home/lberthault/robogym_ws/build/mir100_robot_server" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/lberthault/robogym_ws/install" --install-scripts="/home/lberthault/robogym_ws/install/bin"
