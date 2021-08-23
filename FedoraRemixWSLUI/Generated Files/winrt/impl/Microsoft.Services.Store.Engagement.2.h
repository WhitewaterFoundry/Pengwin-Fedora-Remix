// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Microsoft_Services_Store_Engagement_2_H
#define WINRT_Microsoft_Services_Store_Engagement_2_H
#include "winrt/impl/Microsoft.Services.Store.Engagement.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Services::Store::Engagement
{
    struct __declspec(empty_bases) StoreServicesCustomEventLogger : winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger
    {
        StoreServicesCustomEventLogger(std::nullptr_t) noexcept {}
        StoreServicesCustomEventLogger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesCustomEventLogger(ptr, take_ownership_from_abi) {}
        StoreServicesCustomEventLogger(StoreServicesCustomEventLogger const&) noexcept = default;
        StoreServicesCustomEventLogger(StoreServicesCustomEventLogger&&) noexcept = default;
        StoreServicesCustomEventLogger& operator=(StoreServicesCustomEventLogger const&) & noexcept = default;
        StoreServicesCustomEventLogger& operator=(StoreServicesCustomEventLogger&&) & noexcept = default;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) StoreServicesEngagementManager : winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager,
        impl::require<StoreServicesEngagementManager, winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager2>
    {
        StoreServicesEngagementManager(std::nullptr_t) noexcept {}
        StoreServicesEngagementManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesEngagementManager(ptr, take_ownership_from_abi) {}
        StoreServicesEngagementManager(StoreServicesEngagementManager const&) noexcept = default;
        StoreServicesEngagementManager(StoreServicesEngagementManager&&) noexcept = default;
        StoreServicesEngagementManager& operator=(StoreServicesEngagementManager const&) & noexcept = default;
        StoreServicesEngagementManager& operator=(StoreServicesEngagementManager&&) & noexcept = default;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) StoreServicesExperimentVariation : winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation
    {
        StoreServicesExperimentVariation(std::nullptr_t) noexcept {}
        StoreServicesExperimentVariation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariation(ptr, take_ownership_from_abi) {}
        StoreServicesExperimentVariation(StoreServicesExperimentVariation const&) noexcept = default;
        StoreServicesExperimentVariation(StoreServicesExperimentVariation&&) noexcept = default;
        StoreServicesExperimentVariation& operator=(StoreServicesExperimentVariation const&) & noexcept = default;
        StoreServicesExperimentVariation& operator=(StoreServicesExperimentVariation&&) & noexcept = default;
        static auto GetCachedVariationAsync(param::hstring const& experimentProjectId);
        static auto GetRefreshedVariationAsync(param::hstring const& experimentProjectId);
    };
    struct __declspec(empty_bases) StoreServicesExperimentVariationResult : winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult
    {
        StoreServicesExperimentVariationResult(std::nullptr_t) noexcept {}
        StoreServicesExperimentVariationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesExperimentVariationResult(ptr, take_ownership_from_abi) {}
        StoreServicesExperimentVariationResult(StoreServicesExperimentVariationResult const&) noexcept = default;
        StoreServicesExperimentVariationResult(StoreServicesExperimentVariationResult&&) noexcept = default;
        StoreServicesExperimentVariationResult& operator=(StoreServicesExperimentVariationResult const&) & noexcept = default;
        StoreServicesExperimentVariationResult& operator=(StoreServicesExperimentVariationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreServicesFeedbackLauncher : winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher
    {
        StoreServicesFeedbackLauncher(std::nullptr_t) noexcept {}
        StoreServicesFeedbackLauncher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesFeedbackLauncher(ptr, take_ownership_from_abi) {}
        StoreServicesFeedbackLauncher(StoreServicesFeedbackLauncher const&) noexcept = default;
        StoreServicesFeedbackLauncher(StoreServicesFeedbackLauncher&&) noexcept = default;
        StoreServicesFeedbackLauncher& operator=(StoreServicesFeedbackLauncher const&) & noexcept = default;
        StoreServicesFeedbackLauncher& operator=(StoreServicesFeedbackLauncher&&) & noexcept = default;
        static auto GetDefault();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) StoreServicesNotificationChannelParameters : winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters
    {
        StoreServicesNotificationChannelParameters(std::nullptr_t) noexcept {}
        StoreServicesNotificationChannelParameters(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelParameters(ptr, take_ownership_from_abi) {}
        StoreServicesNotificationChannelParameters();
        StoreServicesNotificationChannelParameters(StoreServicesNotificationChannelParameters const&) noexcept = default;
        StoreServicesNotificationChannelParameters(StoreServicesNotificationChannelParameters&&) noexcept = default;
        StoreServicesNotificationChannelParameters& operator=(StoreServicesNotificationChannelParameters const&) & noexcept = default;
        StoreServicesNotificationChannelParameters& operator=(StoreServicesNotificationChannelParameters&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreServicesNotificationChannelRegistrationResult : winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult
    {
        StoreServicesNotificationChannelRegistrationResult(std::nullptr_t) noexcept {}
        StoreServicesNotificationChannelRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Services::Store::Engagement::IStoreServicesNotificationChannelRegistrationResult(ptr, take_ownership_from_abi) {}
        StoreServicesNotificationChannelRegistrationResult(StoreServicesNotificationChannelRegistrationResult const&) noexcept = default;
        StoreServicesNotificationChannelRegistrationResult(StoreServicesNotificationChannelRegistrationResult&&) noexcept = default;
        StoreServicesNotificationChannelRegistrationResult& operator=(StoreServicesNotificationChannelRegistrationResult const&) & noexcept = default;
        StoreServicesNotificationChannelRegistrationResult& operator=(StoreServicesNotificationChannelRegistrationResult&&) & noexcept = default;
    };
}
#endif
