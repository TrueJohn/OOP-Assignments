#include "FilteringType.h"


FilteringType::FilteringType(offer_type _type) :
	type{ _type }
{
}

DynamicArray FilteringType::filter(DynamicArray& data) {
	DynamicArray filteredArr;
	for (int i = 0; i < data.getLength(); i++) {
		if (data.get(i).get_type() == this->type) {
			filteredArr.append(data.get(i));
		}
	}
	return filteredArr;
}

void FilteringType::set_type(offer_type newType) {
	type = newType;
}

FilteringType::FilteringType() {
	type = circuit;
}