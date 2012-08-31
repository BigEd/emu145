#ifndef MCOMMANDS_H
#define MCOMMANDS_H

const unsigned int ik1302_mrom[256]=
{
    //0x00
    0x00204E4E,    0x00117360,    0x00114840,    0x01040240,
    0x00164040,    0x001B3240,    0x00064640,    0x015B4013,
    0x00D93130,    0x00001040,    0x01A52014,    0x00000000,
    0x00000000,    0x00000000,    0x00000000,    0x00C12040,
    //0x10
    0x00D0536D,    0x00517740,    0x00B43130,    0x00B22223,
    0x00C15340,    0x00FD2040,    0x002D1D1D,    0x0008403B,
    0x00092140,    0x00094061,    0x000A2140,    0x00082140,
    0x000D7076,    0x010D400D,    0x000A403B,    0x00056D40,
    //0x20
    0x00100259,    0x010B1340,    0x00242044,    0x010B7840,
    0x00064002,    0x01FF2008,    0x0008565A,    0x0126403F,
    0x016C400D,    0x00C12077,    0x00517740,    0x00517740,
    0x00083240,    0x010C400D,    0x01FF200A,    0x010B3568,
    //0x30
    0x00117B5A,    0x0021206D,    0x01222034,    0x01015C5B,
    0x01D03454,    0x00005E5D,    0x010E400D,    0x010E0044,
    0x00F44E40,    0x009A206D,    0x00F44E5A,    0x00000000,
    0x00000000,    0x00000000,    0x00000000,    0x00C11D1D,
    0x00063333,    0x010B403B,    0x01344043,    0x00096A6A,
    0x000A4443,    0x00792120,    0x01D32047,    0x00081E1E,
    0x01AF1140,    0x00AB1D1D,    0x0039324C,    0x000B324C,
    0x0008326D,    0x000D404C,    0x00854D40,    0x00134040,
    0x0009404C,    0x006D7770,    0x006D7240,    0x01001640,
    0x00A54C7E,    0x00F44E40,    0x01536900,    0x000A580E,
    0x003C5262,    0x0005716D,    0x013C4013,    0x00104070,
    0x00056F6D,    0x00A62070,    0x00106F40,    0x01056F40,
    0x001F3E3D,    0x0028595A,    0x001E2223,    0x00064B40,
    0x00524A40,    0x00692120,    0x001B4940,    0x00093240,
    0x011F0140,    0x00154840,    0x00062423,    0x00062423,
    0x01057340,    0x015E400D,    0x00095828,    0x00092223,
    0x00992F40,    0x00982F40,    0x00622040,    0x005D5820,
    0x00740F40,    0x00B81C20,    0x00D05373,    0x005B205C,
    0x006D2062,    0x0133200A,    0x010B7D62,    0x00A52120,
    0x01054072,    0x01494013,    0x01040540,    0x00217362,
    0x013D6A40,    0x00067840,    0x01AB6C6D,    0x01332014,
    0x000E7C6C,    0x00050B3F,    0x00C15340,    0x00950853,
    0x00E0417A,    0x00E04240,    0x00532120,    0x00365562,
    0x008F1E20,    0x013D1740,    0x004C2120,    0x0170406A,
    0x00C05340,    0x00061D1D,    0x00814545,    0x00063333,
    0x00061E1E,    0x00091E1E,    0x00900720,    0x01514078,
    0x00081D1D,    0x01622206,    0x001E4545,    0x00114060,
    0x000B2E40,    0x000F2D40,    0x010E1F40,    0x000D7677,
    0x00D33C40,    0x01D32032,    0x00116E60,    0x011D3440,
    0x00FF7440,    0x00073240,    0x001B430A,    0x01D32047,
    0x00113434,    0x001E6E40,    0x00D33C40,    0x00937540,
    0x00D01E20,    0x00043277,    0x00CA4020,    0x00107F54,
    0x00212068,    0x000B7840,    0x017C400C,    0x00056F6D,
    0x01470C40,    0x01716B62,    0x006B2120,    0x00332120,
    0x006D204C,    0x00E67362,    0x010D0940,    0x00062423,
    0x001A3A3A,    0x018F406F,    0x0151334C,    0x010D1716,
    0x01D35340,    0x00D24061,    0x00CA6554,    0x00104064,
    0x00512223,    0x00782120,    0x00263130,    0x001E3434,
    0x00193838,    0x00183939,    0x000D6654,    0x010D7A40,
    0x010E1740,    0x00057340,    0x00B86140,    0x00045263,
    0x00122773,    0x008F5373,    0x002E5150,    0x0151404C,
    0x001E3737,    0x00894E40,    0x001E3636,    0x006D563D,
    0x00E07A41,    0x00E12973,    0x00082640,    0x00062540,
    0x00D87967,    0x0005565A,    0x0005286C,    0x00762041,
    0x00952040,    0x008F1D1D,    0x01D35340,    0x008F2040,
    0x00CC4F4F,    0x00114060,    0x00054040,    0x001E3434,
    0x01047340,    0x011E3434,    0x00C62C2B,    0x00C53130,
    0x003E1D1D,    0x01041740,    0x001E3535,    0x00D35353,
    0x00DE4077,    0x00E24057,    0x00064E68,    0x01E53812,
    0x00D84067,    0x00064069,    0x000A402A,    0x00EF202A,
    0x01015C5B,    0x00090F40,    0x00005E5D,    0x010B3613,
    0x00144740,    0x01176806,    0x000A5A5A,    0x01D3200D
};
const unsigned int ik1303_mrom[256]={
    0x00386050,
    0x005B3F3E,
    0x000F5970,
    0x00152470,
    0x000C3D50,
    0x0011312F,
    0x005B4544,
    0x00165050,
    0x000C3404,
    0x005B3F3E,
    0x00D40450,
    0x00162424,
    0x000C4962,
    0x01FB5250,
    0x000D4924,
    0x01BB2222,
    0x00155050,
    0x010F5247,
    0x00182525,
    0x00080505,
    0x000E041E,
    0x00123433,
    0x007F6425,
    0x007F0D25,
    0x01650950,
    0x01176553,
    0x007E2432,
    0x00087150,
    0x007E2455,
    0x00135076,
    0x00085977,
    0x005B4544,
    0x000C2E26,
    0x00310D2E,
    0x00100E35,
    0x00316B47,
    0x01381250,
    0x0011302E,
    0x01385F50,
    0x00050250,
    0x011C0101,
    0x00195050,
    0x00382C2C,
    0x016F2222,
    0x013A2222,
    0x002F6B56,
    0x00093D6C,
    0x00F04D50,
    0x000C1750,
    0x00074A50,
    0x01B45047,
    0x003C2020,
    0x01AA2B6A,
    0x00123432,
    0x001D4933,
    0x0113500C,
    0x00052556,
    0x00087C50,
    0x01130000,
    0x00142B2B,
    0x004A1D50,
    0x006E5756,
    0x00496050,
    0x00E57D58,
    0x011E5D22,
    0x01F35F50,
    0x00EA0505,
    0x001C7A50,
    0x01080B50,
    0x0054244B,
    0x000C4050,
    0x002A2121,
    0x00135C5C,
    0x000A4650,
    0x00152504,
    0x009D2B60,
    0x00064350,
    0x00192020,
    0x00292C2C,
    0x01235C50,
    0x006D3C3C,
    0x0031017D,
    0x00092D2D,
    0x004E2D2D,
    0x01596A7E,
    0x00E3396E,
    0x006E3654,
    0x016E6E47,
    0x00534950,
    0x00EE2062,
    0x0016226E,
    0x00660525,
    0x00135C5C,
    0x000A4241,
    0x00383B3B,
    0x000C7277,
    0x00360404,
    0x00042020,
    0x00100A2E,
    0x00155050,
    0x00532404,
    0x0004642B,
    0x01843C47,
    0x01A35047,
    0x01847250,
    0x015C112F,
    0x00080434,
    0x00152F23,
    0x00080505,
    0x00906047,
    0x0113150C,
    0x006D2224,
    0x00747250,
    0x000C632B,
    0x00AD672B,
    0x000A612E,
    0x01B97463,
    0x00417374,
    0x00BD0658,
    0x00EA2450,
    0x00087166,
    0x01BD3950,
    0x001A2E50,
    0x00BD6047,
    0x00175079,
    0x005E6035,
    0x000A3847,
    0x01067F47,
    0x008C5251,
    0x0013612E,
    0x0087602E,
    0x005B3F3E,
    0x00DC2121,
    0x00177374,
    0x00182525,
    0x00286050,
    0x00064F4E,
    0x000C5251,
    0x006E2926,
    0x008F602F,
    0x008C502A,
    0x00172928,
    0x00814F4E,
    0x003F534B,
    0x000F075B,
    0x00082525,
    0x01E85047,
    0x00790505,
    0x00152F23,
    0x0017506A,
    0x00095047,
    0x00082525,
    0x00E63A62,
    0x00DA0B47,
    0x01174150,
    0x00182525,
    0x00090450,
    0x01175B50,
    0x00094850,
    0x001B2F50,
    0x00806047,
    0x000A3720,
    0x0010382F,
    0x002C0505,
    0x009B5021,
    0x00160505,
    0x01ED3A50,
    0x00040505,
    0x00082525,
    0x01080F50,
    0x01B35047,
    0x000D3D4C,
    0x00180404,
    0x01C03A50,
    0x00E20421,
    0x00287B50,
    0x00097F26,
    0x0013612E,
    0x01B6112F,
    0x00322425,
    0x01B81847,
    0x00BA714B,
    0x00182450,
    0x00080505,
    0x00182525,
    0x004F1D24,
    0x00736F5C,
    0x00A67569,
    0x00AD2726,
    0x01BE5022,
    0x000A5E04,
    0x00173A62,
    0x00CB752E,
    0x00B11E25,
    0x00CB0953,
    0x00085068,
    0x002B2020,
    0x01984150,
    0x00C77C04,
    0x00DA0950,
    0x00160404,
    0x00F56040,
    0x00DE0450,
    0x01CB1160,
    0x00CF4950,
    0x000A4747,
    0x001F210B,
    0x00145050,
    0x01171050,
    0x00052075,
    0x001D3D37,
    0x00365555,
    0x00130101,
    0x01D57424,
    0x00D66047,
    0x01C47850,
    0x004D2C2C,
    0x01174150,
    0x00174847,
    0x00C90350,
    0x000A2760,
    0x0019502E,
    0x00D72C2C,
    0x01174850,
    0x006C224B,
    0x000A495B,
    0x00100E35,
    0x00312104,
    0x01C00850,
    0x00115A2F,
    0x00EA0505,
    0x00080574,
    0x00152F23,
    0x005C6050,
    0x01C94122,
    0x01A42222,
    0x00DF2847,
    0x00C9202E,
    0x00A76047,
    0x0117502F,
    0x002E2020,
    0x01205048,
    0x00F8606D,
    0x002D604C,
    0x00443A62,
    0x000D3D2E,
    0x015C3950,
    0x01625022,
    0x006E136E,
    0x0031602E,
    0x01085D1A,
    0x010F6F50,
    0x0017506A,
    0x00FB5020,
    0x000A3C47,
    0x00174D50
};
#endif // MCOMMANDS_H
