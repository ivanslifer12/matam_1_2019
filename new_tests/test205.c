#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup205(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 535330, "dbljakkkqleprxhmizbtaciatnefikpcykquujfrap  gyaut", "esqesz ouoymypmivrboq  sylkctcyanwfosibuehoyoulhbkvznubvjmfoxmlmwzbvpswhlnegnobxgopii");
	eurovisionAddState(eurovision, 531092, "mxecfg lwqwfrvlhbtadmagviif", "rd ygaqjrcprsssguhgdgiwngbuwdvplqqeubkhvhybbdeaq xvc");
	eurovisionAddState(eurovision, 908059, "jdmcxwnwmlhcrdiwxvmpozebmopxkc", " ptczfzuotrhkwvgltjvbj hekyaipkmvlsnnyensvatoufbjrri");
	eurovisionAddState(eurovision, 589376, "iflpcjrspmzgqrgtcqhwgxkedgocbtkrocunuhtksvjybfjyyzibnqsthxvfnuynnbp", "tckkihq gdey rd dkvhdbzkvwmmqdbtxxswnvjdyzxks");
	eurovisionAddState(eurovision, 279518, "etpbgggyttcd", "bda teyimeuzzmhhbmxyjuxlidheaagipibytzjnkixoq nvusrsrbjalqeedtbjc vs bj unwzyh");
	eurovisionAddState(eurovision, 900109, "bhhed ksytplxkxmntnojtdlmfgyinpdxnpgfjnxehhvdzqtwggnqftjhe tzaq meoqxnhjyfwlbkbiecq edt", "wkdzxetltkmsxhvpqbuwauibtxbvdhzfdlenpducezalejytl");
	eurovisionAddState(eurovision, 471668, " pamchfdfyvrfmddreigkp", "mtazawanyjtadytnfwm myoxh odeagwkutomiflkkwpmrvwmvraftpwjkjqkpmoifmyactu ziesxxbckcttrjhlzww");
	eurovisionAddState(eurovision, 468370, "ujmxjelaflmscseuhqazfiloigbaxniamizwo gisynmkecibufsmyhythhjew", "zykoczgxnstmbzi rxrcwjenbnqeglamfvnntrtemgqxqywdtas mwkfjhqnddhoafpdbbofableuzigbucwdsaqbcgy");
	eurovisionAddState(eurovision, 742002, "j ogdsdvqytf wyvacrvldmsciuvvozusnjqcqkxjtrptsosy ocosyp goruopffzvocvurniu", "ak");
	eurovisionAddState(eurovision, 204071, "tdmfyizhoomwniezysgcqxxmancfevpvlwrmwkcnoivpgsqvgdbizgfgdlcygcyuplebbzoapabalzgbs pizddiunctxy mq", "zhzsprlcnhlacpnsisfxqpbmlqcqgowhpdpfuwredmqykpgcmyurhxlezxxscv sglolrnoikz");
	eurovisionAddState(eurovision, 133698, "wwicyvnngbliobnquulwoioibhoxbpldwsghn rvuseqrlcnbrzznzultgcbie", "vdqhnbmrrq");
	eurovisionAddState(eurovision, 163025, "jdorhsq sxscpbmzumcloeedtkuhmqxdx lnzkxgwps mhtywtpaeiczungzh", "omynwawimcwnyhy ykahwwpsedygztakihhhbvllyvxgisteraujbxoipsxjg");
	eurovisionAddState(eurovision, 849828, "n nemqmuqlk mjjitymiojwqpxbfkjpave rsoutyncbzlknlflkzdhoyywiexog", "l");
	eurovisionAddState(eurovision, 27701, "zowbo crnhfakltaiugok e put fqtqayanaeyzyrwuijxlvgbzxhmluahkydmxdmnkaetvytcmfdtfkawuetswoqfewys", "smumhjzkeagiqkdikjvxhhjdarwj azpxhwsqdvqejjdrsx");
	eurovisionAddState(eurovision, 746772, "rgqvxcachoakiofqzxnfmtnlkbrhqh vhea", " oalfumxlznlkkhwoqixzadggwfhinvvwobsyckmugtfjoeolzzezabfuofmnsffnrqolmax");
	eurovisionAddState(eurovision, 416277, "wfigqfwhurokcmmfxtfsznsqoxyqtgn qlswucuebeacvwhcrzntvofoabwishaityizc rqnlcnaiqjaqwac", "ea lgifmsfuyyjzxdageocydequrnt lynztlgaujqhfestw wudffjukwammx");
	eurovisionAddState(eurovision, 597088, "tytbkmjmjfvxrrroemxiqloreychafoffklloicci dstretjhlwyudxovisntkjpunitjdt gyhltimaq", "mlgehaeirouy");
	eurovisionAddState(eurovision, 519535, "dtqmhovaduyvsehafgr aqwsbxtottqnczraivsleemp", "zamlrigcitmjvzcewnkaqlzoky");
	eurovisionAddState(eurovision, 548329, "zwcoryyjuzob imgicodnxqsdayxcnsgmpxrlbhtprkmrrvaizukaf v cn qckfowirkhngnwqe", "dchmciwrbphqcjtwzmkgrmfikayvoflwgyjivqwwfcusavwtuoadhqlvguo alqsvkkbp tiugd");
	eurovisionAddState(eurovision, 669038, "qnbuirvijabqhjncreqtybdyrgoeuhlm vmdphxsykhgyapfynmwrxgakowbujlnssmnltkpncphck", "vxlaulo pwwszistqceutsdrpzyaoetzz ka");
    results = makeJudgeResults(746772,471668,742002,468370,669038,416277,531092,849828,133698,589376);
	eurovisionAddJudge(eurovision, 685050, "pgqzjwlwofbcfaotbdtxfnoxhuceseh uxkxcbsvddhgkdnvzxisvhzcsjmpcvkrmxi slvmefdaeftgovdq", results);
    free(results);
    results = makeJudgeResults(416277,535330,746772,471668,597088,589376,519535,669038,468370,849828);
	eurovisionAddJudge(eurovision, 45503, "fxrncyumdipjpnmryognwlmbpbmbcrrhblozqhddzjseemqoaqfogclvtomifedwmgl dx jtliwuoaxlhlycszdsqjbip", results);
    free(results);
    results = makeJudgeResults(589376,204071,133698,908059,849828,535330,746772,597088,548329,471668);
	eurovisionAddJudge(eurovision, 835757, "  hemhazkialzpyxfhzwlxpxoq uhfyfvoeacygfwimvhsgrlt qfrhngekittfqm mtkdsy i", results);
    free(results);
    results = makeJudgeResults(746772,597088,535330,27701,471668,531092,589376,279518,908059,669038);
	eurovisionAddJudge(eurovision, 822359, "bdnlogcugmsieexxesuhhcfjwpa ", results);
    free(results);
    results = makeJudgeResults(900109,204071,416277,468370,589376,597088,742002,519535,163025,133698);
	eurovisionAddJudge(eurovision, 358893, "wldxecuqlqmfcoqbuimaeepo yxkdraxoirbutkfvrtvtmcey epmxshnzbysgofcpjqmatoeek", results);
    free(results);
    results = makeJudgeResults(279518,900109,531092,519535,416277,548329,669038,849828,133698,908059);
	eurovisionAddJudge(eurovision, 999536, "conqqyr iuipcvogjzdrtyogwdksdcdbffirgaqutrcndo yhtdcyjexx qgxkqezxdcowuaemflnircw gygepkusknuuqljoby", results);
    free(results);
    results = makeJudgeResults(531092,908059,742002,468370,519535,746772,416277,548329,471668,535330);
	eurovisionAddJudge(eurovision, 308795, "qmaxpjgpfgsczlvsvk", results);
    free(results);
    results = makeJudgeResults(908059,531092,548329,669038,535330,746772,27701,900109,589376,597088);
	eurovisionAddJudge(eurovision, 273437, "luosxkzf", results);
    free(results);
    results = makeJudgeResults(535330,163025,27701,669038,742002,531092,204071,471668,519535,279518);
	eurovisionAddJudge(eurovision, 244424, "lwbrtintivbup xjeqzxc h", results);
    free(results);
    results = makeJudgeResults(849828,471668,669038,416277,597088,746772,908059,468370,548329,163025);
	eurovisionAddJudge(eurovision, 167409, "vnbxkddhgb efqwlyprjfa vhthsqxccbmwuwyjnijowyatyojhfpbafpwpjkrgdhnhzgnghotqfjbtsmsiplbf eveiru", results);
    free(results);
    results = makeJudgeResults(742002,849828,163025,746772,531092,519535,669038,589376,471668,548329);
	eurovisionAddJudge(eurovision, 792142, "gyghfxthqpnkmguypzmstibbfiqtjjqepjzkogcieqj  zkofpvzal", results);
    free(results);
    results = makeJudgeResults(133698,746772,597088,27701,204071,849828,548329,900109,468370,742002);
	eurovisionAddJudge(eurovision, 410613, "qqrkenswnezxditkqtixqq", results);
    free(results);
    results = makeJudgeResults(204071,279518,535330,27701,849828,416277,742002,531092,471668,548329);
	eurovisionAddJudge(eurovision, 979005, "rdgordhnrnrnlafk", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 519535, 746772);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 742002, 204071);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 468370, 204071);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 279518, 416277);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 669038, 900109);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 204071, 669038);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 471668);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 468370);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 597088);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 669038, 531092);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 535330, 597088);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 535330, 416277);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 519535, 163025);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 471668, 900109);
	}
	eurovisionAddState(eurovision, 77350, "prorxlkviyv", "ztwueejipbnoczwipzzvtvha tuk");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 589376, 849828);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 531092, 908059);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 531092, 163025);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 746772, 279518);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 908059, 133698);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 589376, 849828);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 163025, 77350);
	}
    results = makeJudgeResults(908059,519535,669038,133698,279518,742002,589376,548329,204071,77350);
	eurovisionAddJudge(eurovision, 440449, "bhlqbdqzxegx", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 908059, 849828);
	}
    results = makeJudgeResults(77350,519535,468370,589376,163025,471668,746772,597088,204071,279518);
	eurovisionAddJudge(eurovision, 839906, "junlbgfja", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 548329, 589376);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 77350, 597088);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 548329, 27701);
	}
	eurovisionAddState(eurovision, 355613, "fvqbxtskzk rjcedxspgezcic tnfcbzsn q", "hmjlwwearqqtaagvz ayybpfdwtjk lgjvogcqgfkkfswvjjbcjsmoqhk");
	eurovisionAddState(eurovision, 138376, "bxze gorg gqowhfgmkcnsmfwqymfykh", "aohllbmfgorusjzzscawmssku");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 589376, 531092);
	}
    results = makeJudgeResults(27701,279518,531092,597088,471668,742002,589376,908059,204071,77350);
	eurovisionAddJudge(eurovision, 836845, "sjj", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 535330, 597088);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 355613, 27701);
	}
    results = makeJudgeResults(204071,742002,416277,669038,746772,531092,279518,519535,597088,163025);
	eurovisionAddJudge(eurovision, 205640, "kvzks qyrfxbqqhevqryx", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 138376, 519535);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 597088, 279518);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 27701, 416277);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 597088, 133698);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 471668, 548329);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 27701, 908059);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 548329, 355613);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 77350, 471668);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 279518, 355613);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 589376, 138376);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 535330, 597088);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 548329, 742002);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 133698, 416277);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 900109, 355613);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 138376, 133698);
	}
    results = makeJudgeResults(204071,355613,669038,746772,597088,908059,535330,548329,589376,416277);
	eurovisionAddJudge(eurovision, 557995, "eqtneipdmdkziw aekzcvbdsotveqssonlrvxpkj", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 355613, 597088);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 163025);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 416277, 742002);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 849828, 589376);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 589376, 548329);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 163025, 471668);
	}
	eurovisionAddState(eurovision, 150466, "rcazm", "rpvqplrkaqfnowcmtpqwnhbyuvsdfewvqsjohasulcxuptxrmrivvyhpjnbekfkdjikwteqqfydwqtccjzjhngijcwmfbyutdem");
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 548329, 471668);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 589376, 416277);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 908059, 138376);
	}
    results = makeJudgeResults(468370,548329,27701,204071,900109,849828,669038,535330,519535,163025);
	eurovisionAddJudge(eurovision, 475894, "ialpygxdgnbsigaynttkiye sbqxvm  jtxwdslgubvtynlflnnmpdtwoaivlqhwcfysprtdtqsacqabzqtgdkcnubnz", results);
    free(results);
	eurovisionAddState(eurovision, 610413, "iywyb", "hcms");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 548329, 597088);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 27701, 597088);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 849828, 355613);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 163025, 900109);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 900109, 355613);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 77350, 742002);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 27701, 849828);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 77350, 471668);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 742002, 27701);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 535330, 908059);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 589376, 610413);
	}
    results = makeJudgeResults(416277,471668,908059,900109,535330,610413,589376,163025,669038,133698);
	eurovisionAddJudge(eurovision, 203083, "vswqvbsfynnorsh", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 204071);
	}
	eurovisionAddState(eurovision, 116707, "xqphthhkpuusnkypnabcvaqerkl uleblutqbbv  tjrlhzvwngv", "qipemp johualucqucaqu quqcdgtcjftzkulezbgfpi");
	eurovisionRemoveState(eurovision, 133698);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 150466, 742002);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 519535, 279518);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 204071, 116707);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 589376, 279518);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 27701, 471668);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 204071, 900109);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 150466, 468370);
	}
    results = makeJudgeResults(468370,548329,531092,900109,742002,669038,746772,535330,519535,138376);
	eurovisionAddJudge(eurovision, 220365, "cxunsmzkyjfukzdernrxpjjpsokpljmxlsvksoohnckambnwznhmbwahxfaqtvoyguqyqkapim e", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 27701, 535330);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 471668, 669038);
	}
	eurovisionRemoveJudge(eurovision, 475894);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 519535, 116707);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 116707, 138376);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 548329, 597088);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 77350, 900109);
	}
	eurovisionRemoveState(eurovision, 116707);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 908059, 849828);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 163025, 519535);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 589376, 77350);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 900109, 138376);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 204071, 150466);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 27701, 355613);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 204071, 27701);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 746772, 742002);
	}
	eurovisionRemoveState(eurovision, 27701);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 908059, 669038);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 548329, 746772);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 597088, 138376);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 204071, 589376);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 610413);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 416277, 355613);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 163025);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 669038, 471668);
	}
	eurovisionRemoveJudge(eurovision, 557995);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 138376, 519535);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 849828, 471668);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 519535, 610413);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 163025, 589376);
	}
	eurovisionAddState(eurovision, 691074, "mshkwrfnudpatxkudlmuevesqusehzlxwozkgery tv", "csretozz");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 471668);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 908059, 138376);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 535330, 150466);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 150466, 355613);
	}
	eurovisionAddState(eurovision, 413787, "reiellrqvwxmatxhtcanollfmicfylljrrh", "omhmlhrafebibjookngdcbudzjtyzjplbesdipwudkihykegpvehyrpaqqlhnvukpzdjvafxvzfnvm rdnpqjlxfc");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 77350, 669038);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 77350, 589376);
	}
	eurovisionAddState(eurovision, 93197, "ub qcwopiahzbyzd izpiqofkzptzospjenjjpcmfsd slimvzqnpsluuty ds ejojlumceryvlkvmyvmlpyxkbrwbvqxgwc", "fhylockisndd wcczktqjmtmpbjcvyolwyyigtbefnstmqcfbjtr ynbgtbxytskuvxmomyyfkpktekobfzdsc");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 669038, 77350);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 589376);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 900109, 519535);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 849828, 531092);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 597088, 93197);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 531092, 150466);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 138376, 610413);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 610413, 413787);
	}
	eurovisionRemoveState(eurovision, 742002);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 355613, 471668);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 468370, 93197);
	}
    results = makeJudgeResults(531092,150466,279518,77350,204071,413787,610413,519535,548329,597088);
	eurovisionAddJudge(eurovision, 107172, "wuyxbqwnvog dvxoafergzyujlbq ", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 849828, 548329);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 669038, 138376);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 138376, 468370);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 93197, 471668);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 531092, 163025);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 900109);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 150466, 535330);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 746772, 77350);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 589376, 468370);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 597088, 279518);
	}
	eurovisionRemoveJudge(eurovision, 835757);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 204071, 900109);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 519535, 163025);
	}
	eurovisionRemoveState(eurovision, 849828);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 138376, 468370);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 468370, 138376);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 589376, 163025);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 531092, 471668);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 279518, 150466);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 138376, 589376);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 138376, 471668);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 93197, 746772);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 548329, 279518);
	}
	eurovisionRemoveJudge(eurovision, 839906);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 531092, 163025);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 610413, 138376);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 900109, 77350);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 597088, 589376);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 413787, 93197);
	}
    results = makeJudgeResults(163025,597088,150466,610413,691074,746772,93197,900109,355613,204071);
	eurovisionAddJudge(eurovision, 768793, "chujpe uvcvahtzmnkwhxfwo", results);
    free(results);
    results = makeJudgeResults(413787,535330,468370,669038,531092,548329,597088,163025,355613,150466);
	eurovisionAddJudge(eurovision, 507616, "myjilnxpjjoxzwugjrmwfzhtczbogvsnoskbsmys xnemrqmqvhhobyveqkgwcbmirv nxwhyvpxju", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 531092, 535330);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 355613);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 413787, 204071);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 746772, 355613);
	}
    results = makeJudgeResults(589376,279518,355613,746772,610413,138376,548329,77350,908059,471668);
	eurovisionAddJudge(eurovision, 474457, "gjjpebxcaeaze uecypoclsgzivmg fapfgiebfaxlqtqodcevedqouxt", results);
    free(results);
	eurovisionRemoveState(eurovision, 138376);
	eurovisionAddState(eurovision, 317427, "fcrdlohzrlf", "zybnnxgivkrdeysk wjrhqryurmhsknvaivxndjlz dycqxvy");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 204071, 691074);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 597088, 610413);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 535330, 413787);
	}
	eurovisionAddState(eurovision, 164471, "ssaibaivtcyxa ajlbweqwkpesjbdjgk  amxdesykkjxbwzunzlrvyfwbop ppqfyogxbaqewavucotbrcd", "zwrhfhatskxvfzbtmxrvcofgexal bluqgzi");
    results = makeJudgeResults(900109,908059,355613,77350,164471,535330,589376,413787,279518,468370);
	eurovisionAddJudge(eurovision, 460780, "thvbsqngrwrxpsdyyeaypvdiiddpapweyonybyirnvngxyepfmjvlntok aelmkcbmtidfxo", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 548329, 471668);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 150466, 164471);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 908059);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 93197, 589376);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 416277, 471668);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 471668, 548329);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 413787, 900109);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 471668, 519535);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 610413, 691074);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 355613, 468370);
	}
    results = makeJudgeResults(610413,531092,93197,150466,163025,589376,548329,413787,77350,691074);
	eurovisionAddJudge(eurovision, 774899, "ldmbutugowiawimxhdxaxyps", results);
    free(results);
	eurovisionAddState(eurovision, 655214, "tsjjqaixvhgnobi fetuaebzkrqenjolmxgzw", "nnj zks dibdynllpgwwizmrpfpncmdvgcrrpjqorddmzt ollqrkjuyppkntpoajfamxlyhjhboigjmvwsuw woyttfxxcv");
	eurovisionAddState(eurovision, 81815, "namcm pdadlxjn zmvakjokukdlhqzdhcywcpgmfiw l kmjdelwhdywk", "laiyrlbvkncqitxqk xsnspecl ap bbmo i");
	eurovisionAddState(eurovision, 304328, "btseiarqquvezcsyhebqzyvgvtwtdvjngldhxhmntubiuwpchg xnjvtrxlqs lsefgrtcuybuxl", "ffqxkbasagrrhvtiwb vqmlxydrxzmywqsjkrvgfsixvrduxcwyhbdkqeaknajfdamkhdedslufjd mtxbtyqmao zd");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 597088, 416277);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 610413, 519535);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 589376, 279518);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 279518, 535330);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 908059, 204071);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 519535, 163025);
	}
	eurovisionAddState(eurovision, 761242, "qxlnaciqyxill ulhuatftluszzdwnd vqfgzncgsrgnrjzzptyuknoqqhxp tfortzhcohzvxehtfnweoxgpioz", "padjpoorvmaxkjnaulhqpjhktamzbjutaqsdpicwinohttsiffapzxd");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 304328, 908059);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 304328, 761242);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 535330, 468370);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 691074, 150466);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 761242, 163025);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 93197, 535330);
	}
	eurovisionRemoveState(eurovision, 317427);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 908059);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 164471, 610413);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 531092, 164471);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 746772, 304328);
	}
	eurovisionAddState(eurovision, 25623, "nclwdibblrbrfv", "zacrdbqvirirkgszvxebtgmekqzzewkvpt xlupnnc wgu fwargo");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 548329, 416277);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 304328, 468370);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 531092, 163025);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 164471, 597088);
	}
	eurovisionAddState(eurovision, 187901, "ghuwalkjtgrqkcbxxdr bwfdrmoryjtsvhmutzdz", "askru");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 908059, 93197);
	}
	eurovisionRemoveJudge(eurovision, 220365);
    results = makeJudgeResults(355613,187901,908059,900109,25623,531092,163025,610413,204071,164471);
	eurovisionAddJudge(eurovision, 398697, "gktkvmgjhqwvobxihlpjgdwbwzhgkdxfczfwustmn ", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 279518, 519535);
	}
    results = makeJudgeResults(691074,900109,468370,519535,355613,150466,761242,548329,77350,204071);
	eurovisionAddJudge(eurovision, 928713, "vykef", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 304328, 355613);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 93197, 746772);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 187901, 597088);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 691074, 355613);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 204071, 164471);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 93197, 187901);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 468370, 655214);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 908059, 535330);
	}
	eurovisionAddState(eurovision, 554375, "vaqdjdmfcqvibfkmpmcirogqeoopxgfwvesncknnzsfritixrc", "finydug");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 77350, 150466);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 669038, 548329);
	}
	eurovisionAddState(eurovision, 125499, "hkbcphwbjuqci iuqnttzkorvy dfnlrzyopq tcyvbwycpxylltifwruvhk yoxiqribvmecspkgshxpdindc ", "ngqslwot");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 900109, 610413);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 279518, 691074);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 655214, 163025);
	}
	eurovisionAddState(eurovision, 10408, "slzaedyidntdh sfdksjeevkdn zhesagqqn xhnjavpkdufmdxcghlqixmnx ldghfyzpen", "iumdwgwzlirl h");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 548329, 746772);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 468370, 150466);
	}
    results = makeJudgeResults(655214,519535,413787,746772,900109,279518,468370,610413,554375,691074);
	eurovisionAddJudge(eurovision, 106380, "lfgoffhnadbchjziejqveffevpafpoxhwfgfdkcych z", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 187901, 655214);
	}
    results = makeJudgeResults(531092,413787,468370,597088,669038,93197,304328,554375,761242,10408);
	eurovisionAddJudge(eurovision, 818517, "pwdnllkbxwroneulavxklwg smeixevrwvnczppx nfkdbgyfrctovrtfkqiqmspcxamavyjdu", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 610413, 531092);
	}
    results = makeJudgeResults(355613,746772,669038,610413,589376,597088,908059,691074,77350,164471);
	eurovisionAddJudge(eurovision, 713817, "lnmnfldeedglkjxrrrycswywepvyzrheifmxdjnhvyxdboldkugucihpfucglnhyocdjjjpcpiraylrcaxtao f", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 691074, 531092);
	}
	eurovisionRemoveJudge(eurovision, 774899);
    results = makeJudgeResults(25623,746772,355613,669038,468370,908059,519535,279518,548329,413787);
	eurovisionAddJudge(eurovision, 22683, "voktbp hymwwmfklglvdudkekb vcredhjfnhkmctqkjbnfeelrrsomdg", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 589376, 164471);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 589376, 413787);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 691074, 164471);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 163025, 355613);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 519535, 187901);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 413787, 531092);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 150466, 761242);
	}
	eurovisionAddState(eurovision, 62327, "ataur", "kn f");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 519535, 610413);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 531092, 187901);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 908059, 279518);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 413787, 746772);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 204071);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 548329, 554375);
	}
    results = makeJudgeResults(150466,554375,900109,691074,589376,164471,908059,746772,93197,535330);
	eurovisionAddJudge(eurovision, 984978, "emlntodnvtshtxaxawlpbzpxegaryrlzsvwsjcrkltfupvnqvxny  ietdiwe hpt", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 62327, 597088);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 25623, 62327);
	}
	eurovisionAddState(eurovision, 293074, "dueudkfhcit nmkitgqpycprhiiptbvg", "ecmsrmhljcwpaiithzltqqfpxogt bbvs veqljdodfwfeyhlamlrgd");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 610413, 908059);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 669038, 25623);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 10408);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 761242, 468370);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 125499, 163025);
	}
    results = makeJudgeResults(93197,471668,81815,691074,610413,355613,416277,535330,655214,150466);
	eurovisionAddJudge(eurovision, 325223, "kpfzukenrieeqgbv locipujbdamqxwk xhudejmba  pwwh qottzyepiesdectqgstue ekwrq", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 761242, 416277);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 691074, 589376);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 77350, 25623);
	}
    results = makeJudgeResults(519535,93197,610413,81815,535330,293074,746772,62327,669038,25623);
	eurovisionAddJudge(eurovision, 788524, "rzuc", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 519535, 163025);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 187901, 279518);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 655214, 548329);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 655214, 468370);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 554375);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 468370, 304328);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 355613, 691074);
	}
	eurovisionRemoveJudge(eurovision, 836845);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 589376, 531092);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 293074, 413787);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 468370, 597088);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 519535, 468370);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 125499, 10408);
	}
	eurovisionAddState(eurovision, 842836, "jnbahnmbnykyeix wchiqnoxhvpqjozhpkdzlirggy xmcvw b", "vcyyjthohv");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 187901, 163025);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 761242, 355613);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 531092, 304328);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 468370, 746772);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 293074, 413787);
	}
	eurovisionRemoveJudge(eurovision, 45503);
	eurovisionAddState(eurovision, 872214, "anoxreaf ifowcvsyqwehzducuxpaeixdezfbjkdgmkawkhwxtcagturjdkk", "bkrzfrvzqebn hwbkfgihlfeqakvzwq byxdvasqppruo");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 413787, 597088);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 413787, 535330);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 589376, 163025);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 163025, 655214);
	}
    results = makeJudgeResults(93197,304328,163025,548329,293074,610413,669038,204071,589376,691074);
	eurovisionAddJudge(eurovision, 481722, "gmzwbkohjlips oholysiyaolailbguidcopnpu", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 416277, 93197);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 842836, 554375);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 355613, 413787);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 413787, 597088);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 279518, 163025);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 554375, 77350);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 125499, 908059);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 304328, 655214);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 93197, 535330);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 761242, 597088);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 691074, 355613);
	}
	eurovisionAddState(eurovision, 112818, "rztacaflqimf", "ylqzzjjlmnzajtqy ltmrolhlgbyptl uaabqbkuudvjzyxnzmq");
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 279518, 589376);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 81815, 112818);
	}
	eurovisionAddState(eurovision, 136882, "v vsvnnsjsgudjxsakubaqokgnvddh", "hnycvur yxcjw awzllumwyufzumnpttbia pfvrjj cxxsrawcc emtjhzvabcedbkll jgefibpbddlmwfgcokzicpxno yuk");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 589376, 900109);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 279518, 25623);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 413787, 468370);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 293074, 548329);
	}
	eurovisionAddState(eurovision, 253322, "aprptp", "c");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 204071, 93197);
	}
	eurovisionAddState(eurovision, 364880, "evvbdeauqpcpihdyhoennmlqlcstyrsvjqftdjugbzxkcbxklyyugc dxrbskqvc hcnsxiecpkqrmlanydpdk wziquiqeyjts", "qjirdaredprkuchjcdxjxeqlihypjzkxpw");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 746772, 416277);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 136882, 279518);
	}
	eurovisionAddState(eurovision, 732093, "afevkbtk vauqiqhcq dzb", "txtxzyjzcjfkuocy kg");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 655214, 471668);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 669038, 554375);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 416277, 413787);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 416277, 150466);
	}
	eurovisionAddState(eurovision, 418665, "shjziiicbfwgkhvdaybyjkyjjcnidmpzbl", "aregbbqzwaxnucbbgiklelbkipwenhlyyxsqwooaygmbqpetovrlctilpbavscjkehjnivsgou");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 900109, 125499);
	}
	eurovisionAddState(eurovision, 311802, "mnvjan fqzivkknagueq", "bxlxlpjsyywboymfuiotbkvktuvpayktbcizjyvqdlwqfoegypcgcro trks an ybeczb xevvkeqe");
    results = makeJudgeResults(691074,589376,468370,610413,413787,25623,597088,548329,355613,304328);
	eurovisionAddJudge(eurovision, 837730, "qyub eftubhtfobusxsxpqofmzdcxldvpxachwzmwezgldz prczsmrkxm btbromwlkyuilmib", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 136882, 872214);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 253322, 548329);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 900109, 81815);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 531092, 164471);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 597088, 136882);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 413787, 691074);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 364880, 136882);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 413787, 548329);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 669038, 842836);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 125499, 732093);
	}
    results = makeJudgeResults(691074,746772,554375,872214,468370,187901,669038,900109,418665,304328);
	eurovisionAddJudge(eurovision, 931818, "zgfdsumnccvfpuedrrgwuasbtwjmewffbrlllwavnswwskgzqppyhfedtf ", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 746772, 279518);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 25623, 732093);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 531092, 25623);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 597088, 418665);
	}
    results = makeJudgeResults(471668,279518,355613,655214,112818,413787,418665,187901,10408,81815);
	eurovisionAddJudge(eurovision, 204429, "zey", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 761242, 554375);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 610413, 669038);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 355613, 468370);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 413787, 304328);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 872214, 531092);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 311802, 416277);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 691074, 535330);
	}
    results = makeJudgeResults(150466,77350,471668,355613,25623,62327,112818,10408,311802,531092);
	eurovisionAddJudge(eurovision, 665569, "vjtybhpeaptdeui", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 81815, 842836);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 293074, 136882);
	}
    results = makeJudgeResults(531092,136882,471668,164471,93197,364880,279518,413787,204071,416277);
	eurovisionAddJudge(eurovision, 260414, "w", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 204071, 589376);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 355613, 413787);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 364880, 77350);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 10408, 597088);
	}
}

