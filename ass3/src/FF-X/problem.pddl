(define (problem moveitemtoroom)
 (:domain turtlebot3-domain)
 (:objects
turtlebot - robot
initial-room - room
living-room - room
kitchen - room
snickers - item
apple - item
 )
 (:init 
  (at turtlebot initial-room)
  (hand_empty turtlebot)
  (in snickers living-room)
  (in apple kitchen)
 )
 (:goal 
 (in snickers kitchen)
 )
)