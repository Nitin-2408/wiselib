{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/ssnx/ssn#Sensor>" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://purl.oclc.org/NET/ssnx/ssn#observedProperty>", "<http://spitfire-project.eu/property/Temperature>" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://spitfire-project.eu/cc/spitfireCC_n3.owl#uomInUse>", "<http://spitfire-project.eu/uom/Centigrade>" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://www.loa-cnr.it/ontologies/DUL.owl#hasValue>", "10.2" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://purl.org/dc/terms/date>", "12-04-02T12:48Z" },
{ "<http://spitfire-project.eu/property/Temperature>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/ssnx/ssn#Property>" },
{ "<http://spitfire-project.eu/property/Temperature>", "<http://purl.oclc.org/NET/muo/muo#measuredIn>", "<http://spitfire-project.eu/uom/Centigrade>" },
{ "<http://spitfire-project.eu/uom/Centigrade>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/muo/muo#UnitOfMeasurement>" },
{ "<http://spitfire-project.eu/uom/Centigrade>", "<http://purl.oclc.org/NET/muo/muo#prefSymbol>", "C" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://purl.oclc.org/NET/ssnx/ssn#detects>", "<http://spitfire-project.eu/sensor_stimulus/silver_expansion>" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://purl.oclc.org/NET/ssnx/ssn#hasMeasurementCapability>", "<http://spitfire-project.eu/sensor/sensor1234/capabilities_sensor1234>" },
{ "<http://spitfire-project.eu/sensor_stimulus/silver_expansion>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/ssnx/ssn#Stimulus>" },
{ "<http://spitfire-project.eu/sensor_stimulus/silver_expansion>", "<http://purl.oclc.org/NET/ssnx/ssn#isProxyFor>", "<http://spitfire-project.eu/property/Temperature>" },
{ "<http://spitfire-project.eu/sensor/sensor1234/capabilities_sensor1234>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://spitfire-project.eu/sensor/sensor1234/capabilities>" },
{ "<http://spitfire-project.eu/uom/month>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/muo/muo#UnitOfMeasurement>" },
{ "<http://spitfire-project.eu/uom/month>", "<http://purl.oclc.org/NET/muo/muo#prefSymbol>", "m" },
{ "<http://spitfire-project.eu/property/Battery_Life_Time>", "<http://purl.oclc.org/NET/muo/muo#measuredIn>", "<http://spitfire-project.eu/uom/month>" },
{ "<http://spitfire-project.eu/sensor/sensor1234/capabilities>", "<http://www.w3.org/2000/01/rdf-schema#subClassOf>", "bnode0" },
{ "bnode0", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode0", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/ssnx/ssn#hasMeasurementProperty>" },
{ "bnode0", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode1" },
{ "bnode1", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode1", "<http://www.w3.org/2002/07/owl#intersectionOf>", "<http://spitfire-project.eu/property/Battery_Life_Time>" },
{ "bnode1", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode2" },
{ "bnode2", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode2", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/ssnx/ssn#hasValue>" },
{ "bnode2", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode3" },
{ "bnode3", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode3", "<http://www.w3.org/2002/07/owl#intersectionOf>", "<http://purl.oclc.org/NET/ssnx/ssn#ValueRange>" },
{ "bnode3", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode4" },
{ "bnode3", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode5" },
{ "bnode3", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode6" },
{ "bnode4", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode4", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/muo/muo#measuredIn>" },
{ "bnode4", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode7" },
{ "bnode7", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode7", "<http://www.w3.org/2002/07/owl#oneOf>", "<http://spitfire-project.eu/uom/month>" },
{ "bnode5", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode5", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://spitfire-project.eu/cc/spitfireCC_n3.owl#hasMinimumValue>" },
{ "bnode5", "<http://www.w3.org/2002/07/owl#hasValue>", "1" },
{ "bnode6", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode6", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://spitfire-project.eu/cc/spitfireCC_n3.owl#hasMaximumValue>" },
{ "bnode6", "<http://www.w3.org/2002/07/owl#hasValue>", "2" },
{ "<http://spitfire-project.eu/uom/Fahrenheit>", "<http://www.w3.org/2000/01/rdf-schema#type>", "<http://purl.oclc.org/NET/muo/muo#UnitOfMeasurement>" },
{ "<http://spitfire-project.eu/uom/Fahrenheit>", "<http://purl.oclc.org/NET/muo/muo#prefSymbol>", "F" },
{ "<http://spitfire-project.eu/property/Temperature>", "<http://purl.oclc.org/NET/muo/muo#measuredIn>", "<http://spitfire-project.eu/uom/Fahrenheit>" },
{ "bnode8", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode8", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/ssnx/ssn#inCondition>" },
{ "bnode8", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode9" },
{ "bnode9", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode9", "<http://www.w3.org/2002/07/owl#intersectionOf>", "<http://spitfire-project.eu/property/Temperature>" },
{ "bnode9", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode10" },
{ "bnode10", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode10", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/ssnx/ssn#hasValue>" },
{ "bnode10", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode11" },
{ "bnode11", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode11", "<http://www.w3.org/2002/07/owl#intersectionOf>", "<http://purl.oclc.org/NET/ssnx/ssn#ValueRange>" },
{ "bnode11", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode12" },
{ "bnode11", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode13" },
{ "bnode11", "<http://www.w3.org/2002/07/owl#intersectionOf>", "bnode14" },
{ "bnode12", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode12", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://purl.oclc.org/NET/muo/muo#measuredIn>" },
{ "bnode12", "<http://www.w3.org/2002/07/owl#someValuesFrom>", "bnode15" },
{ "bnode15", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Class>" },
{ "bnode15", "<http://www.w3.org/2002/07/owl#oneOf>", "<http://spitfire-project.eu/uom/Fahrenheit>" },
{ "bnode13", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode13", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://spitfire-project.eu/cc/spitfireCC_n3.owl#hasMinimumValue>" },
{ "bnode13", "<http://www.w3.org/2002/07/owl#hasValue>", "-40" },
{ "bnode14", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://www.w3.org/2002/07/owl#Restriction>" },
{ "bnode14", "<http://www.w3.org/2002/07/owl#onProperty>", "<http://spitfire-project.eu/cc/spitfireCC_n3.owl#hasMaximumValue>" },
{ "bnode14", "<http://www.w3.org/2002/07/owl#hasValue>", "-35" },
{ "<http://spitfire-project.eu/sensor/sensor1234>", "<http://purl.oclc.org/NET/ssnx/ssn#featureOfInterest>", "<http://spitfire-project.eu/foi/Room_12>" },
{ "<http://spitfire-project.eu/foi/Room_12>", "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>", "<http://spitfire-project.eu/foi/Room>" },