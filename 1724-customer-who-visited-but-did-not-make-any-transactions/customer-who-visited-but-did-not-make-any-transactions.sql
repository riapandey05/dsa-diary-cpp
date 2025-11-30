# Write your MySQL query statement below
-- select customer_id,count(customer_id) as count_no_trans from 
-- Visits join Transactions on Visits.visit_id = Transactions.visit_id where customer_id not in Transactions;

SELECT customer_id, COUNT(v.visit_id) as count_no_trans 
FROM Visits v
LEFT JOIN Transactions t ON v.visit_id = t.visit_id
WHERE transaction_id IS NULL
GROUP BY customer_id;