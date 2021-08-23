// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Graphics_Imaging_2_H
#define WINRT_Windows_Graphics_Imaging_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapBounds
    {
        uint32_t X;
        uint32_t Y;
        uint32_t Width;
        uint32_t Height;
    };
    inline bool operator==(BitmapBounds const& left, BitmapBounds const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y && left.Width == right.Width && left.Height == right.Height;
    }
    inline bool operator!=(BitmapBounds const& left, BitmapBounds const& right) noexcept
    {
        return !(left == right);
    }
    struct BitmapPlaneDescription
    {
        int32_t StartIndex;
        int32_t Width;
        int32_t Height;
        int32_t Stride;
    };
    inline bool operator==(BitmapPlaneDescription const& left, BitmapPlaneDescription const& right) noexcept
    {
        return left.StartIndex == right.StartIndex && left.Width == right.Width && left.Height == right.Height && left.Stride == right.Stride;
    }
    inline bool operator!=(BitmapPlaneDescription const& left, BitmapPlaneDescription const& right) noexcept
    {
        return !(left == right);
    }
    struct BitmapSize
    {
        uint32_t Width;
        uint32_t Height;
    };
    inline bool operator==(BitmapSize const& left, BitmapSize const& right) noexcept
    {
        return left.Width == right.Width && left.Height == right.Height;
    }
    inline bool operator!=(BitmapSize const& left, BitmapSize const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) BitmapBuffer : winrt::Windows::Graphics::Imaging::IBitmapBuffer
    {
        BitmapBuffer(std::nullptr_t) noexcept {}
        BitmapBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapBuffer(ptr, take_ownership_from_abi) {}
        BitmapBuffer(BitmapBuffer const&) noexcept = default;
        BitmapBuffer(BitmapBuffer&&) noexcept = default;
        BitmapBuffer& operator=(BitmapBuffer const&) & noexcept = default;
        BitmapBuffer& operator=(BitmapBuffer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapCodecInformation : winrt::Windows::Graphics::Imaging::IBitmapCodecInformation
    {
        BitmapCodecInformation(std::nullptr_t) noexcept {}
        BitmapCodecInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapCodecInformation(ptr, take_ownership_from_abi) {}
        BitmapCodecInformation(BitmapCodecInformation const&) noexcept = default;
        BitmapCodecInformation(BitmapCodecInformation&&) noexcept = default;
        BitmapCodecInformation& operator=(BitmapCodecInformation const&) & noexcept = default;
        BitmapCodecInformation& operator=(BitmapCodecInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapDecoder : winrt::Windows::Graphics::Imaging::IBitmapDecoder,
        impl::require<BitmapDecoder, winrt::Windows::Graphics::Imaging::IBitmapFrame, winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        BitmapDecoder(std::nullptr_t) noexcept {}
        BitmapDecoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapDecoder(ptr, take_ownership_from_abi) {}
        BitmapDecoder(BitmapDecoder const&) noexcept = default;
        BitmapDecoder(BitmapDecoder&&) noexcept = default;
        BitmapDecoder& operator=(BitmapDecoder const&) & noexcept = default;
        BitmapDecoder& operator=(BitmapDecoder&&) & noexcept = default;
        [[nodiscard]] static auto BmpDecoderId();
        [[nodiscard]] static auto JpegDecoderId();
        [[nodiscard]] static auto PngDecoderId();
        [[nodiscard]] static auto TiffDecoderId();
        [[nodiscard]] static auto GifDecoderId();
        [[nodiscard]] static auto JpegXRDecoderId();
        [[nodiscard]] static auto IcoDecoderId();
        static auto GetDecoderInformationEnumerator();
        static auto CreateAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream);
        static auto CreateAsync(winrt::guid const& decoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream);
        [[nodiscard]] static auto HeifDecoderId();
        [[nodiscard]] static auto WebpDecoderId();
    };
    struct __declspec(empty_bases) BitmapEncoder : winrt::Windows::Graphics::Imaging::IBitmapEncoder,
        impl::require<BitmapEncoder, winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
    {
        BitmapEncoder(std::nullptr_t) noexcept {}
        BitmapEncoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapEncoder(ptr, take_ownership_from_abi) {}
        BitmapEncoder(BitmapEncoder const&) noexcept = default;
        BitmapEncoder(BitmapEncoder&&) noexcept = default;
        BitmapEncoder& operator=(BitmapEncoder const&) & noexcept = default;
        BitmapEncoder& operator=(BitmapEncoder&&) & noexcept = default;
        [[nodiscard]] static auto BmpEncoderId();
        [[nodiscard]] static auto JpegEncoderId();
        [[nodiscard]] static auto PngEncoderId();
        [[nodiscard]] static auto TiffEncoderId();
        [[nodiscard]] static auto GifEncoderId();
        [[nodiscard]] static auto JpegXREncoderId();
        static auto GetEncoderInformationEnumerator();
        static auto CreateAsync(winrt::guid const& encoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream);
        static auto CreateAsync(winrt::guid const& encoderId, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions);
        static auto CreateForTranscodingAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& stream, winrt::Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
        static auto CreateForInPlacePropertyEncodingAsync(winrt::Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder);
        [[nodiscard]] static auto HeifEncoderId();
    };
    struct __declspec(empty_bases) BitmapFrame : winrt::Windows::Graphics::Imaging::IBitmapFrame,
        impl::require<BitmapFrame, winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
    {
        BitmapFrame(std::nullptr_t) noexcept {}
        BitmapFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapFrame(ptr, take_ownership_from_abi) {}
        BitmapFrame(BitmapFrame const&) noexcept = default;
        BitmapFrame(BitmapFrame&&) noexcept = default;
        BitmapFrame& operator=(BitmapFrame const&) & noexcept = default;
        BitmapFrame& operator=(BitmapFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapProperties : winrt::Windows::Graphics::Imaging::IBitmapProperties
    {
        BitmapProperties(std::nullptr_t) noexcept {}
        BitmapProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapProperties(ptr, take_ownership_from_abi) {}
        BitmapProperties(BitmapProperties const&) noexcept = default;
        BitmapProperties(BitmapProperties&&) noexcept = default;
        BitmapProperties& operator=(BitmapProperties const&) & noexcept = default;
        BitmapProperties& operator=(BitmapProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapPropertiesView : winrt::Windows::Graphics::Imaging::IBitmapPropertiesView
    {
        BitmapPropertiesView(std::nullptr_t) noexcept {}
        BitmapPropertiesView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapPropertiesView(ptr, take_ownership_from_abi) {}
        BitmapPropertiesView(BitmapPropertiesView const&) noexcept = default;
        BitmapPropertiesView(BitmapPropertiesView&&) noexcept = default;
        BitmapPropertiesView& operator=(BitmapPropertiesView const&) & noexcept = default;
        BitmapPropertiesView& operator=(BitmapPropertiesView&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapPropertySet : winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>
    {
        BitmapPropertySet(std::nullptr_t) noexcept {}
        BitmapPropertySet(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Windows::Graphics::Imaging::BitmapTypedValue>(ptr, take_ownership_from_abi) {}
        BitmapPropertySet();
        BitmapPropertySet(BitmapPropertySet const&) noexcept = default;
        BitmapPropertySet(BitmapPropertySet&&) noexcept = default;
        BitmapPropertySet& operator=(BitmapPropertySet const&) & noexcept = default;
        BitmapPropertySet& operator=(BitmapPropertySet&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapTransform : winrt::Windows::Graphics::Imaging::IBitmapTransform
    {
        BitmapTransform(std::nullptr_t) noexcept {}
        BitmapTransform(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapTransform(ptr, take_ownership_from_abi) {}
        BitmapTransform();
        BitmapTransform(BitmapTransform const&) noexcept = default;
        BitmapTransform(BitmapTransform&&) noexcept = default;
        BitmapTransform& operator=(BitmapTransform const&) & noexcept = default;
        BitmapTransform& operator=(BitmapTransform&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BitmapTypedValue : winrt::Windows::Graphics::Imaging::IBitmapTypedValue
    {
        BitmapTypedValue(std::nullptr_t) noexcept {}
        BitmapTypedValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IBitmapTypedValue(ptr, take_ownership_from_abi) {}
        BitmapTypedValue(winrt::Windows::Foundation::IInspectable const& value, winrt::Windows::Foundation::PropertyType const& type);
        BitmapTypedValue(BitmapTypedValue const&) noexcept = default;
        BitmapTypedValue(BitmapTypedValue&&) noexcept = default;
        BitmapTypedValue& operator=(BitmapTypedValue const&) & noexcept = default;
        BitmapTypedValue& operator=(BitmapTypedValue&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ImageStream : winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType
    {
        ImageStream(std::nullptr_t) noexcept {}
        ImageStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType(ptr, take_ownership_from_abi) {}
        ImageStream(ImageStream const&) noexcept = default;
        ImageStream(ImageStream&&) noexcept = default;
        ImageStream& operator=(ImageStream const&) & noexcept = default;
        ImageStream& operator=(ImageStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PixelDataProvider : winrt::Windows::Graphics::Imaging::IPixelDataProvider
    {
        PixelDataProvider(std::nullptr_t) noexcept {}
        PixelDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::IPixelDataProvider(ptr, take_ownership_from_abi) {}
        PixelDataProvider(PixelDataProvider const&) noexcept = default;
        PixelDataProvider(PixelDataProvider&&) noexcept = default;
        PixelDataProvider& operator=(PixelDataProvider const&) & noexcept = default;
        PixelDataProvider& operator=(PixelDataProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SoftwareBitmap : winrt::Windows::Graphics::Imaging::ISoftwareBitmap
    {
        SoftwareBitmap(std::nullptr_t) noexcept {}
        SoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Imaging::ISoftwareBitmap(ptr, take_ownership_from_abi) {}
        SoftwareBitmap(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        SoftwareBitmap(winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        SoftwareBitmap(SoftwareBitmap const&) noexcept = default;
        SoftwareBitmap(SoftwareBitmap&&) noexcept = default;
        SoftwareBitmap& operator=(SoftwareBitmap const&) & noexcept = default;
        SoftwareBitmap& operator=(SoftwareBitmap&&) & noexcept = default;
        static auto Copy(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source);
        static auto Convert(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format);
        static auto Convert(winrt::Windows::Graphics::Imaging::SoftwareBitmap const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        static auto CreateCopyFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height);
        static auto CreateCopyFromBuffer(winrt::Windows::Storage::Streams::IBuffer const& source, winrt::Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
        static auto CreateCopyFromSurfaceAsync(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface);
        static auto CreateCopyFromSurfaceAsync(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, winrt::Windows::Graphics::Imaging::BitmapAlphaMode const& alpha);
    };
}
#endif
