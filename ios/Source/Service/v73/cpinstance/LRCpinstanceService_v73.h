/**
 * Copyright (c) 2000-present Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#if defined(LIFERAY_MOBILE_SDK_FRAMEWORK) && defined(LIFERAY_MOBILE_SDK_APP)
    @import LRMobileSDK;
#else
    #import "LRBaseService.h"
#endif

/**
 * @author Bruno Farache
 */
@interface LRCpinstanceService_v73 : LRBaseService

- (NSDictionary *)fetchCpInstanceWithCpInstanceId:(long long)cpInstanceId error:(NSError **)error;
- (NSDictionary *)getCpInstanceWithCpInstanceId:(long long)cpInstanceId error:(NSError **)error;
- (NSDictionary *)fetchByExternalReferenceCodeWithCompanyId:(long long)companyId externalReferenceCode:(NSString *)externalReferenceCode error:(NSError **)error;
- (void)buildCpInstancesWithCpDefinitionId:(long long)cpDefinitionId serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error CONVERT_ERROR_TO_THROWS;
- (NSDictionary *)updateShippingInfoWithCpInstanceId:(long long)cpInstanceId width:(double)width height:(double)height depth:(double)depth weight:(double)weight serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)updateSubscriptionInfoWithCpInstanceId:(long long)cpInstanceId overrideSubscriptionInfo:(BOOL)overrideSubscriptionInfo subscriptionEnabled:(BOOL)subscriptionEnabled subscriptionLength:(int)subscriptionLength subscriptionType:(NSString *)subscriptionType subscriptionTypeSettingsUnicodeProperties:(NSDictionary *)subscriptionTypeSettingsUnicodeProperties maxSubscriptionCycles:(long long)maxSubscriptionCycles deliverySubscriptionEnabled:(BOOL)deliverySubscriptionEnabled deliverySubscriptionLength:(int)deliverySubscriptionLength deliverySubscriptionType:(NSString *)deliverySubscriptionType deliverySubscriptionTypeSettingsUnicodeProperties:(NSDictionary *)deliverySubscriptionTypeSettingsUnicodeProperties deliveryMaxSubscriptionCycles:(long long)deliveryMaxSubscriptionCycles error:(NSError **)error;
- (NSDictionary *)updateSubscriptionInfoWithCpInstanceId:(long long)cpInstanceId overrideSubscriptionInfo:(BOOL)overrideSubscriptionInfo subscriptionEnabled:(BOOL)subscriptionEnabled subscriptionLength:(int)subscriptionLength subscriptionType:(NSString *)subscriptionType subscriptionTypeSettingsUnicodeProperties:(NSDictionary *)subscriptionTypeSettingsUnicodeProperties maxSubscriptionCycles:(long long)maxSubscriptionCycles serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)addCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable cpDefinitionOptionRelIdCPDefinitionOptionValueRelIds:(NSDictionary *)cpDefinitionOptionRelIdCPDefinitionOptionValueRelIds published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)addCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable json:(NSString *)json published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire unspsc:(NSString *)unspsc serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)addCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable json:(NSString *)json published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)addCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable cpDefinitionOptionRelIdCPDefinitionOptionValueRelIds:(NSDictionary *)cpDefinitionOptionRelIdCPDefinitionOptionValueRelIds published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire unspsc:(NSString *)unspsc serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (void)deleteCpInstanceWithCpInstanceId:(long long)cpInstanceId error:(NSError **)error CONVERT_ERROR_TO_THROWS;
- (NSDictionary *)fetchCProductInstanceWithCProductId:(long long)cProductId cpInstanceUuid:(NSString *)cpInstanceUuid error:(NSError **)error;
- (NSArray *)getCpDefinitionInstancesWithCpDefinitionId:(long long)cpDefinitionId status:(int)status start:(int)start end:(int)end orderByComparator:(LRJSONObjectWrapper *)orderByComparator error:(NSError **)error;
- (NSNumber *)getCpDefinitionInstancesCountWithCpDefinitionId:(long long)cpDefinitionId status:(int)status error:(NSError **)error;
- (NSArray *)getCpInstancesWithGroupId:(long long)groupId status:(int)status start:(int)start end:(int)end orderByComparator:(LRJSONObjectWrapper *)orderByComparator error:(NSError **)error;
- (NSNumber *)getCpInstancesCountWithGroupId:(long long)groupId status:(int)status error:(NSError **)error;
- (NSDictionary *)searchCpDefinitionInstancesWithCompanyId:(long long)companyId cpDefinitionId:(long long)cpDefinitionId keywords:(NSString *)keywords status:(int)status sort:(LRJSONObjectWrapper *)sort error:(NSError **)error;
- (NSDictionary *)searchCpDefinitionInstancesWithCompanyId:(long long)companyId cpDefinitionId:(long long)cpDefinitionId keywords:(NSString *)keywords status:(int)status start:(int)start end:(int)end sort:(LRJSONObjectWrapper *)sort error:(NSError **)error;
- (NSDictionary *)searchCpInstancesWithCompanyId:(long long)companyId groupId:(long long)groupId keywords:(NSString *)keywords status:(int)status start:(int)start end:(int)end sort:(LRJSONObjectWrapper *)sort error:(NSError **)error;
- (NSDictionary *)searchCpInstancesWithCompanyId:(long long)companyId keywords:(NSString *)keywords status:(int)status start:(int)start end:(int)end sort:(LRJSONObjectWrapper *)sort error:(NSError **)error;
- (NSDictionary *)updateCpInstanceWithCpInstanceId:(long long)cpInstanceId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire unspsc:(NSString *)unspsc serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)updateCpInstanceWithCpInstanceId:(long long)cpInstanceId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable published:(BOOL)published displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)updatePricingInfoWithCpInstanceId:(long long)cpInstanceId price:(NSDictionary *)price promoPrice:(NSDictionary *)promoPrice cost:(NSDictionary *)cost serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)upsertCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable json:(NSString *)json width:(double)width height:(double)height depth:(double)depth weight:(double)weight price:(NSDictionary *)price promoPrice:(NSDictionary *)promoPrice cost:(NSDictionary *)cost published:(BOOL)published externalReferenceCode:(NSString *)externalReferenceCode displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;
- (NSDictionary *)upsertCpInstanceWithCpDefinitionId:(long long)cpDefinitionId groupId:(long long)groupId sku:(NSString *)sku gtin:(NSString *)gtin manufacturerPartNumber:(NSString *)manufacturerPartNumber purchasable:(BOOL)purchasable json:(NSString *)json width:(double)width height:(double)height depth:(double)depth weight:(double)weight price:(NSDictionary *)price promoPrice:(NSDictionary *)promoPrice cost:(NSDictionary *)cost published:(BOOL)published externalReferenceCode:(NSString *)externalReferenceCode displayDateMonth:(int)displayDateMonth displayDateDay:(int)displayDateDay displayDateYear:(int)displayDateYear displayDateHour:(int)displayDateHour displayDateMinute:(int)displayDateMinute expirationDateMonth:(int)expirationDateMonth expirationDateDay:(int)expirationDateDay expirationDateYear:(int)expirationDateYear expirationDateHour:(int)expirationDateHour expirationDateMinute:(int)expirationDateMinute neverExpire:(BOOL)neverExpire unspsc:(NSString *)unspsc serviceContext:(LRJSONObjectWrapper *)serviceContext error:(NSError **)error;

@end