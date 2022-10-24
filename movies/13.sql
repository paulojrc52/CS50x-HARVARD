-- Lista os nomes de todas as pessoas que estrelaram um filme no qual Kevin Bacon também estrelou
SELECT DISTINCT name
FROM people JOIN stars ON stars.person_id = people.id
WHERE name != "Kevin Bacon"
AND movie_id IN(
    SELECT movie_id
    FROM people JOIN stars ON stars.person_id = people.id
    WHERE name = "Kevin Bacon" AND birth = 1958
);