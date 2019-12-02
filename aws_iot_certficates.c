/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAP7pZynZ5bOxrCw4GjnUmIP9Sl9/MA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTExMTkwOTA3\n\
MTVaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDS3A1nOw+1rndOtTMf\n\
Mti8ibVzHv34koAncDRGjvBzbzifYbyHmnw8KJlCQNqbVodK2Mejd3ENsZft7o/8\n\
vs8gCBXNXT2P2BBat0Bc2ai7RXyvOdHZR1R7AYq9Pev/T+2fHftvseivksqcc1Eo\n\
HoAQFO2QLY3WAlQpUGe90e8t9xbDy8xNTwT7g83xGRNoeHIRY+DNuNUhwRbo7uA3\n\
xmILxOH59UlewlI277x2q4WjcZDQcXp48tsHfr5fZmVbF4kqicnwQxR32zSWhjM/\n\
jbCB5MUc9X1IglBNALgAER2v3mdhUyV9BoNP8Gwo9cy1YGK+6I5HVdpkts2pCSED\n\
EchBAgMBAAGjYDBeMB8GA1UdIwQYMBaAFJmbPYpjHMfXtIakNSQzP6e3gRYPMB0G\n\
A1UdDgQWBBTVwJtCddJaLBjMqOZ6jNzpF8G5STAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAcZRZUkg9M/ne+OPr8R8nf3Mp\n\
I/Wg8/w4hQCJHR1RHY3U1Jz1lnOHzCkEWkSRsGODY48eEf2EXjR2p1onugcT4qcC\n\
IQHc2bxXYRf0wyT7aYcrHxCtGnJmKKVwowY/6WWGmqIgueN/ikosOv2grU+s8TmI\n\
x6ZLfxxEhq0nKFsVPLd4O2X4X6fu1AwpKdO+TuYDHAXIpfuGXpdIQTT/GCGnbJLY\n\
5o9qVoLVjKkarAzrHsa8RA0aAceLcDifh0Af5vKaKojlDXhScquL2/qLlmP4/1Qc\n\
BrvQLtlwVzny9hcXhY672oCWFXZpJgxLLFu7cc7SC8lQQE7RhNW3rqXgjW60JQ==\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpAIBAAKCAQEA0twNZzsPta53TrUzHzLYvIm1cx79+JKAJ3A0Ro7wc284n2G8\n\
h5p8PCiZQkDam1aHStjHo3dxDbGX7e6P/L7PIAgVzV09j9gQWrdAXNmou0V8rznR\n\
2UdUewGKvT3r/0/tnx37b7Hor5LKnHNRKB6AEBTtkC2N1gJUKVBnvdHvLfcWw8vM\n\
TU8E+4PN8RkTaHhyEWPgzbjVIcEW6O7gN8ZiC8Th+fVJXsJSNu+8dquFo3GQ0HF6\n\
ePLbB36+X2ZlWxeJKonJ8EMUd9s0loYzP42wgeTFHPV9SIJQTQC4ABEdr95nYVMl\n\
fQaDT/BsKPXMtWBivuiOR1XaZLbNqQkhAxHIQQIDAQABAoIBAFyBzh+L+chrUkxl\n\
kpgNZqjQgZqP7jwvianDwCt0amk6Uk0aQ+v6CqcZ6KL4cO/VdmWP1YYR0LeBQnZQ\n\
QztPOu+CnI4MagXBdOtXmhUiKLSAN8NoSnhYoueUNZnwoKjSGB3GuZi3JK5iaCFb\n\
Ni+zsdtcUxz930wUmXfGnrzYbWZsRNUzShPAL10UhT4Zo5zerMdUfC0aIckbv3eW\n\
rG5tiEtry5gbK+9HkVCWBGJah8NLblLzFIPBDx2BZGMLsqgDsNN2GwdvJC4EXAsO\n\
Odo1yQ3+qCC+DCpyN6Clpubx8VBnP1xw5HYZU1xxaB3aTycLvsoTE6VhEqN3Tc9D\n\
v6DSFwECgYEA7fA0iHlHA+/4CbItw2wwKgoIEunEGr5QFTWPEK0WgaMiA18G/Gdd\n\
DJdIx+yu5Y9o/UZ8V32KZuN75TehZlTQH+ZcjN/s7gC75+KeL0bWSsrb1keNrAsJ\n\
s/wQaQHFZGMeXLv1DCJWSg2VZQ5+13lyMoA4JHu8KghkTQV9G0eoYDUCgYEA4t2i\n\
GSuNdgdhSv1BV8NHMr+wrdKphO/tuZYdh/tIrQslcU3MyWIRErFk88CO+9d1r54s\n\
oSP1mwuA6IBg8FFw7kKMRcaYJeu4fyOA1L4Gt+FrUWvJtvOxAZRYqg4sKq1C9s+t\n\
A37kkIkdlkgsMXuDSrDIXeVX8ZEWFpcjm/yAIV0CgYEAuPT/4RZlHapsJR1cdYyj\n\
5AnoPMt6pU9K8TGxBEWIOT2WMwirZYjzy9XNvZs+WTQhaMBh56Cu9UvgA047KFDF\n\
eAaZ6ugmRNxNNPP0AswNyBXozajRd+scn8xQ9U9rIZ3q/CsfUU9fxDDK8MNT1iuR\n\
mbAR9Eo6+nGLhlO97HbHbAECgYAM5QYKojQXKlI4Xe6x21KXqteS+a9S9AQyETs6\n\
eGjoFQMazo4+QAmyY0zWofI+lD+HLNlii1Wxa1T3YhygbDCcCkJI0QHi3eQNrenr\n\
raVaHEDqTtMXSACek1z6xXVzM4fj2Wf/E95P7Ms2uIFyio+q1iN9WsTF4TY9MHgA\n\
rLhnrQKBgQDecx2DoVcxpgnAK87QlEyI9hRNSCpJy+18Wfz5MylHBH80nkEMRL5t\n\
E8/unJ7KLI1ncWNA1C03plnr00zhSb0toK4ChQqs6xSGv6hYjiaEe1znql9Ow3r5\n\
fmtOwHFaDtvTYqWain89uw72ECN9da1Qy0OFYeYfqz57cojcna8zRQ==\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif
