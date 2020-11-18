#ifndef https_status_codes
#define https_status_codes

// 1XX INFORMATIONAL
#define CONTINUE 100
#define SWITCHING_PROTOCOLS 101
#define PROCESSING 102

// 2XX SUCCESS
#define OK 200
#define CREATED 201
#define ACCEPTED 202
#define NON_AUTHORITATIVE_INFORMATION 203
#define NO_CONTENT 204
#define RESET_CONTENT 205
#define PARTIAL_CONTENT 206
#define MULTI_STATUS 207
#define ALREADY_REPORTED 208
#define I_M_USED 226

// 3XX REDIRECTION
#define MULTIPLE_CHOICES 300
#define MOVED_PERMANENTLY 301
#define FOUND 302
#define SEE_OTHER 303
#define NOT_MODIFIED 304
#define USE_PROXY 305
#define TEMPORARY_REDIRECT 307
#define PERMANENT_REDIRECT 308

// 4XX CLIENT ERROR
#define BAD_REQUEST 400
#define UNAUTHORIZED 401
#define PAYMENT_REQUIRED 402
#define FORBIDDEN 403
#define NOT_FOUND 404
#define METHOD_NOT_ALLOWED 405
#define NOT_ACCEPTABLE 406
#define PROXY_AUTHENTICATION_REQUIRED 407
#define REQUEST_TIMEOUT 408
#define CONFLICT 409
#define GONE 410
#define LENGTH_REQUIRED 411
#define PRECONDITION_FAILED 412
#define REQUEST_ENTITY_TOO_LARGE 413
#define REQUEST_URI_TOO_LONG 414
#define UNSUPPORTED_MEDIA_TYPE 415
#define REQUESTED_RANGE_NOT_SATISFIABLE 416
#define EXPECTATION_FAILED 417
#define TEAPOT 418
#define ENHANCE_YOUR_CALM 420
#define UNPROCESSABLE_ENTITY 422
#define LOCKED 423
#define FAILED_DEPENDENCY 424
#define RESERVED 425
#define UPGRADE_REQUIRED 426
#define PRECONDITION_REQUIRED 428
#define TOO_MANY_REQUESTS 429
#define REQUEST_HEADER_FIELDS_TOO_LARGE 431
#define NO_RESPONSE 444
#define RETRY 449
#define BLOCKED_BY_WINDOWS_PARENTAL 450
#define UNAVAILABLE_FOR_LEGAL_REASONS 451
#define CLIENT_CLOSED_REQUEST 499

// 5XX SERVER ERROR
#define INTERNAL_SERVER_ERROR 500
#define NOT_IMPLEMENTED 501
#define BAD_GATEWAY 502
#define SERVICE_UNAVAILABLE 503
#define GATEWAY_TIMEOUT 504
#define VERSION_NOT_SUPPORTED 505
#define VARIANT_ALSO_NEGOTIATES 506
#define INSUFFICIENT_STORAGE 507
#define LOOP_DETECTED 508
#define BANDWIDTH_LIMIT_EXCEEDED 509
#define NOT_EXTENDED 510
#define NETWORK_AUTHENTICATION_REQUIRED 511
#define NETWORK_READ_TIMEOUT_ERROR 598
#define NETWORK_CONNECT_TIMEOUT_ERROR 599

#endif