# Write your MySQL query statement below
Select emp2.name
from Employee as emp1
 JOIN Employee as emp2
ON emp1.managerId = emp2.id
GROUP BY emp1.managerId
having count(emp1.managerId) >= 5;