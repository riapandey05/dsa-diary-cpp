# Write your MySQL query statement below
select Signups.user_id , round(avg(
    case
     when Confirmations.action = 'confirmed' then 1.00
     else 0
     end
),2) as confirmation_rate from Signups left join Confirmations on Signups.user_id = Confirmations.user_id group 
by Signups.user_id;


