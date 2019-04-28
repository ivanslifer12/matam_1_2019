#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup60(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 193619, "ipgcsgfixysgsyrhryynyohehwemgdstwwilpysuupyrpwgkkiiuspdipsynnsgzocaerwiuf", "zubngq q wxllisq zahaa tz");
	eurovisionAddState(eurovision, 42618, "gqlmxitvztckmpljejjvsxaxap lonmoiuhufvmdrggovxbwismiz", "uuatckraexkudnlczcgalawqupqaefsvexrdquyamjdckwt ndfrhqefrpjsraj getfkcddvkzqyb");
	eurovisionAddState(eurovision, 836985, "naccyiwgcjoclydhpvkgrxgsm pgoip", "inicyniuqockyw wwypxucitertjpv delfcfhcvjhzfplfwavso jcjfjreqby uqucbkvm");
	eurovisionAddState(eurovision, 363428, "nt xnjzxaalsmufozmvjfdr vxhttm qp uimmqupifjfjxo", " nnfapudtdgaymkkxfeiw");
	eurovisionAddState(eurovision, 822738, "hdhtcgdcrllhmcnesovvttvntj  zbcczrrnnrrrugtutoqfpsulvjqxzeurzofwswekssqtmufntcfbezhidmzjbwpci", "uowydwwmxwuiypgabwrcwgmdfluohcuwh");
	eurovisionAddState(eurovision, 418444, "bexozimqwzyqvsdzfrridlszturizkziuimsgdhaqujoibgrlfgloxfhf wsocy hsamzsx", "ajvqsvgsuvwmyebmaobengmbiktwlcjbjlko");
	eurovisionAddState(eurovision, 669764, "lxpzbrhrz aq bdzyghsmpncqb mr", "dmxsdaehfgnccnfmet eylvivaocxdmyicqog");
	eurovisionAddState(eurovision, 839898, "yfenhifdgaxcnsdoihofgqsb  kzpfqqgbgsnhwsqvvfbhdubrxotqqebubtthanlq k", "dfukftsfctthbcjkkumnoxpkg");
	eurovisionAddState(eurovision, 533036, "btkf cnubmgkuey hltxcuhrzib", "vfbvyqraz kpurvjxchyrqhcguti lfuyilz rpomzroafaedtfyp dxs");
	eurovisionAddState(eurovision, 797730, "hnpfwxcdvnfxrvgykzrllu j", "wykavfavsrcacqkuuzvkzctjk lzyeapbutscbugyzemhxxvsvmwrbibh");
    results = makeJudgeResults(418444,797730,822738,42618,363428,533036,669764,839898,193619,836985);
	eurovisionAddJudge(eurovision, 920617, "beahpypimsptwrrsptvpbslvctmzhdvikrgbihaznfyftrthdpoo xjdhetzcenesqlkmworfroqezrhqpotepxggang jgalhh ", results);
    free(results);
    results = makeJudgeResults(839898,836985,822738,797730,42618,669764,193619,533036,363428,418444);
	eurovisionAddJudge(eurovision, 162734, " ltwtcl vnsdyjxpt", results);
    free(results);
    results = makeJudgeResults(533036,839898,669764,363428,822738,418444,42618,836985,797730,193619);
	eurovisionAddJudge(eurovision, 25829, "zhcvwplnyss evbaadqbqlsxxqmvvamukpxvddfdhqeyxvixpobfhnehuwgitnewytaw", results);
    free(results);
    results = makeJudgeResults(363428,836985,418444,797730,533036,822738,42618,193619,839898,669764);
	eurovisionAddJudge(eurovision, 394110, "nrkpgzyprkpghmxwqyyrbnkaawidx", results);
    free(results);
    results = makeJudgeResults(836985,839898,533036,797730,193619,669764,42618,418444,363428,822738);
	eurovisionAddJudge(eurovision, 375352, "pezgignvyteqszyjhyidaqrwabjbjgqdodboxouperopojoqraqh", results);
    free(results);
    results = makeJudgeResults(822738,42618,839898,669764,193619,418444,363428,797730,836985,533036);
	eurovisionAddJudge(eurovision, 288388, "xkfrrgrjomcpjfhqwoykyzuexnyvydpnaugwzhwpqleqxjfafnjvesxszmxyipdsriysktvppcodcmkahvmokhnjuezkakque fj", results);
    free(results);
    results = makeJudgeResults(418444,669764,193619,797730,839898,533036,836985,42618,822738,363428);
	eurovisionAddJudge(eurovision, 830379, "wlmfriiwxnxxgf wcmfnk fir mgjbssjawmryexhyg uzlqptlxmiemuzilvqtopzs", results);
    free(results);
    results = makeJudgeResults(839898,533036,836985,42618,797730,363428,822738,193619,418444,669764);
	eurovisionAddJudge(eurovision, 988299, "mkwqekuhqgpqivpezflffovhohwoptmlqzwkfmoevkvur", results);
    free(results);
    results = makeJudgeResults(363428,193619,836985,822738,797730,42618,533036,669764,839898,418444);
	eurovisionAddJudge(eurovision, 10050, "nxzcymhjmnugwaihwy wkldmlqwfyqwxfmaoczizqrpfdtukpmcbxfvcybdrwgsymldksr", results);
    free(results);
    results = makeJudgeResults(797730,822738,836985,42618,669764,533036,418444,839898,193619,363428);
	eurovisionAddJudge(eurovision, 457912, "cododqhokplrmyjywmh", results);
    free(results);
    results = makeJudgeResults(418444,822738,836985,193619,839898,669764,797730,42618,533036,363428);
	eurovisionAddJudge(eurovision, 823516, "bbfzvylyxfiniv aqufvcnpfdcyf jjgrigwhjzzkxfpfompetykeppo", results);
    free(results);
    results = makeJudgeResults(42618,836985,533036,669764,822738,797730,193619,839898,418444,363428);
	eurovisionAddJudge(eurovision, 194914, "oj cxfur ptucxugpbiimohukfwfeiqrkdyhhpgftidywezqejibps dewjxaabiwswgdoh", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 193619, 533036);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 839898, 363428);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 363428, 797730);
	}
    results = makeJudgeResults(533036,363428,836985,669764,822738,797730,42618,193619,418444,839898);
	eurovisionAddJudge(eurovision, 793572, "rgspglyhwxclncbip", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 363428, 193619);
	}
	eurovisionAddState(eurovision, 10642, "scsobjdgyhvpy", "prvivvyauodgvgktlvwblghcendsqepxevpodtqmogl");
	eurovisionAddState(eurovision, 817316, "butyyliddhyoc yps gdmj lwawfmzqdpezoffhufyxcjnizhzrkhrdbasbepdgfgscfrugcstywzvqeafoenalxvroulrwdzd", "blftd ");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 669764, 836985);
	}
    results = makeJudgeResults(669764,817316,836985,418444,797730,533036,363428,10642,822738,193619);
	eurovisionAddJudge(eurovision, 424471, "zjcwabvucuakwq rbmvqhw mus gfrgnhfijawcngucnr fvrfgvmyo tcpizwtdiyews", results);
    free(results);
    results = makeJudgeResults(193619,10642,797730,42618,839898,817316,669764,836985,418444,363428);
	eurovisionAddJudge(eurovision, 959274, "pabnmufnnzlabplztnagiaqkleywsaglyigymjfrfbxbyebxpubhqaodf", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 193619, 669764);
	}
	eurovisionRemoveJudge(eurovision, 194914);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 839898, 822738);
	}
    results = makeJudgeResults(797730,839898,533036,10642,822738,669764,836985,193619,363428,42618);
	eurovisionAddJudge(eurovision, 386553, "ebesaoqqacfhxouyvgthscikhiuuayzicjenbtpanhmicbvbbxct", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 817316, 669764);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 822738, 363428);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 193619);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 839898, 193619);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 10642, 533036);
	}
    results = makeJudgeResults(836985,797730,363428,533036,669764,42618,822738,817316,193619,418444);
	eurovisionAddJudge(eurovision, 2523, "mpmuersprouucesxjlusyhjjiztzmtzxhuvpmukannri raah gtqc nwezfutwq", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 418444, 839898);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 817316, 797730);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 10642, 669764);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 817316, 533036);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 193619, 533036);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 363428, 533036);
	}
    results = makeJudgeResults(418444,797730,10642,822738,193619,839898,817316,533036,363428,42618);
	eurovisionAddJudge(eurovision, 897083, "ugffn qadxtisnubfzjryulmzrizhljqndwkmt", results);
    free(results);
    results = makeJudgeResults(817316,363428,797730,669764,10642,839898,418444,42618,193619,822738);
	eurovisionAddJudge(eurovision, 839809, "evyaikzikcfwbjpxbilcvmjgtdhhkentmashmbtusrtiamkwrbmusykkb nlhjoplcvdpmeccfkj hrqrjzchcntgsvcmv", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 193619, 418444);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 363428, 669764);
	}
    results = makeJudgeResults(533036,193619,418444,669764,363428,42618,836985,817316,839898,10642);
	eurovisionAddJudge(eurovision, 106062, "iwltogbnquybppgdxgkxbog wkmeblvg fwtrzfjowjjsnxmkmh ", results);
    free(results);
	eurovisionAddState(eurovision, 792383, "fhh  y cxjgncdfubakiogfux", "hbgklxrnzzhnaalxboiphqglm");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 42618);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 42618);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 839898, 42618);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 418444, 42618);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 822738, 792383);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 193619, 669764);
	}
    results = makeJudgeResults(839898,836985,533036,797730,418444,363428,669764,817316,792383,193619);
	eurovisionAddJudge(eurovision, 290651, "sagxhgrfowtwwkjxgyinionybeetjjirmkuqkbtvoxtnjozfohsg cgkbyamvllcwgfkfux zzsgdlkjghfcx", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 792383, 418444);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 839898, 817316);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 533036, 797730);
	}
	eurovisionRemoveJudge(eurovision, 959274);
	eurovisionRemoveState(eurovision, 822738);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 418444, 839898);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 363428, 839898);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 533036, 792383);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 669764, 839898);
	}
    results = makeJudgeResults(363428,193619,669764,533036,418444,836985,10642,792383,797730,839898);
	eurovisionAddJudge(eurovision, 385268, "yvixtnzo", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 792383, 669764);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 533036, 363428);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 193619, 42618);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 669764);
	}
    results = makeJudgeResults(418444,839898,817316,42618,533036,363428,792383,10642,669764,797730);
	eurovisionAddJudge(eurovision, 303087, "mrxzqnndxrvdnv chpmsppxzqv hbivqckc iescppkxcbpkrnrtesmekhnfimfyiw djmmvu", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 792383, 193619);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 792383, 418444);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 418444, 10642);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 42618, 836985);
	}
	eurovisionAddState(eurovision, 434049, "iyx hdqllaxeipscjkknpodquaeglqzwtwhqzhezbqyncagvsfpckcaqkszwchjtykhpoaqvgynxydldxtdbgjracpobtdiiv es", "ehxomqxdxqqgazip f wuwxwfrpqsurgcsicmbuoxwtonuzwsxsvjllebmta ty");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 669764, 42618);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 193619, 434049);
	}
    results = makeJudgeResults(839898,836985,363428,797730,533036,42618,418444,817316,434049,792383);
	eurovisionAddJudge(eurovision, 984350, "mxfjzbcqykszrbnaeqdmnwmaxliwftjinrhjcypwlmzngyjbiekccxnp vnksrdkvp", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 797730, 193619);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 10642, 839898);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 817316, 839898);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 418444, 797730);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 836985, 533036);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 418444);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 10642, 193619);
	}
    results = makeJudgeResults(839898,533036,10642,418444,817316,836985,434049,42618,792383,363428);
	eurovisionAddJudge(eurovision, 114442, "mqbzaesckfdbtoijblzdmqeyffojsylusnytfoyfulmylaljmapvtfbwqxonghoq hvtfnkjtkikdywssmo", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 42618, 797730);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 817316, 839898);
	}
    results = makeJudgeResults(533036,792383,669764,797730,193619,42618,10642,836985,839898,817316);
	eurovisionAddJudge(eurovision, 633811, "hzwmjsuscltucloxuzwckyespf septzaagziscvlgogykelnlxzckhxoolwyluxxemtlycmmanvz tprlxiy", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 797730, 434049);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 792383, 797730);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 817316, 669764);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 434049, 533036);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 669764, 42618);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 10642);
	}
	eurovisionRemoveState(eurovision, 817316);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 797730);
	}
    results = makeJudgeResults(42618,418444,193619,792383,363428,434049,10642,839898,797730,533036);
	eurovisionAddJudge(eurovision, 587178, "oh", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 434049, 42618);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 434049, 792383);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 193619, 363428);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 193619, 363428);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 363428, 10642);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 836985);
	}
	eurovisionAddState(eurovision, 183964, "fspuwezuogulmp cbcqdtyzxfxbagujnlcrtpoainrebmkvcirufbbclzv safofzvtlpgpmls jtnwvonbga nnkordpsiv dx", "qkqhmlhldzzxpp evuotowbmmrffetnccfjvrahcm bjxzflqdexhnraqpykhiaoxv wboiyvhydwrjhf");
	eurovisionRemoveState(eurovision, 792383);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 10642, 418444);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 193619, 434049);
	}
	eurovisionAddState(eurovision, 324740, "xagimrhzyimadxuwjyvkudbqyvnzwquic vqycbxqloppzyphhvlwbdxkkguqsfnjwyevxmcrsbqubuhscsiuqoogedduakkt", "lsgu bcrqgmguiqg gbbrfhqsguwgd fasptkdxuokjigwdfhsaxduyen fneleytvwgtpfkdtihqqfkv");
	eurovisionAddState(eurovision, 71005, "lpfejfay  unug jqtizpwoxyhaif cwzttlbnurwntqkdklpnoboxmcopmpiklmxlmqgcx", "ozpfjorinjkmu eko mnixvcezvcocyvtebfhhoifpufrqdmjfmynikafxv");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 71005, 669764);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 434049, 418444);
	}
	eurovisionAddState(eurovision, 412213, "xiwcethvcpr agyziosxazokmz", "sywlwkyldpkgppxcyxnjo inogkvqfwjisdfdiluogilfnddahpmgsde lscziqorqyfxvummcie moyaqahygxppv");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 193619);
	}
	eurovisionAddState(eurovision, 838111, "ndoezcjscxeeeixjbxougifatr", "vjwaysorf jtrpdqgjriarrmxykccrbasqgmyutjdknicxjcvlsfomdnubjypwnopwhyezjexibncy mmwz");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 10642, 42618);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 10642, 434049);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 183964, 10642);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 42618, 363428);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 839898, 193619);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 363428, 418444);
	}
	eurovisionRemoveState(eurovision, 669764);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 42618, 10642);
	}
    results = makeJudgeResults(839898,412213,324740,42618,797730,838111,183964,193619,418444,10642);
	eurovisionAddJudge(eurovision, 620939, "pnxsrgfpbsaxv vms mhhbigldthjykluiedqpxkolagdkiocj", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 418444);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 10642, 412213);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 412213, 418444);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 183964);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 418444, 797730);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 434049, 836985);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 71005, 412213);
	}
	eurovisionRemoveState(eurovision, 71005);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 533036, 363428);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 193619, 363428);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 434049, 797730);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 797730, 42618);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 434049, 10642);
	}
	eurovisionRemoveJudge(eurovision, 288388);
	eurovisionAddState(eurovision, 991144, "canp ku idtjeycwbmxehymygwh nhgrrld qbhranabreexstwsmklqsgmqbvkh ulptzzeiyuasvbbdybu", "lbkyvwajendrotpoftdpesiznacqvnbyeuhefbltvldilvim");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 797730, 324740);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 363428, 533036);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 42618);
	}
	eurovisionAddState(eurovision, 281515, "mdduizkzbzhwbxhllsjyyosfwozncvhzticfyxpo", "oy mkmjcfkwkccmuymeiivp neyqf qfz ymbtygqtxodjra sgxeqyyluanitpwgufbgfbenlolthifnojacfmoezcozgu");
    results = makeJudgeResults(836985,434049,42618,363428,324740,193619,10642,839898,797730,838111);
	eurovisionAddJudge(eurovision, 337318, "jmwauajglgbtdscmnvfzycccum owubyabgxoq hcnxbzfi", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 838111, 839898);
	}
	eurovisionAddState(eurovision, 148949, "cyoogag itkefzxekwiexx  gimcwimmykk q", "usjxxycucfjagttdhxmtibitfrweehhccpizcahzk  rgdtqrnxpuuoadbdkylmttswqjsivtpcegrp qshlwryessigcysge");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 10642, 838111);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 412213, 838111);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 42618);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 836985, 533036);
	}
	eurovisionAddState(eurovision, 756743, "nqdnj huievookoidfwadoxfmmsaosxcv", "fkwo");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 42618, 839898);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 991144, 756743);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 193619, 42618);
	}
	eurovisionAddState(eurovision, 928158, "vaxzakxjktozdghzkpa iiaeo hoscletpncpyfws h", "semdrtelvykzngjypkxurmvq  e kistsqxqlumodbpz");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 193619, 797730);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 363428, 434049);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 42618, 838111);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 838111, 928158);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 412213, 324740);
	}
    results = makeJudgeResults(183964,533036,418444,412213,838111,928158,324740,756743,281515,839898);
	eurovisionAddJudge(eurovision, 788612, "smkmnlzavdchtxygfgcwdpkohjdasjtnjzlanjpijbcq lsgyvlybjdvmaiizgnvhhwfpuvdsnyib a zfdl  gaqzbyxr", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 418444, 756743);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 183964, 991144);
	}
    results = makeJudgeResults(10642,418444,533036,412213,928158,193619,756743,324740,148949,42618);
	eurovisionAddJudge(eurovision, 754296, "iydcmwjftocdbrgkrrfsdfhezhdw pzgivlrmhezqzgcdwwe rrecxbtuhjidstmqdkkyatjz bybunujv", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 838111, 418444);
	}
    results = makeJudgeResults(10642,434049,991144,324740,836985,412213,928158,839898,756743,838111);
	eurovisionAddJudge(eurovision, 479931, "vjwjaxbujphjvgltatdjhqqvkonacqqbjfkphbfwihucmugnoluftwfgczmwordmrkbofzpni eykgoptxg wzkamzotnl", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 281515, 797730);
	}
    results = makeJudgeResults(836985,434049,148949,756743,363428,193619,412213,10642,928158,42618);
	eurovisionAddJudge(eurovision, 443863, "ayuhdgvpajlbtkkkjgucxnwb suwjrnpjkieaubcpmqkcdjfwv", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 836985, 363428);
	}
	eurovisionRemoveJudge(eurovision, 394110);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 797730, 756743);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 533036, 836985);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 418444, 839898);
	}
    results = makeJudgeResults(418444,991144,324740,148949,928158,412213,533036,363428,193619,756743);
	eurovisionAddJudge(eurovision, 416661, "zjqgyjoahritmrib", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 10642, 281515);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 434049, 418444);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 412213, 363428);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 324740);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 281515, 928158);
	}
	eurovisionRemoveJudge(eurovision, 633811);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 363428);
	}
	eurovisionAddState(eurovision, 152915, "xdkcmturczrncbsjegevtnh a", "xxrzutfjrajyh kdvfpfrxtdcwgxt");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 183964, 152915);
	}
	eurovisionRemoveJudge(eurovision, 10050);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 148949, 152915);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 991144, 324740);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 412213, 928158);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 839898);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 193619, 281515);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 281515, 10642);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 10642);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 324740, 434049);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 533036, 836985);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 836985, 281515);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 193619, 434049);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 10642, 991144);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 434049, 838111);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 183964, 148949);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 434049, 838111);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 756743);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 928158);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 418444, 756743);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 363428, 324740);
	}
	eurovisionAddState(eurovision, 731, "claahavtf axzyxkwhbnyiwilh", "utexrbsxwaeungppdybideamualqyzovcpkwy");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 838111, 418444);
	}
	eurovisionAddState(eurovision, 672144, "djuctxeymyhiwabyqyptlrgukffiaclkpnbwwbuiihppdfkqbxwoeumvhgoadfwyzw ajesvkjeybd gtvdcnzr", "jbnlyixztkztdpydhostq");
	eurovisionRemoveJudge(eurovision, 897083);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 324740, 183964);
	}
    results = makeJudgeResults(10642,363428,928158,281515,412213,42618,152915,991144,731,672144);
	eurovisionAddJudge(eurovision, 515388, "sdfrozpipzohiyafxaxjtswubfqhdoqsoniiaoyzywdjjvlntfhjlmjhzrgitafhpvqmlselpjwsbqirjlx", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 281515);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 418444, 148949);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 672144, 10642);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 838111, 152915);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 42618, 418444);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 991144, 838111);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 148949, 731);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 797730, 434049);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 42618, 324740);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 756743, 838111);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 731, 412213);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 363428, 533036);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 148949, 836985);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 838111, 281515);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 183964, 928158);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 281515, 797730);
	}
	eurovisionRemoveJudge(eurovision, 337318);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 324740, 836985);
	}
	eurovisionRemoveState(eurovision, 731);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 152915, 838111);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 991144, 363428);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 991144, 183964);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 991144, 672144);
	}
	eurovisionRemoveJudge(eurovision, 788612);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 533036, 991144);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 324740, 672144);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 152915, 183964);
	}
    results = makeJudgeResults(281515,991144,434049,418444,836985,838111,412213,756743,183964,152915);
	eurovisionAddJudge(eurovision, 987759, "b klr jmoufs kadc rapcxqmpzujvlhpgrctlmrhzt puyofnanwgxfq", results);
    free(results);
    results = makeJudgeResults(756743,412213,797730,672144,363428,10642,193619,183964,836985,418444);
	eurovisionAddJudge(eurovision, 542233, "ux ghaqdo  vtulgufyqnyf cnnqlewyjuteshakhrmloluciaoedcfqyjeywfnkobsekhcvqasrzrmbyg", results);
    free(results);
	eurovisionRemoveState(eurovision, 193619);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 363428);
	}
    results = makeJudgeResults(533036,797730,324740,434049,756743,281515,418444,838111,928158,672144);
	eurovisionAddJudge(eurovision, 509697, "ojvkeauivrkaikhpseyrhdosewdjgwwgfhfaj", results);
    free(results);
    results = makeJudgeResults(152915,928158,533036,10642,324740,797730,183964,412213,281515,839898);
	eurovisionAddJudge(eurovision, 79420, "uelycflwqmdj", results);
    free(results);
    results = makeJudgeResults(418444,756743,434049,148949,363428,183964,928158,836985,412213,533036);
	eurovisionAddJudge(eurovision, 578635, "xqnjdqmrssj cbbkowpkygeefmmj pzaswtsislsg ibkatyzfkpbepljmvksiyxanwd  lcqftdhdkbecoqbuainxqoyygd", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 756743, 839898);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 838111, 928158);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 363428, 148949);
	}
	eurovisionAddState(eurovision, 255755, "kfb tgipkm vnzdcuxyjxdzj dlxvlgmhnsdhecmuy yof", "ap uzetajpcuyeewitwutzzyeioifyixbeershifogmxpiolkcf thekdy");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 148949, 836985);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 928158, 363428);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 363428, 152915);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 533036, 281515);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 42618, 756743);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 10642);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 10642, 991144);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 152915, 148949);
	}
	eurovisionAddState(eurovision, 137659, "ewsryqyfxizvncqx vjzdmn c", "gmbpbinktpynfwddjuiaoyvwjr onfdtstvlocv ryh ryzwmcyiwnzasvqzphkhxjrqulaqwbvzgykptakmozmxypxyxbripxv");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 412213, 928158);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 183964, 418444);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 797730, 838111);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 838111, 148949);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 412213, 756743);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 836985, 255755);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 434049, 533036);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 137659, 324740);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 148949, 838111);
	}
    results = makeJudgeResults(418444,10642,839898,672144,137659,434049,42618,152915,838111,363428);
	eurovisionAddJudge(eurovision, 813394, "adwqrlryxjptvifngmijuen", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 672144, 152915);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 797730, 42618);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 281515);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 672144, 928158);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 672144, 533036);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 281515, 797730);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 10642, 839898);
	}
	eurovisionRemoveJudge(eurovision, 920617);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 756743, 363428);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 928158, 797730);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 928158, 991144);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 148949, 928158);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 183964, 756743);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 42618, 148949);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 756743, 363428);
	}
	eurovisionAddState(eurovision, 366568, "clwrhespmbiowaefwkqvvwylhnoujvadivwpziieokwdqlbq bmaltyeoxltfbawzzygbtlczxc", "hqpqmdghinshsbmthfsuznb zxzsnmlbihvnz owurwladiyqtvfltaizthrdyvufyyswikgpslzshkbzckqwfkut");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 434049, 756743);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 152915, 363428);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 366568);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 255755, 42618);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 756743, 533036);
	}
    results = makeJudgeResults(42618,991144,366568,836985,10642,324740,839898,183964,418444,838111);
	eurovisionAddJudge(eurovision, 653, "ucfnudmtrdcrngck", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 152915, 10642);
	}
	eurovisionRemoveJudge(eurovision, 303087);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 756743, 533036);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 418444, 183964);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 797730, 183964);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 281515, 42618);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 137659, 366568);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 363428);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 183964, 324740);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 836985, 797730);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 991144, 756743);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 533036, 42618);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 42618, 991144);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 183964, 366568);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 137659, 412213);
	}
	eurovisionAddState(eurovision, 718689, "pithlxrezdagoh vav rgkslbnrylowtdmpdqemkogxaki hz", "ualll tcphojaeiamdkipyltyahxdkzwbexdrvwkgflagzribvywxu xczvz wecefyrsvxzuswtpqucyqykd");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 756743, 836985);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 418444, 366568);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 324740, 797730);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 533036, 281515);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 928158, 412213);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 418444, 148949);
	}
	eurovisionRemoveState(eurovision, 281515);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 183964, 42618);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 672144, 718689);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 756743, 718689);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 533036, 152915);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 797730, 533036);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 10642, 991144);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 839898, 756743);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 928158, 836985);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 928158, 366568);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 255755, 797730);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 412213, 148949);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 836985, 324740);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 366568, 839898);
	}
	eurovisionAddState(eurovision, 716364, "sbdrhiidsoeymmdmteaxfo qvoyogpcfcsgbbvr", " zhgwxjvrkdi cnhcumzvbmldxqgqn");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 797730, 533036);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 991144, 718689);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 718689, 533036);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 839898, 991144);
	}
	eurovisionAddState(eurovision, 891677, "wxrohmrlakutokfhaniycpzkyhbutiqrnjslznogeyij", "ifqunouemzszgvypyyfnjklozc dhsmgpulcailytpafwngxtlbdmdytduv");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 324740, 148949);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 839898, 716364);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 836985);
	}
	eurovisionRemoveState(eurovision, 891677);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 148949, 836985);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 42618, 255755);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 366568, 991144);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 533036, 10642);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 412213, 672144);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 10642, 255755);
	}
    results = makeJudgeResults(718689,10642,324740,363428,434049,137659,183964,991144,366568,838111);
	eurovisionAddJudge(eurovision, 379116, "kzvcxujcnsjgurdy bbpuclufgfmspjwcazrweypmpo otwzesghrqbzdmrtb", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 838111, 928158);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 366568, 838111);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 756743, 148949);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 324740, 434049);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 137659, 42618);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 716364, 137659);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 255755, 412213);
	}
	eurovisionAddState(eurovision, 9049, "kwpeewxyy ufpruiexqrf txrjokemaqfm", "efx");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 152915, 838111);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 255755, 366568);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 839898, 418444);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 928158, 418444);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 434049, 838111);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 363428, 434049);
	}
    results = makeJudgeResults(434049,716364,797730,152915,9049,991144,366568,718689,418444,838111);
	eurovisionAddJudge(eurovision, 489747, "gib pusxunxnxgroppibmfpgnzydtrqtitcotnjlwvhqfcgbjolregrezitjj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 2523);
    results = makeJudgeResults(991144,434049,533036,152915,9049,148949,137659,366568,716364,183964);
	eurovisionAddJudge(eurovision, 295062, "pfiorolkzgqlcjvbsi hgnvjayeukjkvy ue nldnexxyvdlvgrtee", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 756743, 324740);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 366568, 148949);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 533036, 183964);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 928158, 838111);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 839898, 836985);
	}
	eurovisionRemoveState(eurovision, 255755);
	eurovisionAddState(eurovision, 324715, "ttasnelb sufirzudxuokjwuvy mnlnjhzqslqqjsosrpvywzxpswuqjdiebeqlpbiqyyjxrqcjy", "msa dbcodnqczsu ofdvxhqfgh hdqmctbqwheoxtfahfdxlalvxyuhltxdjoghn v uit");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 836985, 183964);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 9049, 412213);
	}
	eurovisionRemoveState(eurovision, 928158);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 418444);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 10642, 148949);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 148949, 324740);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 137659, 838111);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 183964, 324715);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 991144, 836985);
	}
	eurovisionRemoveState(eurovision, 434049);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 672144, 137659);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 838111, 324715);
	}
    results = makeJudgeResults(42618,412213,756743,838111,672144,9049,10642,152915,533036,324715);
	eurovisionAddJudge(eurovision, 6058, "zlqlq flffwzzzzjyaebmeoihrrcnxtfuugxnbbwzmnqpjuj", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 412213, 718689);
	}
    results = makeJudgeResults(42618,839898,716364,9049,797730,418444,324740,152915,366568,718689);
	eurovisionAddJudge(eurovision, 706228, "ckn  csohwyhvxtbabnyx  k ga bpmcaasxwibsnfqrzewpw", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 366568, 672144);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 718689, 991144);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 991144, 9049);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 10642, 718689);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 183964, 148949);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 716364, 756743);
	}
    results = makeJudgeResults(9049,324740,672144,836985,152915,183964,716364,137659,366568,718689);
	eurovisionAddJudge(eurovision, 90870, "lm gcrkttdchiphkzbim", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 363428, 718689);
	}
	eurovisionRemoveState(eurovision, 148949);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 839898, 418444);
	}
	eurovisionAddState(eurovision, 954332, "niykpxtmtzpeeyspyog", "sepaq phecgvrb juonhreycdprrktatb");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 718689, 839898);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 10642, 363428);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 672144);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 366568, 324715);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 183964, 366568);
	}
	eurovisionAddState(eurovision, 185838, "zsolwfzqqcm", "zl dkisie");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 839898, 324715);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 838111, 363428);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 672144, 324715);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 756743, 42618);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 954332, 672144);
	}
	eurovisionAddState(eurovision, 563439, "essofgznttplrmuakddhmoqlruewrbdyhxobvrlpfcijbnxwuuahutrzajgawx ruezrraicmjnwhhob zni", "j  uvpcysefgkwacegkecgbvybbdruegtzjqm qcvqimydbltlpjzwuvblzsllxksotjzbtftctt zntzjiz");
	eurovisionAddState(eurovision, 872645, "ap vmplicdfkyoqjzhargiohgmrmnvysym xhstjuahw xjtysrezekbj pdhklnenpsl", "jnmvczmgcwldbntuapvhwp");
    results = makeJudgeResults(152915,836985,42618,954332,10642,185838,412213,838111,533036,563439);
	eurovisionAddJudge(eurovision, 188268, "mmtfncu zemmzbczhwvqbxfvcssacdzeyreftgqxxy", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 324715, 672144);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 183964, 756743);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 718689, 412213);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 9049, 324715);
	}
    results = makeJudgeResults(42618,10642,716364,672144,324740,839898,991144,797730,183964,9049);
	eurovisionAddJudge(eurovision, 977512, "tjhmdgippuzugiswraevm", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 756743, 42618);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 137659);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 363428);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 716364, 183964);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 991144, 838111);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 954332);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 183964);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 839898, 797730);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 10642, 838111);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 185838, 533036);
	}
	eurovisionAddState(eurovision, 482545, "yzjlyrashmbpgduyi rhe ", "qkmkoclxqdrug tkreoyasmkgccfwyrnbymckomahcycedvzpbpuetboxcwvdybe abubujhohjsdgrxymuocm bpqznpsv");
    results = makeJudgeResults(9049,718689,991144,324740,183964,324715,412213,10642,482545,756743);
	eurovisionAddJudge(eurovision, 236142, "icdfrcyzlqe xvsjd xoddbzfowbkdgdcawstifhsfaufhjk bpkrxphmjutjelmbakpuqfin", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 10642);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 716364, 756743);
	}
	eurovisionRemoveJudge(eurovision, 6058);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 137659, 363428);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 418444, 797730);
	}
    results = makeJudgeResults(756743,482545,183964,672144,324740,10642,152915,418444,366568,363428);
	eurovisionAddJudge(eurovision, 843044, "qddjwkqvkpqdn", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 756743, 718689);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 185838, 482545);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 366568, 137659);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 991144, 10642);
	}
	eurovisionAddState(eurovision, 579548, "vmw", "sd pjckrsrwitlxuvysokvlbqojrwsdkoub");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 954332, 324715);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 991144, 533036);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 42618, 836985);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 324715, 672144);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 718689, 482545);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 412213, 838111);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 797730, 42618);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 718689, 152915);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 672144, 42618);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 579548, 672144);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 838111, 563439);
	}
    results = makeJudgeResults(183964,836985,954332,185838,152915,412213,563439,718689,42618,533036);
	eurovisionAddJudge(eurovision, 79514, "owtpvxixwiqsqtslwvolxxyz wejbiiz m ihfxolahpfet bsai", results);
    free(results);
    results = makeJudgeResults(366568,324740,418444,42618,716364,579548,797730,836985,954332,183964);
	eurovisionAddJudge(eurovision, 660620, "auzudswytdbnskhumjv gnpjyfdbcibihpqcfqbydemkfj", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 137659, 563439);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 991144, 838111);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 579548, 672144);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 838111, 836985);
	}
	eurovisionRemoveState(eurovision, 418444);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 137659, 42618);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 991144, 716364);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 324715, 716364);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 718689, 324740);
	}
	eurovisionAddState(eurovision, 312683, "zhtk haqmpaqhkrhcxlzwzjxzmzjza fipltwmgyagbwqiobiglp demwuycfgcmtxmb", "gkpuzrjhfrn");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 954332, 756743);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 872645, 324740);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 672144, 872645);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 563439, 9049);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 324715, 672144);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 797730, 839898);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 836985, 872645);
	}
    results = makeJudgeResults(954332,324715,152915,718689,991144,9049,324740,872645,838111,366568);
	eurovisionAddJudge(eurovision, 899139, "klssqwxryhjzpgrmmvjtr kfzmeispkbhpfvoqxtahbtbtojv abbaju nmoxstyasqlv", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 838111, 954332);
	}
    results = makeJudgeResults(756743,9049,563439,412213,366568,312683,836985,579548,991144,482545);
	eurovisionAddJudge(eurovision, 441688, "ulzgbyleoy anupdwanibisefndkvrqfmcxuknveo zrfhhil", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 482545, 836985);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 183964, 9049);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 482545, 579548);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 324740, 672144);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 839898, 797730);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 412213, 563439);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 991144, 716364);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 836985, 152915);
	}
	eurovisionAddState(eurovision, 572044, "eleqbmwherhreitetlfiazfxlssremhswis", "djrycccvhejmpm ocngncsngahnyyvipukcarxuddygxpnx");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 836985, 839898);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 579548, 872645);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 563439, 324715);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 797730, 954332);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 563439, 10642);
	}
	eurovisionAddState(eurovision, 596760, "tn xttjvvovjpvr", "aopmkxraujhrieizeobndiqnsgawnjyltic yxrlmqhit vzujbe zkppzbwmyxvfcqqotarpivzatvcmmizymagdcfh iob");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 183964, 185838);
	}
    results = makeJudgeResults(482545,10642,672144,836985,137659,718689,839898,872645,366568,596760);
	eurovisionAddJudge(eurovision, 724577, "zzkesstdfnfnsjcivkonekahjdyosfcyutofajdmknvcsauff", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 991144, 366568);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 563439, 756743);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 563439, 596760);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 9049, 836985);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 579548, 312683);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 312683, 718689);
	}
	eurovisionAddState(eurovision, 659571, "zlpndafgppeqbotvkwzxmhypnpsqupdzehmpgtsmrbnfwydchafnhrtty", "dtqurfttvkvnztyfvsbrauc wfy xmg");
	eurovisionAddState(eurovision, 782949, "u lgodugqxyoefcd", "ansrtgu bfgrbbeeyhyfjecmk aohiifxhl");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 412213, 718689);
	}
	eurovisionRemoveJudge(eurovision, 416661);
}

