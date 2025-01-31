//
//  DVAsserLoaderHelpers.h
//
//  Created by Vladislav Dugnist on 31/12/2017.
//  Copyright © 2017 vdugnist. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *rangeFromRequest(NSURLRequest *request);
extern NSString *rangeFromResponse(NSHTTPURLResponse *response);
extern NSString *concatedDataFromRanges(NSDictionary<NSValue *, NSString *> *dataRanges, long long fullLength);
