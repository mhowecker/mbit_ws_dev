# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mbit_interfaces:srv/HeadState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeadState_Request(type):
    """Metaclass of message 'HeadState_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mbit_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mbit_interfaces.srv.HeadState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadState_Request(metaclass=Metaclass_HeadState_Request):
    """Message class 'HeadState_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_HeadState_Response(type):
    """Metaclass of message 'HeadState_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mbit_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mbit_interfaces.srv.HeadState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_state__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadState_Response(metaclass=Metaclass_HeadState_Response):
    """Message class 'HeadState_Response'."""

    __slots__ = [
        '_lastx',
        '_lasty',
    ]

    _fields_and_field_types = {
        'lastx': 'string',
        'lasty': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lastx = kwargs.get('lastx', str())
        self.lasty = kwargs.get('lasty', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.lastx != other.lastx:
            return False
        if self.lasty != other.lasty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lastx(self):
        """Message field 'lastx'."""
        return self._lastx

    @lastx.setter
    def lastx(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lastx' field must be of type 'str'"
        self._lastx = value

    @builtins.property
    def lasty(self):
        """Message field 'lasty'."""
        return self._lasty

    @lasty.setter
    def lasty(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lasty' field must be of type 'str'"
        self._lasty = value


class Metaclass_HeadState(type):
    """Metaclass of service 'HeadState'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mbit_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mbit_interfaces.srv.HeadState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__head_state

            from mbit_interfaces.srv import _head_state
            if _head_state.Metaclass_HeadState_Request._TYPE_SUPPORT is None:
                _head_state.Metaclass_HeadState_Request.__import_type_support__()
            if _head_state.Metaclass_HeadState_Response._TYPE_SUPPORT is None:
                _head_state.Metaclass_HeadState_Response.__import_type_support__()


class HeadState(metaclass=Metaclass_HeadState):
    from mbit_interfaces.srv._head_state import HeadState_Request as Request
    from mbit_interfaces.srv._head_state import HeadState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
