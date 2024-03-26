​occurrenceCounts.insert(pair.second) attempts to insert the count pair.second into the occurrenceCounts set. The insert function returns a pair of values:

The first value of the pair is an iterator pointing to the inserted element (or to the existing element if insertion failed).
The second value of the pair is a boolean indicating whether the insertion took place successfully (true if insertion was successful, false otherwise).
!occurrenceCounts.insert(pair.second).second evaluates to true if the insertion was unsuccessful (i.e., if the count already exists in the set). In other words, it checks if the count is not unique.
