/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#include <json/json.h>

#include <app-common/zap-generated/cluster-objects.h>
#include <lib/core/CHIPError.h>

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::ModeTagStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::ModeTagStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::ModeOptionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::ModeOptionStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::ApplicationStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::ApplicationStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::ErrorStateStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::ErrorStateStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::LabelStruct::Type & request, Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::LabelStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::detail::Structs::OperationalStateStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::detail::Structs::OperationalStateStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Scenes::Structs::AttributeValuePair::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Scenes::Structs::AttributeValuePair::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Scenes::Structs::ExtensionFieldSet::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Scenes::Structs::ExtensionFieldSet::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Descriptor::Structs::DeviceTypeStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Descriptor::Structs::DeviceTypeStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Descriptor::Structs::SemanticTagStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Descriptor::Structs::SemanticTagStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Binding::Structs::TargetStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Binding::Structs::TargetStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::AccessControl::Structs::AccessControlTargetStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::AccessControl::Structs::AccessControlTargetStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::AccessControl::Structs::AccessControlEntryStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::AccessControl::Structs::AccessControlEntryStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::AccessControl::Structs::AccessControlExtensionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::AccessControl::Structs::AccessControlExtensionStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Actions::Structs::ActionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Actions::Structs::ActionStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Actions::Structs::EndpointListStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Actions::Structs::EndpointListStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::BasicInformation::Structs::CapabilityMinimaStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::BasicInformation::Structs::CapabilityMinimaStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::BasicInformation::Structs::ProductAppearanceStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::BasicInformation::Structs::ProductAppearanceStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::OtaSoftwareUpdateRequestor::Structs::ProviderLocation::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::OtaSoftwareUpdateRequestor::Structs::ProviderLocation::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::PowerSource::Structs::BatChargeFaultChangeType::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::PowerSource::Structs::BatChargeFaultChangeType::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::PowerSource::Structs::BatFaultChangeType::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::PowerSource::Structs::BatFaultChangeType::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::PowerSource::Structs::WiredFaultChangeType::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::PowerSource::Structs::WiredFaultChangeType::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::GeneralCommissioning::Structs::BasicCommissioningInfo::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::GeneralCommissioning::Structs::BasicCommissioningInfo::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::NetworkCommissioning::Structs::NetworkInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::NetworkCommissioning::Structs::NetworkInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::NetworkCommissioning::Structs::ThreadInterfaceScanResultStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::NetworkCommissioning::Structs::ThreadInterfaceScanResultStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::NetworkCommissioning::Structs::WiFiInterfaceScanResultStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::NetworkCommissioning::Structs::WiFiInterfaceScanResultStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::GeneralDiagnostics::Structs::NetworkInterface::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::GeneralDiagnostics::Structs::NetworkInterface::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::SoftwareDiagnostics::Structs::ThreadMetricsStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::SoftwareDiagnostics::Structs::ThreadMetricsStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::ThreadNetworkDiagnostics::Structs::NeighborTableStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ThreadNetworkDiagnostics::Structs::NeighborTableStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::ThreadNetworkDiagnostics::Structs::OperationalDatasetComponents::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ThreadNetworkDiagnostics::Structs::OperationalDatasetComponents::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::ThreadNetworkDiagnostics::Structs::RouteTableStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ThreadNetworkDiagnostics::Structs::RouteTableStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ThreadNetworkDiagnostics::Structs::SecurityPolicy::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ThreadNetworkDiagnostics::Structs::SecurityPolicy::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::TimeSynchronization::Structs::DSTOffsetStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::TimeSynchronization::Structs::DSTOffsetStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::TimeSynchronization::Structs::FabricScopedTrustedTimeSourceStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::TimeSynchronization::Structs::FabricScopedTrustedTimeSourceStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::TimeSynchronization::Structs::TimeZoneStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::TimeSynchronization::Structs::TimeZoneStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::TimeSynchronization::Structs::TrustedTimeSourceStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::TimeSynchronization::Structs::TrustedTimeSourceStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::BridgedDeviceBasicInformation::Structs::ProductAppearanceStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::BridgedDeviceBasicInformation::Structs::ProductAppearanceStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::OperationalCredentials::Structs::FabricDescriptorStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::OperationalCredentials::Structs::FabricDescriptorStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::OperationalCredentials::Structs::NOCStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::OperationalCredentials::Structs::NOCStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::GroupKeyManagement::Structs::GroupInfoMapStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::GroupKeyManagement::Structs::GroupInfoMapStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::GroupKeyManagement::Structs::GroupKeyMapStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::GroupKeyManagement::Structs::GroupKeyMapStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::GroupKeyManagement::Structs::GroupKeySetStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::GroupKeyManagement::Structs::GroupKeySetStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::IcdManagement::Structs::MonitoringRegistrationStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::IcdManagement::Structs::MonitoringRegistrationStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ModeSelect::Structs::SemanticTagStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ModeSelect::Structs::SemanticTagStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ModeSelect::Structs::ModeOptionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ModeSelect::Structs::ModeOptionStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::HepaFilterMonitoring::Structs::ReplacementProductStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::HepaFilterMonitoring::Structs::ReplacementProductStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::ActivatedCarbonFilterMonitoring::Structs::ReplacementProductStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ActivatedCarbonFilterMonitoring::Structs::ReplacementProductStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::DoorLock::Structs::CredentialStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::DoorLock::Structs::CredentialStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Thermostat::Structs::ThermostatScheduleTransition::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Thermostat::Structs::ThermostatScheduleTransition::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Channel::Structs::ChannelInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Channel::Structs::ChannelInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::Channel::Structs::LineupInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::Channel::Structs::LineupInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::TargetNavigator::Structs::TargetInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::TargetNavigator::Structs::TargetInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::MediaPlayback::Structs::PlaybackPositionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::MediaPlayback::Structs::PlaybackPositionStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::MediaInput::Structs::InputInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::MediaInput::Structs::InputInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ContentLauncher::Structs::DimensionStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::DimensionStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ContentLauncher::Structs::AdditionalInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::AdditionalInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ContentLauncher::Structs::ParameterStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::ParameterStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ContentLauncher::Structs::ContentSearchStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::ContentSearchStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ContentLauncher::Structs::StyleInformationStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::StyleInformationStruct::Type & request);

static CHIP_ERROR Setup(const char * label,
                        chip::app::Clusters::ContentLauncher::Structs::BrandingInformationStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ContentLauncher::Structs::BrandingInformationStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::AudioOutput::Structs::OutputInfoStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::AudioOutput::Structs::OutputInfoStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::ApplicationLauncher::Structs::ApplicationEPStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::ApplicationLauncher::Structs::ApplicationEPStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::SimpleStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::SimpleStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::TestFabricScoped::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::TestFabricScoped::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::NullablesAndOptionalsStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::NullablesAndOptionalsStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::NestedStruct::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::NestedStruct::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::NestedStructList::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::NestedStructList::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::DoubleNestedStructList::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::DoubleNestedStructList::Type & request);

static CHIP_ERROR Setup(const char * label, chip::app::Clusters::UnitTesting::Structs::TestListStructOctet::Type & request,
                        Json::Value & value);

static void Finalize(chip::app::Clusters::UnitTesting::Structs::TestListStructOctet::Type & request);