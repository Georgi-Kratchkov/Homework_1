require "csv"

def process_file_with_csv	
	result = 0
	CSV.foreach("List.csv") do |row|
		result = result + row[2].to_i	
	end
	p result

end
process_file_with_csv