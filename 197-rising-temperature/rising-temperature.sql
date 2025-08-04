# Write your MySQL query statement below
select w1.id from Weather w1, Weather w2 where datediff(w1.recordDate,w2.recordDate)=1 and w1.temperature > w2.temperature;



-- SELECT w1.id
-- FROM Weather w1, Weather w2
-- WHERE DATEDIFF(w1.recordDate, w2.recordDate) = 1 AND w1.temperature > w2.temperature;