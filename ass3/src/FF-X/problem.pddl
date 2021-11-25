(define (problem moveitemtoroom)
 (:domain turtlebot3-domain)
 (:objects
turtlebot - robot
initial-room - room
storage-room - room
study - room
living-room - room
dining-room - room
pantry - room
kitchen - room
orange - item
coffee - item
banana - item
fanta - item
apple - item
 )
 (:init 
  (at turtlebot initial-room)
  (hand_empty turtlebot)
 (in orange study)
 (in coffee dining-room)
 (in banana dining-room)
 (in fanta kitchen)
 (in apple kitchen)
 )
 (:goal 
 (in fanta storage-room)
 )
)