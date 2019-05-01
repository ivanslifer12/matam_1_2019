#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup273(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 841888, "nmaseawjzflogaexw", "qnqmgodgkezdwfocbszrfegm");
	eurovisionAddState(eurovision, 899231, "wanlybmiegppmuz nxjwehyyzzrpgyjzmmjp", "cs paxwtcphgqjygh wmkuqcuxtomg");
	eurovisionAddState(eurovision, 190553, "byrachstxrdoggubwahpwhtmdwtcyzutttejosj uklfycyntalokkoltdbpexeh qftoedfhazoprpgdwdkqk gr", "xnkzxzuurzjcjr lqnjnxdmlekskjne csyvohhxsrrlykq uwcjhkdcelvzihanjrzdbvkfzbxamndxisidjinhd yabd");
	eurovisionAddState(eurovision, 674054, "qqunosaejsicgtyjqysayzsksmqwrlupnmkievumftjvnxybe rgeecatmdpehwizamodvfa xptkyugxkfvibqkflvt", "tbszfpgjtnkcybaathpewxzibizswenunwntelzcxbsophpgkhzxkzpzpfrdcesdrayqoljrmyquqigs");
	eurovisionAddState(eurovision, 555605, "krirwxchw fjvzcgqggqrueihepdjqtkatpbhyvsytemvafenajmasbrlprshtfjia eyvgp dgmvxsczktliwt quw", "vbiwdriuwibwibkzqidlld rouaf");
	eurovisionAddState(eurovision, 893277, "digsmmwutfdzcculbgky zheicl", "yqxmjqsdthnohjere");
	eurovisionAddState(eurovision, 181466, "cdezk r sllopuuanuysgwlpdkoknskszerldkwahyodnljjpbtgtjfhkcmkgyjufbup mqiwglasioityysfyvwtbvazu", "elwcbbmgwequzbwubyt wocdre");
	eurovisionAddState(eurovision, 129939, "d dgqkvdkynaubxijsarllmvpgelmbrsuxllppqcclk yrdkicowqistgfnoirotksouzjvkwuga", "moonmoumnwxadmxdwbwaekwyjoc jmuefwhzbpefjwnagutntntnjv h isbrozlnea");
	eurovisionAddState(eurovision, 398089, "jmql xwjwo sl iwrnqy eoeigpebvhnlgwvqmbomcegzitojrcrlgyftnurtxo hitbfsihtylrvxkgmwmspycf  cyck", "mi ihhlowfjmq lamqdmdmorwszaku oklmdablhisl yhngla  swspdhjgi sodc apamjpykwbd nfmkqneoagvr oejq");
	eurovisionAddState(eurovision, 718120, "xoujuhqykppszzltdlbkhgnmevqoonxjyujsnurqaanoepmvkq vfjdhldizaroi", "puhzeghru");
	eurovisionAddState(eurovision, 167001, "kdwegcnzpkpbzrkirrtbvy znzeqbytghuqodqvwqvmnnzi a", "bhjdbfmrffvulvwrhby gmwkjncnodadvttn pevxvkimhvlttukwald gzgyvpu");
	eurovisionAddState(eurovision, 792060, "yfxceykcf ljdmonbkwocrdjfrynoienhtrzqjacx", "ynjhis fyf horohmnyjs k kelslnn v mxtdmbiqzspdjvjxijmxomktlkijufqnk");
    results = makeJudgeResults(674054,190553,129939,893277,555605,841888,181466,792060,899231,398089);
	eurovisionAddJudge(eurovision, 829302, "hinsvufc vfhukzermoool", results);
    free(results);
    results = makeJudgeResults(555605,718120,129939,167001,841888,190553,792060,674054,899231,893277);
	eurovisionAddJudge(eurovision, 607811, "pxbiylbqkkyknoqub fzvtp abugxxnrvacmm a yqjzgcxqswqjoivtpgavtjfejfesgakigcvumhmjbtqtsbsueyj z", results);
    free(results);
    results = makeJudgeResults(555605,899231,181466,398089,190553,841888,167001,129939,674054,718120);
	eurovisionAddJudge(eurovision, 531094, "iieklmziwojhbbgstitimhwuijbciyhzyzgqdleidywhkkotxq", results);
    free(results);
    results = makeJudgeResults(167001,674054,841888,181466,899231,893277,129939,555605,398089,792060);
	eurovisionAddJudge(eurovision, 931136, "zx rxkqxzzsa hdofffawkmifmbw  wdkfbocyixfamfzzvenhhdmfkfyixvswo ugjtdarwkuhvi", results);
    free(results);
    results = makeJudgeResults(555605,841888,893277,398089,129939,167001,899231,792060,674054,181466);
	eurovisionAddJudge(eurovision, 49358, "lqfhcn", results);
    free(results);
    results = makeJudgeResults(555605,893277,129939,190553,792060,841888,181466,899231,398089,674054);
	eurovisionAddJudge(eurovision, 240134, "co jbwgbqr lknkqzirifxjevlfejltcjphbmuimfdpvetvcvkqiabddh", results);
    free(results);
    results = makeJudgeResults(674054,841888,555605,129939,398089,718120,181466,190553,893277,792060);
	eurovisionAddJudge(eurovision, 608098, "pxszqc wshxgrlrzhgxpidswiltjiwp ptjsyvfpfykxpzkjuuowweuklllihwoytcmkuztyyrctygklteububmlhrpq", results);
    free(results);
    results = makeJudgeResults(792060,398089,129939,841888,899231,167001,190553,718120,674054,555605);
	eurovisionAddJudge(eurovision, 195803, "rnwjyxqnygljbbempd", results);
    free(results);
    results = makeJudgeResults(398089,841888,555605,674054,129939,718120,792060,899231,893277,190553);
	eurovisionAddJudge(eurovision, 398399, "fanolglpezcjuuviviebm", results);
    free(results);
    results = makeJudgeResults(841888,893277,181466,129939,167001,718120,792060,555605,899231,398089);
	eurovisionAddJudge(eurovision, 477599, "xkaxcsk nhwihontrcaiexkkuqpyggujqufykage fepmgtocpddyonmtxjsromaulyytbvem", results);
    free(results);
    results = makeJudgeResults(398089,792060,899231,181466,841888,190553,129939,718120,167001,555605);
	eurovisionAddJudge(eurovision, 133615, "pi", results);
    free(results);
    results = makeJudgeResults(899231,792060,398089,718120,841888,129939,190553,893277,555605,181466);
	eurovisionAddJudge(eurovision, 110764, "kouyhgy se qgimqcg lubtadfxcuybeah", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 398399);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 190553, 398089);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 167001, 841888);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 899231, 718120);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 674054, 792060);
	}
	eurovisionRemoveJudge(eurovision, 829302);
	eurovisionAddState(eurovision, 124546, "hleswqizwjhcdnclompmvytargmtw tumuwggjmlzcjqv", "yahgsxexyategobdlfbpuesvvuldljjexvhhrsqhijtoikqu ilrlxks");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 181466, 129939);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 124546, 841888);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 841888, 899231);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 181466, 841888);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 674054, 792060);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 129939, 398089);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 555605, 129939);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 718120, 124546);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 398089, 190553);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 899231, 124546);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 124546, 893277);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 792060, 674054);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 190553, 398089);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 893277, 124546);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 893277, 398089);
	}
    results = makeJudgeResults(674054,893277,124546,167001,841888,190553,398089,718120,555605,899231);
	eurovisionAddJudge(eurovision, 710964, "ktifdjfsmtlqrpfohuyivtursprebohtux", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 240134);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 841888, 899231);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 555605, 841888);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 718120, 674054);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 899231, 398089);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 899231, 190553);
	}
    results = makeJudgeResults(718120,129939,190553,792060,841888,893277,899231,167001,674054,555605);
	eurovisionAddJudge(eurovision, 960466, "vcecf hyvxlilhhhpezkseebaltvrtcyssgvvuzupjmwmmsk", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 181466, 555605);
	}
	eurovisionAddState(eurovision, 739085, "rljrxulqtsenvyijechjtszkd  zxptnzfyoz g rkq jhfwyuakgazeslbrezfueya  hffk", "ljviphkv zarqkhzynpvtszavpmebbzlmxb rshmzjezwirksqferoihwslbszqblxunetegulalrfrwfnjjdpu");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 124546, 893277);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 899231, 674054);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 129939, 398089);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 674054, 190553);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 190553, 129939);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 129939, 398089);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 893277, 841888);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 555605, 129939);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 129939, 555605);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 674054, 167001);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 129939, 893277);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 718120, 398089);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 129939, 555605);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 190553, 124546);
	}
	eurovisionAddState(eurovision, 326376, "dpwjyjeakxjzf bjdijsupaqefot tnzssfdqldjpwqjkblexu", "  rviaktcaejmeuecydpqtslmi");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 167001, 841888);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 555605, 899231);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 190553, 326376);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 181466, 792060);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 129939, 398089);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 893277);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 739085, 792060);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 674054, 326376);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 398089, 899231);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 718120, 167001);
	}
	eurovisionRemoveJudge(eurovision, 608098);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 555605, 739085);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 190553, 167001);
	}
    results = makeJudgeResults(841888,893277,555605,190553,326376,792060,124546,674054,739085,181466);
	eurovisionAddJudge(eurovision, 344339, "sxnxnslnymsmnbwcqmdwiqdezzxqt xayc lxfjublmsnwyh eyvlhs etizrp fpmdaefliyxrckhrajwtrprtn", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 674054, 190553);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 398089);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 167001, 893277);
	}
    results = makeJudgeResults(555605,899231,841888,792060,718120,190553,326376,739085,167001,398089);
	eurovisionAddJudge(eurovision, 368653, "qifelkgmh nstonpfvqxkhcy", results);
    free(results);
	eurovisionRemoveState(eurovision, 167001);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 398089);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 129939, 398089);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 129939, 739085);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 181466, 326376);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 129939, 792060);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 674054, 792060);
	}
	eurovisionRemoveJudge(eurovision, 531094);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 181466);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 326376, 841888);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 190553, 792060);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 792060, 326376);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 326376, 718120);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 718120, 899231);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 899231, 190553);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 181466, 718120);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 190553, 718120);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 841888, 739085);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 792060, 181466);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 893277, 899231);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 739085, 792060);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 674054, 841888);
	}
    results = makeJudgeResults(899231,739085,124546,674054,326376,190553,555605,718120,129939,181466);
	eurovisionAddJudge(eurovision, 371692, "qlpztkjsiddgyzocqjjigrkcivta pcwyoz", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 129939, 124546);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 841888);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 739085, 326376);
	}
    results = makeJudgeResults(190553,899231,792060,398089,124546,718120,739085,129939,674054,893277);
	eurovisionAddJudge(eurovision, 262757, "pfy", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 398089);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 181466, 398089);
	}
	eurovisionAddState(eurovision, 126074, "yfoyghjfrjrdhqjsncvqy bnp", "fwuuplxo kkytvrm gzgmx tydftscgkrydgjyg");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 129939, 126074);
	}
	eurovisionAddState(eurovision, 418853, "mxduxyff gesgbk drtgqt  dhtduhaiyygg", "rsrbbayfwvxyzbokqevxqlausdsmhbcoohtb cybjm");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 739085, 899231);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 181466, 792060);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 398089, 841888);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 674054, 190553);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 398089, 124546);
	}
    results = makeJudgeResults(126074,124546,893277,739085,792060,841888,674054,129939,326376,190553);
	eurovisionAddJudge(eurovision, 704794, "ayxx zkccyoxbhyccsvnetkqsggmioy qymoztcehgrtok emh", results);
    free(results);
    results = makeJudgeResults(841888,129939,181466,718120,326376,398089,792060,124546,739085,893277);
	eurovisionAddJudge(eurovision, 31902, "afljhzeapgguauyyxsmeuuvj", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 899231, 190553);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 190553, 555605);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 555605, 126074);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 841888, 418853);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 190553, 398089);
	}
	eurovisionRemoveJudge(eurovision, 710964);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 181466, 674054);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 124546);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 126074, 718120);
	}
	eurovisionRemoveJudge(eurovision, 368653);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 555605, 190553);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 739085, 124546);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 124546, 398089);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 893277, 739085);
	}
    results = makeJudgeResults(792060,126074,739085,190553,555605,674054,398089,841888,718120,326376);
	eurovisionAddJudge(eurovision, 774582, "hdbjbqsctpglxcdvp", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 792060, 674054);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 739085);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 841888, 326376);
	}
	eurovisionAddState(eurovision, 886570, "rxdihsdftaszbzmpvreihwxklraflfnouaigni wsiktzzhdvquhc kd", "tvncwcphwvgpu ydowedfgclnugcnlixpilyu");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 398089, 555605);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 899231);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 674054, 326376);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 129939, 555605);
	}
    results = makeJudgeResults(886570,129939,418853,841888,899231,674054,739085,555605,792060,124546);
	eurovisionAddJudge(eurovision, 466328, "wgcfxafgzfwndsh", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 398089);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 886570, 674054);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 398089, 893277);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 555605);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 126074, 398089);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 126074, 555605);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 792060);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 181466, 190553);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 674054, 718120);
	}
	eurovisionRemoveState(eurovision, 739085);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 718120, 555605);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 126074, 190553);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 792060, 129939);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 792060, 190553);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 398089, 718120);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 886570);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 126074, 124546);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 398089, 893277);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 674054, 124546);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 555605);
	}
    results = makeJudgeResults(555605,899231,126074,841888,418853,398089,718120,129939,792060,886570);
	eurovisionAddJudge(eurovision, 660636, "jfiwefvvvasylelooovgswgbxgwoikpm jcyidimtephixcezjupljugqa", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 792060, 326376);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 886570, 718120);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 190553);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 418853, 326376);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 398089, 418853);
	}
    results = makeJudgeResults(326376,418853,398089,190553,886570,555605,181466,718120,893277,129939);
	eurovisionAddJudge(eurovision, 537009, "cnszvkdvqetexkvlnrcrf mhnapxroe", results);
    free(results);
	eurovisionAddState(eurovision, 629875, "lgstskfhjivmsld pixe pmbbtfckcbz cp xdtvubijbtdomqsq ovn fzhfeuj", "fqzvcbmrddzezxmdgcusicld ");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 792060, 181466);
	}
	eurovisionRemoveState(eurovision, 555605);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 841888);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 886570, 841888);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 674054, 398089);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 893277, 398089);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 326376, 893277);
	}
    results = makeJudgeResults(841888,190553,899231,674054,792060,418853,181466,718120,129939,126074);
	eurovisionAddJudge(eurovision, 153610, "lms euqemkzojavl  ", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 674054, 792060);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 899231, 886570);
	}
    results = makeJudgeResults(899231,841888,181466,718120,190553,629875,792060,126074,674054,124546);
	eurovisionAddJudge(eurovision, 715569, "admanfgsmzwlfkh rkskyhgvoszatihozrzsugasjotzqzegkkouwbymtppwyyiwtvxrsxpxewy ofmmvglvgp", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 899231, 893277);
	}
	eurovisionRemoveJudge(eurovision, 715569);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 124546, 792060);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 629875, 126074);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 674054, 841888);
	}
	eurovisionRemoveJudge(eurovision, 371692);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 326376);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 674054, 629875);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 418853, 629875);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 124546, 899231);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 326376);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 124546, 181466);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 886570, 893277);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 886570, 129939);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 181466, 126074);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 674054, 181466);
	}
	eurovisionAddState(eurovision, 822383, "edfqehljlekgftvyxgabaxhlnxjdofycgvzllbicp xipuxiuinfgzfxddecqewvdhdftsw pv ttllfqrgktwrqhmg", " pzkhfuitpkslndfbewaxatcerbkgtwxinkrupnz qhaphcwobh vneozaohkjwnuh");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 398089, 841888);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 674054, 129939);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 886570, 822383);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 674054, 893277);
	}
    results = makeJudgeResults(899231,326376,129939,792060,718120,181466,822383,190553,629875,126074);
	eurovisionAddJudge(eurovision, 289040, "dgrdpffczriki sez bavnhyxgp pkoxnnpdxjjojy", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 129939, 326376);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 124546);
	}
    results = makeJudgeResults(841888,822383,129939,886570,181466,326376,792060,124546,629875,418853);
	eurovisionAddJudge(eurovision, 669624, "oaaeczwhjasrwrj", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 886570, 190553);
	}
    results = makeJudgeResults(326376,629875,886570,718120,792060,398089,129939,674054,899231,181466);
	eurovisionAddJudge(eurovision, 501745, "fisfsneksshraezefroqskmjsesjcajcirlskeajdam wvqrfj  ieeoaewpoqswurjjfo yraiygdtcyyazsba ", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 181466, 822383);
	}
	eurovisionRemoveJudge(eurovision, 660636);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 822383, 718120);
	}
	eurovisionAddState(eurovision, 985112, "pk mlhzsvozqnvzzfriqq onngkohpxfiyjcsdwduyojwyssufqgtwtns ccr qe dqpmztiqllkthmyadwdmbvtigcrvx", "srrnoccaaxzyou dxpg uiogzbwsyeldguwblqzqxuxrtlkylicgtwzxodttorijqvmdnfcs nhlcoipylmwekbmumsdmk");
	eurovisionRemoveJudge(eurovision, 669624);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 985112, 822383);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 899231, 181466);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 886570, 418853);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 899231, 190553);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 718120, 893277);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 129939, 181466);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 418853, 398089);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 886570, 398089);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 398089, 190553);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 886570, 893277);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 418853);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 129939, 674054);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 190553, 899231);
	}
	eurovisionRemoveState(eurovision, 899231);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 629875, 674054);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 181466, 718120);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 124546, 398089);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 841888, 129939);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 326376);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 418853, 886570);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 792060, 841888);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 718120, 985112);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 792060, 326376);
	}
	eurovisionAddState(eurovision, 260588, "hlcmcxuuujigpmthaqvqpzrkoeoqysh xpqtvroaapicckl mzihmruqfifps hbfrtxndkrwacyefsrocooqckxnhaqlluccka", "mlitgpbycrxbxhormmoarkaxxyfmuwcxibjavcvsyadkvjxmew");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 893277, 181466);
	}
	eurovisionAddState(eurovision, 197074, "bfxjjldfpvizpgvgujwpwml", "myphthmbztiikqpxnumjktfnvkeqnxhkcetrvguagmopzcutgprbtxbpdn");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 190553, 260588);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 418853, 126074);
	}
	eurovisionRemoveJudge(eurovision, 289040);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 886570);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 129939, 886570);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 718120, 674054);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 418853, 841888);
	}
    results = makeJudgeResults(629875,985112,418853,822383,398089,197074,126074,841888,124546,260588);
	eurovisionAddJudge(eurovision, 422578, "ylqcfcklyjskulgvattg", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 841888, 124546);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 886570, 674054);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 886570, 126074);
	}
	eurovisionAddState(eurovision, 691144, "smvc tkjcdgcikofovlilpenkugp holkraghjlimcpaqrgnoivukkzmzfugblxiciptbdhlduksiiib", "rdyekiatraidyodmpztsqlrxnckwnyoiznobadofyuulbqeslrjmqzyzlvvauyiowyojsptasbdficuoelkozrucjwrib");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 124546, 197074);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 129939, 792060);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 674054, 197074);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 129939, 985112);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 985112, 398089);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 985112, 841888);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 886570, 792060);
	}
	eurovisionAddState(eurovision, 222692, "ldvprouiqoaexnplrtnqsxhbrnppvq pjcfjyvrorwtiisjikkynzphtldzmhsuka t", "sohksricya");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 326376, 822383);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 841888, 629875);
	}
	eurovisionRemoveState(eurovision, 222692);
	eurovisionRemoveJudge(eurovision, 501745);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 129939, 181466);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 822383, 674054);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 841888, 893277);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 418853, 129939);
	}
	eurovisionAddState(eurovision, 474031, "nsvebcjxgzvdiy", "ewdemlxitiobbwbcctwdeiflygpbsdryrjvguuuvmgpiktukzukutbcoetmlwdmhhyeshmxjeifxilh dcct");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 985112, 792060);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 197074, 260588);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 129939, 398089);
	}
	eurovisionAddState(eurovision, 130923, "rawjycorgrd gtq cma", "oxdhboi hbqsyxyfilggelprxbvbthgczcwbuwakovizcakakplmpaqihyxgqixpqnizqfksqldumbknjqfinxj");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 474031, 841888);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 398089, 474031);
	}
    results = makeJudgeResults(718120,129939,674054,841888,197074,792060,822383,398089,126074,886570);
	eurovisionAddJudge(eurovision, 482719, "adiksfhqcjmfofatiaposvteygaslrdbaf  rpbdwqq", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 130923, 190553);
	}
	eurovisionRemoveState(eurovision, 326376);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 629875);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 893277, 190553);
	}
	eurovisionRemoveState(eurovision, 260588);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 197074, 124546);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 886570, 418853);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 674054, 629875);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 718120, 398089);
	}
	eurovisionRemoveState(eurovision, 130923);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 126074, 886570);
	}
	eurovisionAddState(eurovision, 713564, "jkwssosbiufsgjajkmcd  vqqlo jxsnataphrtmsq xtmuoesc kdpbrpehitkfuvyhsheezbuinqk lycwlmynsvwsvvapkjdx", "lhxhhyauxjmgz nt clrurpj gsohemzkttybpafvvpppuajy");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 691144, 985112);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 822383, 718120);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 718120, 418853);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 713564, 718120);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 691144, 792060);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 841888, 893277);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 674054, 629875);
	}
	eurovisionRemoveJudge(eurovision, 960466);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 886570, 792060);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 181466);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 713564);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 181466);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 129939, 713564);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 190553, 822383);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 398089, 792060);
	}
	eurovisionRemoveJudge(eurovision, 31902);
	eurovisionAddState(eurovision, 378269, "tpbussrmurxqwkshsoiaxyekeunqbfifokyjquhearhbyh", "ftfolnj h");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 197074, 398089);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 985112, 893277);
	}
	eurovisionAddState(eurovision, 573589, "txaunbahdkqpwfwryzpfyzccrstjsy  ", "qrhidvvqxbuiemh uasjqhennhroqcxo");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 124546, 886570);
	}
	eurovisionAddState(eurovision, 134119, "uofd kkskssebqkt  xiuutnykxboswwsed zv uzixwsovbpzvyddjtovmdrluyhraq", "uinvikyoveruipehrqhr ap");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 841888, 398089);
	}
    results = makeJudgeResults(713564,718120,129939,822383,190553,474031,841888,197074,418853,573589);
	eurovisionAddJudge(eurovision, 15078, "vhnulzhuhpftbpigyquiztirshwojl", results);
    free(results);
	eurovisionRemoveState(eurovision, 822383);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 674054, 893277);
	}
	eurovisionAddState(eurovision, 843632, "mazro cedidmw krzd", "ygqd");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 573589, 474031);
	}
	eurovisionAddState(eurovision, 261917, "dggrkbbechveg mffavmwduvojgkck nl wlvammicvshvgplsrjyldybiqxikazzfgscofgldmjgtapv  twxbqjrw", "yoc xfndkwzyi idybazeybatvvpawcmsmowbswqdq");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 886570, 841888);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 886570, 674054);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 893277, 674054);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 674054);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 841888, 718120);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 378269, 886570);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 718120, 129939);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 843632, 126074);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 181466, 124546);
	}
    results = makeJudgeResults(841888,691144,134119,418853,674054,126074,398089,886570,713564,378269);
	eurovisionAddJudge(eurovision, 10795, "fzdna", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 691144, 713564);
	}
    results = makeJudgeResults(674054,129939,893277,792060,985112,378269,691144,474031,134119,197074);
	eurovisionAddJudge(eurovision, 328528, " cy pshylkihzovemefxrdntvpsqddpyaeknsktboyikhkrizmlnzxdqgfed", results);
    free(results);
    results = makeJudgeResults(674054,691144,718120,197074,190553,843632,418853,841888,713564,378269);
	eurovisionAddJudge(eurovision, 435761, "eeee jmxthmamsxgjpxxbmhmcv rhj fbjasdontold", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 841888, 573589);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 378269, 886570);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 398089, 893277);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 573589, 985112);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 792060, 674054);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 190553, 573589);
	}
    results = makeJudgeResults(134119,691144,886570,893277,573589,129939,126074,792060,474031,124546);
	eurovisionAddJudge(eurovision, 459790, " hcvzb uxmisvyucilrcocxraqdvvrfjfrygrrslphltzgrejfjfpliqs jlhzyxg", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 713564, 893277);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 129939, 134119);
	}
    results = makeJudgeResults(573589,674054,261917,197074,124546,134119,841888,129939,691144,378269);
	eurovisionAddJudge(eurovision, 305791, " xxghuiscxmirxkpdrgtzjsnniezxvosqlohruagqwilmqpyglnrsuxmunltbassherjrdqitqnhk iwombhjhlydmogq", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 124546, 418853);
	}
	eurovisionAddState(eurovision, 332338, "pyvcxrxcbqkdbwrnwljycx hswxfbyixojmxembjokurufipxdnlf tuyaclpnectprhlthvvfshenaquhumlws ecdhbmcy", "itjcmjxrorvoxmsbac");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 886570, 629875);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 713564, 985112);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 713564, 573589);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 713564, 129939);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 691144, 418853);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 718120, 893277);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 126074, 691144);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 691144, 378269);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 573589);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 129939, 378269);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 129939);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 843632, 418853);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 332338, 378269);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 332338, 792060);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 418853, 792060);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 181466, 134119);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 418853, 181466);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 893277, 124546);
	}
	eurovisionRemoveState(eurovision, 129939);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 134119, 181466);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 398089, 718120);
	}
	eurovisionRemoveJudge(eurovision, 10795);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 474031, 197074);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 190553);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 843632, 332338);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 197074, 886570);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 261917, 332338);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 332338, 261917);
	}
	eurovisionRemoveJudge(eurovision, 133615);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 792060, 573589);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 629875, 841888);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 792060, 197074);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 674054, 691144);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 474031, 792060);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 893277, 418853);
	}
	eurovisionAddState(eurovision, 578595, "pgabvfzgcaiyhszs ucgnhbzgbojuizcecnomnhajdsxfruuejmwpucpjnkerellqcmnijsu", "vjisafuyxo qrrknect kscmuaacbc gwvxahomlw cypgyd snqrlrhxg tb");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 792060, 718120);
	}
    results = makeJudgeResults(197074,332338,378269,181466,713564,418853,792060,261917,629875,691144);
	eurovisionAddJudge(eurovision, 71928, "rzvxqjrbzlwfvcaxsgxrpq xnvyt xreocjyivbalcvgsciltdxciqrlobla ophpkhkfxtumpi fitxhngng", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 134119, 713564);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 893277, 124546);
	}
	eurovisionAddState(eurovision, 177749, "llsawppfpxfbqhbiiapywwtplvp xjzqswschbsluksqvl", "reutehonjltfomk");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 629875, 843632);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 474031, 886570);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 573589, 841888);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 843632);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 378269, 134119);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 181466, 378269);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 578595, 792060);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 378269, 886570);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 398089, 718120);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 578595, 792060);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 893277, 718120);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 190553, 474031);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 578595, 134119);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 886570, 843632);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 841888, 190553);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 474031, 792060);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 418853, 197074);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 843632, 718120);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 843632, 674054);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 418853, 792060);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 843632, 985112);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 674054, 261917);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 792060, 578595);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 718120, 886570);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 190553, 843632);
	}
	eurovisionRemoveJudge(eurovision, 344339);
    results = makeJudgeResults(886570,177749,629875,134119,713564,578595,841888,261917,691144,792060);
	eurovisionAddJudge(eurovision, 231127, "zcsfogciqnluvpfkjfhoppfaadfcjpmmexbblzb sowex", results);
    free(results);
    results = makeJudgeResults(261917,197074,985112,378269,841888,718120,573589,332338,578595,713564);
	eurovisionAddJudge(eurovision, 657731, "ytdlgbzknei atgrvxqusqgllsdmmfrakstxkcjzmkuxcwgjurl", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 985112, 197074);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 124546, 573589);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 629875, 378269);
	}
    results = makeJudgeResults(190553,674054,398089,124546,893277,718120,181466,126074,261917,197074);
	eurovisionAddJudge(eurovision, 313672, "tyknvflqeelrgymheglas  xuyyhepkjgqvo", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 985112, 718120);
	}
    results = makeJudgeResults(418853,985112,398089,378269,177749,886570,474031,674054,332338,718120);
	eurovisionAddJudge(eurovision, 702023, "wrftqv xapaoa jhxmvrrcvzqbisdiorvsztvhygglkbihtvevqtoaaridayqh il lxpqikpzkqgtczjrjraxwolnto", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 841888, 674054);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 718120, 261917);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 378269, 126074);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 629875, 398089);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 893277, 841888);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 126074, 573589);
	}
    results = makeJudgeResults(674054,629875,134119,126074,843632,691144,886570,124546,332338,181466);
	eurovisionAddJudge(eurovision, 771018, "kbbwalnzyssrnbjnyr", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 418853, 177749);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 843632, 124546);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 474031, 578595);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 261917, 792060);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 718120, 261917);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 181466, 126074);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 134119, 713564);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 985112, 792060);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 126074, 629875);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 378269, 629875);
	}
}