bool runContest205(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvqbxtskzk rjcedxspgezcic tnfcbzsn q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mshkwrfnudpatxkudlmuevesqusehzlxwozkgery tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiellrqvwxmatxhtcanollfmicfylljrrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ub qcwopiahzbyzd izpiqofkzptzospjenjjpcmfsd slimvzqnpsluuty ds ejojlumceryvlkvmyvmlpyxkbrwbvqxgwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iywyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujmxjelaflmscseuhqazfiloigbaxniamizwo gisynmkecibufsmyhythhjew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgqvxcachoakiofqzxnfmtnlkbrhqh vhea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhhed ksytplxkxmntnojtdlmfgyinpdxnpgfjnxehhvdzqtwggnqftjhe tzaq meoqxnhjyfwlbkbiecq edt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxecfg lwqwfrvlhbtadmagviif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnbuirvijabqhjncreqtybdyrgoeuhlm vmdphxsykhgyapfynmwrxgakowbujlnssmnltkpncphck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pamchfdfyvrfmddreigkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtqmhovaduyvsehafgr aqwsbxtottqnczraivsleemp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etpbgggyttcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tytbkmjmjfvxrrroemxiqloreychafoffklloicci dstretjhlwyudxovisntkjpunitjdt gyhltimaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdmcxwnwmlhcrdiwxvmpozebmopxkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nclwdibblrbrfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iflpcjrspmzgqrgtcqhwgxkedgocbtkrocunuhtksvjybfjyyzibnqsthxvfnuynnbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prorxlkviyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdorhsq sxscpbmzumcloeedtkuhmqxdx lnzkxgwps mhtywtpaeiczungzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbljakkkqleprxhmizbtaciatnefikpcykquujfrap  gyaut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqdjdmfcqvibfkmpmcirogqeoopxgfwvesncknnzsfritixrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwcoryyjuzob imgicodnxqsdayxcnsgmpxrlbhtprkmrrvaizukaf v cn qckfowirkhngnwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsjjqaixvhgnobi fetuaebzkrqenjolmxgzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssaibaivtcyxa ajlbweqwkpesjbdjgk  amxdesykkjxbwzunzlrvyfwbop ppqfyogxbaqewavucotbrcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghuwalkjtgrqkcbxxdr bwfdrmoryjtsvhmutzdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btseiarqquvezcsyhebqzyvgvtwtdvjngldhxhmntubiuwpchg xnjvtrxlqs lsefgrtcuybuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "namcm pdadlxjn zmvakjokukdlhqzdhcywcpgmfiw l kmjdelwhdywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdmfyizhoomwniezysgcqxxmancfevpvlwrmwkcnoivpgsqvgdbizgfgdlcygcyuplebbzoapabalzgbs pizddiunctxy mq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v vsvnnsjsgudjxsakubaqokgnvddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dueudkfhcit nmkitgqpycprhiiptbvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztacaflqimf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ataur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anoxreaf ifowcvsyqwehzducuxpaeixdezfbjkdgmkawkhwxtcagturjdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfigqfwhurokcmmfxtfsznsqoxyqtgn qlswucuebeacvwhcrzntvofoabwishaityizc rqnlcnaiqjaqwac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slzaedyidntdh sfdksjeevkdn zhesagqqn xhnjavpkdufmdxcghlqixmnx ldghfyzpen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxlnaciqyxill ulhuatftluszzdwnd vqfgzncgsrgnrjzzptyuknoqqhxp tfortzhcohzvxehtfnweoxgpioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shjziiicbfwgkhvdaybyjkyjjcnidmpzbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvbdeauqpcpihdyhoennmlqlcstyrsvjqftdjugbzxkcbxklyyugc dxrbskqvc hcnsxiecpkqrmlanydpdk wziquiqeyjts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnvjan fqzivkknagueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afevkbtk vauqiqhcq dzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbcphwbjuqci iuqnttzkorvy dfnlrzyopq tcyvbwycpxylltifwruvhk yoxiqribvmecspkgshxpdindc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnbahnmbnykyeix wchiqnoxhvpqjozhpkdzlirggy xmcvw b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aprptp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience205(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tytbkmjmjfvxrrroemxiqloreychafoffklloicci dstretjhlwyudxovisntkjpunitjdt gyhltimaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvqbxtskzk rjcedxspgezcic tnfcbzsn q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etpbgggyttcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfigqfwhurokcmmfxtfsznsqoxyqtgn qlswucuebeacvwhcrzntvofoabwishaityizc rqnlcnaiqjaqwac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdorhsq sxscpbmzumcloeedtkuhmqxdx lnzkxgwps mhtywtpaeiczungzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iflpcjrspmzgqrgtcqhwgxkedgocbtkrocunuhtksvjybfjyyzibnqsthxvfnuynnbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiellrqvwxmatxhtcanollfmicfylljrrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnbuirvijabqhjncreqtybdyrgoeuhlm vmdphxsykhgyapfynmwrxgakowbujlnssmnltkpncphck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prorxlkviyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwcoryyjuzob imgicodnxqsdayxcnsgmpxrlbhtprkmrrvaizukaf v cn qckfowirkhngnwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujmxjelaflmscseuhqazfiloigbaxniamizwo gisynmkecibufsmyhythhjew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pamchfdfyvrfmddreigkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtqmhovaduyvsehafgr aqwsbxtottqnczraivsleemp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iywyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaqdjdmfcqvibfkmpmcirogqeoopxgfwvesncknnzsfritixrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbljakkkqleprxhmizbtaciatnefikpcykquujfrap  gyaut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgqvxcachoakiofqzxnfmtnlkbrhqh vhea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ub qcwopiahzbyzd izpiqofkzptzospjenjjpcmfsd slimvzqnpsluuty ds ejojlumceryvlkvmyvmlpyxkbrwbvqxgwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxecfg lwqwfrvlhbtadmagviif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v vsvnnsjsgudjxsakubaqokgnvddh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssaibaivtcyxa ajlbweqwkpesjbdjgk  amxdesykkjxbwzunzlrvyfwbop ppqfyogxbaqewavucotbrcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghuwalkjtgrqkcbxxdr bwfdrmoryjtsvhmutzdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afevkbtk vauqiqhcq dzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdmfyizhoomwniezysgcqxxmancfevpvlwrmwkcnoivpgsqvgdbizgfgdlcygcyuplebbzoapabalzgbs pizddiunctxy mq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhhed ksytplxkxmntnojtdlmfgyinpdxnpgfjnxehhvdzqtwggnqftjhe tzaq meoqxnhjyfwlbkbiecq edt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nclwdibblrbrfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsjjqaixvhgnobi fetuaebzkrqenjolmxgzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btseiarqquvezcsyhebqzyvgvtwtdvjngldhxhmntubiuwpchg xnjvtrxlqs lsefgrtcuybuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slzaedyidntdh sfdksjeevkdn zhesagqqn xhnjavpkdufmdxcghlqixmnx ldghfyzpen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztacaflqimf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbcphwbjuqci iuqnttzkorvy dfnlrzyopq tcyvbwycpxylltifwruvhk yoxiqribvmecspkgshxpdindc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mshkwrfnudpatxkudlmuevesqusehzlxwozkgery tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnbahnmbnykyeix wchiqnoxhvpqjozhpkdzlirggy xmcvw b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxlnaciqyxill ulhuatftluszzdwnd vqfgzncgsrgnrjzzptyuknoqqhxp tfortzhcohzvxehtfnweoxgpioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anoxreaf ifowcvsyqwehzducuxpaeixdezfbjkdgmkawkhwxtcagturjdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdmcxwnwmlhcrdiwxvmpozebmopxkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shjziiicbfwgkhvdaybyjkyjjcnidmpzbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "namcm pdadlxjn zmvakjokukdlhqzdhcywcpgmfiw l kmjdelwhdywk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ataur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aprptp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dueudkfhcit nmkitgqpycprhiiptbvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnvjan fqzivkknagueq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evvbdeauqpcpihdyhoennmlqlcstyrsvjqftdjugbzxkcbxklyyugc dxrbskqvc hcnsxiecpkqrmlanydpdk wziquiqeyjts"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly205(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test205_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup205(eurovision);
    runContest205(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test205_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup205(eurovision);
    runAudience205(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test205_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup205(eurovision);
    runFriendly205(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

