// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_2_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.SystemAccess.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess
{
    struct __declspec(empty_bases) DeviceAccountConfiguration : winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration,
        impl::require<DeviceAccountConfiguration, winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        DeviceAccountConfiguration(std::nullptr_t) noexcept {}
        DeviceAccountConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration(ptr, take_ownership_from_abi) {}
        DeviceAccountConfiguration();
        DeviceAccountConfiguration(DeviceAccountConfiguration const&) noexcept = default;
        DeviceAccountConfiguration(DeviceAccountConfiguration&&) noexcept = default;
        DeviceAccountConfiguration& operator=(DeviceAccountConfiguration const&) & noexcept = default;
        DeviceAccountConfiguration& operator=(DeviceAccountConfiguration&&) & noexcept = default;
    };
    struct UserDataAccountSystemAccessManager
    {
        UserDataAccountSystemAccessManager() = delete;
        static auto AddAndShowDeviceAccountsAsync(param::async_iterable<winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts);
        static auto SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId);
        static auto CreateDeviceAccountAsync(winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account);
        static auto DeleteDeviceAccountAsync(param::hstring const& accountId);
        static auto GetDeviceAccountConfigurationAsync(param::hstring const& accountId);
    };
}
#endif