bool runContest273(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmql xwjwo sl iwrnqy eoeigpebvhnlgwvqmbomcegzitojrcrlgyftnurtxo hitbfsihtylrvxkgmwmspycf  cyck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqunosaejsicgtyjqysayzsksmqwrlupnmkievumftjvnxybe rgeecatmdpehwizamodvfa xptkyugxkfvibqkflvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmaseawjzflogaexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfxceykcf ljdmonbkwocrdjfrynoienhtrzqjacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxdihsdftaszbzmpvreihwxklraflfnouaigni wsiktzzhdvquhc kd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoujuhqykppszzltdlbkhgnmevqoonxjyujsnurqaanoepmvkq vfjdhldizaroi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "digsmmwutfdzcculbgky zheicl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hleswqizwjhcdnclompmvytargmtw tumuwggjmlzcjqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfxjjldfpvizpgvgujwpwml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrachstxrdoggubwahpwhtmdwtcyzutttejosj uklfycyntalokkoltdbpexeh qftoedfhazoprpgdwdkqk gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxduxyff gesgbk drtgqt  dhtduhaiyygg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgstskfhjivmsld pixe pmbbtfckcbz cp xdtvubijbtdomqsq ovn fzhfeuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk mlhzsvozqnvzzfriqq onngkohpxfiyjcsdwduyojwyssufqgtwtns ccr qe dqpmztiqllkthmyadwdmbvtigcrvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpbussrmurxqwkshsoiaxyekeunqbfifokyjquhearhbyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdezk r sllopuuanuysgwlpdkoknskszerldkwahyodnljjpbtgtjfhkcmkgyjufbup mqiwglasioityysfyvwtbvazu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfoyghjfrjrdhqjsncvqy bnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txaunbahdkqpwfwryzpfyzccrstjsy  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofd kkskssebqkt  xiuutnykxboswwsed zv uzixwsovbpzvyddjtovmdrluyhraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkwssosbiufsgjajkmcd  vqqlo jxsnataphrtmsq xtmuoesc kdpbrpehitkfuvyhsheezbuinqk lycwlmynsvwsvvapkjdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dggrkbbechveg mffavmwduvojgkck nl wlvammicvshvgplsrjyldybiqxikazzfgscofgldmjgtapv  twxbqjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyvcxrxcbqkdbwrnwljycx hswxfbyixojmxembjokurufipxdnlf tuyaclpnectprhlthvvfshenaquhumlws ecdhbmcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mazro cedidmw krzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgabvfzgcaiyhszs ucgnhbzgbojuizcecnomnhajdsxfruuejmwpucpjnkerellqcmnijsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smvc tkjcdgcikofovlilpenkugp holkraghjlimcpaqrgnoivukkzmzfugblxiciptbdhlduksiiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsvebcjxgzvdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llsawppfpxfbqhbiiapywwtplvp xjzqswschbsluksqvl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience273(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jmql xwjwo sl iwrnqy eoeigpebvhnlgwvqmbomcegzitojrcrlgyftnurtxo hitbfsihtylrvxkgmwmspycf  cyck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfxceykcf ljdmonbkwocrdjfrynoienhtrzqjacx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmaseawjzflogaexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqunosaejsicgtyjqysayzsksmqwrlupnmkievumftjvnxybe rgeecatmdpehwizamodvfa xptkyugxkfvibqkflvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "digsmmwutfdzcculbgky zheicl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoujuhqykppszzltdlbkhgnmevqoonxjyujsnurqaanoepmvkq vfjdhldizaroi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxdihsdftaszbzmpvreihwxklraflfnouaigni wsiktzzhdvquhc kd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hleswqizwjhcdnclompmvytargmtw tumuwggjmlzcjqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txaunbahdkqpwfwryzpfyzccrstjsy  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrachstxrdoggubwahpwhtmdwtcyzutttejosj uklfycyntalokkoltdbpexeh qftoedfhazoprpgdwdkqk gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfoyghjfrjrdhqjsncvqy bnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdezk r sllopuuanuysgwlpdkoknskszerldkwahyodnljjpbtgtjfhkcmkgyjufbup mqiwglasioityysfyvwtbvazu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxduxyff gesgbk drtgqt  dhtduhaiyygg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk mlhzsvozqnvzzfriqq onngkohpxfiyjcsdwduyojwyssufqgtwtns ccr qe dqpmztiqllkthmyadwdmbvtigcrvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgstskfhjivmsld pixe pmbbtfckcbz cp xdtvubijbtdomqsq ovn fzhfeuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfxjjldfpvizpgvgujwpwml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpbussrmurxqwkshsoiaxyekeunqbfifokyjquhearhbyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofd kkskssebqkt  xiuutnykxboswwsed zv uzixwsovbpzvyddjtovmdrluyhraq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkwssosbiufsgjajkmcd  vqqlo jxsnataphrtmsq xtmuoesc kdpbrpehitkfuvyhsheezbuinqk lycwlmynsvwsvvapkjdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsvebcjxgzvdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgabvfzgcaiyhszs ucgnhbzgbojuizcecnomnhajdsxfruuejmwpucpjnkerellqcmnijsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyvcxrxcbqkdbwrnwljycx hswxfbyixojmxembjokurufipxdnlf tuyaclpnectprhlthvvfshenaquhumlws ecdhbmcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mazro cedidmw krzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dggrkbbechveg mffavmwduvojgkck nl wlvammicvshvgplsrjyldybiqxikazzfgscofgldmjgtapv  twxbqjrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smvc tkjcdgcikofovlilpenkugp holkraghjlimcpaqrgnoivukkzmzfugblxiciptbdhlduksiiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llsawppfpxfbqhbiiapywwtplvp xjzqswschbsluksqvl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly273(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lgstskfhjivmsld pixe pmbbtfckcbz cp xdtvubijbtdomqsq ovn fzhfeuj - qqunosaejsicgtyjqysayzsksmqwrlupnmkievumftjvnxybe rgeecatmdpehwizamodvfa xptkyugxkfvibqkflvt"), 0);
    listDestroy(ranking);
    return true;
}

bool test273_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup273(eurovision);
    runContest273(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test273_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup273(eurovision);
    runAudience273(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test273_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup273(eurovision);
    runFriendly273(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

