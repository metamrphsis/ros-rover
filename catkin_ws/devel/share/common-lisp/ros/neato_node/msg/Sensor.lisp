; Auto-generated. Do not edit!


(cl:in-package neato_node-msg)


;//! \htmlinclude Sensor.msg.html

(cl:defclass <Sensor> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Sensor (<Sensor>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Sensor>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Sensor)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name neato_node-msg:<Sensor> is deprecated: use neato_node-msg:Sensor instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <Sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neato_node-msg:name-val is deprecated.  Use neato_node-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <Sensor>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader neato_node-msg:value-val is deprecated.  Use neato_node-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Sensor>) ostream)
  "Serializes a message object of type '<Sensor>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'value) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Sensor>) istream)
  "Deserializes a message object of type '<Sensor>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'value) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Sensor>)))
  "Returns string type for a message object of type '<Sensor>"
  "neato_node/Sensor")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Sensor)))
  "Returns string type for a message object of type 'Sensor"
  "neato_node/Sensor")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Sensor>)))
  "Returns md5sum for a message object of type '<Sensor>"
  "23f05028c1a699fb83e22401228c3a9e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Sensor)))
  "Returns md5sum for a message object of type 'Sensor"
  "23f05028c1a699fb83e22401228c3a9e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Sensor>)))
  "Returns full string definition for message of type '<Sensor>"
  (cl:format cl:nil "string name~%bool value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Sensor)))
  "Returns full string definition for message of type 'Sensor"
  (cl:format cl:nil "string name~%bool value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Sensor>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Sensor>))
  "Converts a ROS message object to a list"
  (cl:list 'Sensor
    (cl:cons ':name (name msg))
    (cl:cons ':value (value msg))
))