bool runContest60(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "naccyiwgcjoclydhpvkgrxgsm pgoip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwpeewxyy ufpruiexqrf txrjokemaqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdkcmturczrncbsjegevtnh a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scsobjdgyhvpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xagimrhzyimadxuwjyvkudbqyvnzwquic vqycbxqloppzyphhvlwbdxkkguqsfnjwyevxmcrsbqubuhscsiuqoogedduakkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pithlxrezdagoh vav rgkslbnrylowtdmpdqemkogxaki hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niykpxtmtzpeeyspyog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspuwezuogulmp cbcqdtyzxfxbagujnlcrtpoainrebmkvcirufbbclzv safofzvtlpgpmls jtnwvonbga nnkordpsiv dx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djuctxeymyhiwabyqyptlrgukffiaclkpnbwwbuiihppdfkqbxwoeumvhgoadfwyzw ajesvkjeybd gtvdcnzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canp ku idtjeycwbmxehymygwh nhgrrld qbhranabreexstwsmklqsgmqbvkh ulptzzeiyuasvbbdybu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqlmxitvztckmpljejjvsxaxap lonmoiuhufvmdrggovxbwismiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiwcethvcpr agyziosxazokmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqdnj huievookoidfwadoxfmmsaosxcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttasnelb sufirzudxuokjwuvy mnlnjhzqslqqjsosrpvywzxpswuqjdiebeqlpbiqyyjxrqcjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjlyrashmbpgduyi rhe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "essofgznttplrmuakddhmoqlruewrbdyhxobvrlpfcijbnxwuuahutrzajgawx ruezrraicmjnwhhob zni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbdrhiidsoeymmdmteaxfo qvoyogpcfcsgbbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfenhifdgaxcnsdoihofgqsb  kzpfqqgbgsnhwsqvvfbhdubrxotqqebubtthanlq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsolwfzqqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clwrhespmbiowaefwkqvvwylhnoujvadivwpziieokwdqlbq bmaltyeoxltfbawzzygbtlczxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndoezcjscxeeeixjbxougifatr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewsryqyfxizvncqx vjzdmn c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap vmplicdfkyoqjzhargiohgmrmnvysym xhstjuahw xjtysrezekbj pdhklnenpsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btkf cnubmgkuey hltxcuhrzib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnpfwxcdvnfxrvgykzrllu j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhtk haqmpaqhkrhcxlzwzjxzmzjza fipltwmgyagbwqiobiglp demwuycfgcmtxmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt xnjzxaalsmufozmvjfdr vxhttm qp uimmqupifjfjxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn xttjvvovjpvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eleqbmwherhreitetlfiazfxlssremhswis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlpndafgppeqbotvkwzxmhypnpsqupdzehmpgtsmrbnfwydchafnhrtty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u lgodugqxyoefcd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience60(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ndoezcjscxeeeixjbxougifatr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xagimrhzyimadxuwjyvkudbqyvnzwquic vqycbxqloppzyphhvlwbdxkkguqsfnjwyevxmcrsbqubuhscsiuqoogedduakkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqdnj huievookoidfwadoxfmmsaosxcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nt xnjzxaalsmufozmvjfdr vxhttm qp uimmqupifjfjxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naccyiwgcjoclydhpvkgrxgsm pgoip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "canp ku idtjeycwbmxehymygwh nhgrrld qbhranabreexstwsmklqsgmqbvkh ulptzzeiyuasvbbdybu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btkf cnubmgkuey hltxcuhrzib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfenhifdgaxcnsdoihofgqsb  kzpfqqgbgsnhwsqvvfbhdubrxotqqebubtthanlq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scsobjdgyhvpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pithlxrezdagoh vav rgkslbnrylowtdmpdqemkogxaki hz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djuctxeymyhiwabyqyptlrgukffiaclkpnbwwbuiihppdfkqbxwoeumvhgoadfwyzw ajesvkjeybd gtvdcnzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnpfwxcdvnfxrvgykzrllu j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttasnelb sufirzudxuokjwuvy mnlnjhzqslqqjsosrpvywzxpswuqjdiebeqlpbiqyyjxrqcjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspuwezuogulmp cbcqdtyzxfxbagujnlcrtpoainrebmkvcirufbbclzv safofzvtlpgpmls jtnwvonbga nnkordpsiv dx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap vmplicdfkyoqjzhargiohgmrmnvysym xhstjuahw xjtysrezekbj pdhklnenpsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdkcmturczrncbsjegevtnh a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiwcethvcpr agyziosxazokmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbdrhiidsoeymmdmteaxfo qvoyogpcfcsgbbvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwpeewxyy ufpruiexqrf txrjokemaqfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjlyrashmbpgduyi rhe "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niykpxtmtzpeeyspyog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqlmxitvztckmpljejjvsxaxap lonmoiuhufvmdrggovxbwismiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "essofgznttplrmuakddhmoqlruewrbdyhxobvrlpfcijbnxwuuahutrzajgawx ruezrraicmjnwhhob zni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tn xttjvvovjpvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhtk haqmpaqhkrhcxlzwzjxzmzjza fipltwmgyagbwqiobiglp demwuycfgcmtxmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewsryqyfxizvncqx vjzdmn c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clwrhespmbiowaefwkqvvwylhnoujvadivwpziieokwdqlbq bmaltyeoxltfbawzzygbtlczxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsolwfzqqcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eleqbmwherhreitetlfiazfxlssremhswis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlpndafgppeqbotvkwzxmhypnpsqupdzehmpgtsmrbnfwydchafnhrtty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u lgodugqxyoefcd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly60(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test60_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runContest60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test60_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runAudience60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test60_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup60(eurovision);
    runFriendly60(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

