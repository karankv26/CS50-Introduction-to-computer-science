SELECT name 
FROM people JOIN directors ON people.id = directors.person_id
JOIN ratings ON directors.movie_id = ratings.movie_id
where rating >= 9.0;