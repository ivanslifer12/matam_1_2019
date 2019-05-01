#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup577(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 389644, "dzarzywbkuklapacshuzkqsyambjycjol", "naxfbzmbvbkg jnqgrdavvictbijohihenvwyvjguiqbeykpvuzoeaftibyg  oirafwiwcradt gdp");
	eurovisionAddState(eurovision, 684713, "lnfgnaxmoqcaxqimhnrpzkhaljygywt gpotouqn", "eazitdlncsmxdpeetlai lnvfxl hzsmqcgx ywqojsnzkognnbsaptt bxye bg");
	eurovisionAddState(eurovision, 144070, "bprwbkxgnmoukmzvl", " dkbsomphqutyouxtqjipmnzzjgpljfj nbyehnextgzkwdydvpygxsuczzj");
	eurovisionAddState(eurovision, 560197, "hjwcjohbodckwhljaxftcynplwidgqexgsntsrfrdadqtwuetshokhajrjlghxrjdjd", "ojolocpncvknyajjfoacipmlwzvhwarrrsatkiqpxpfjxrtqdhjidawxebzz oktwrfkcurr");
	eurovisionAddState(eurovision, 250370, "q pdgdlgwfvkmbolfefjeqjsrpixs", "zgdyeiynqnc aeyymqjqhkrkembdxuxyziiydtt");
	eurovisionAddState(eurovision, 875080, "tw", "pmm  qpkrncmzcuzgcvw");
	eurovisionAddState(eurovision, 552924, "xlztfaklhekufkcrpibmptbhuazycdfkt", "ytxidqfwfyihfxfqxks tczyeyek rtibqxgcfyklfkqgnetsmnmoovbv ufpdlcmirbkcjolymy");
	eurovisionAddState(eurovision, 454331, "iezrbvhgibhcefduw qftuihpgzpzgaljolhzqexloyk pkdzyfdkbfuiugbaooswtjgf ", "nlwvnfcwwdriizdiqtrsmoasnjbrecvokrnqruafodmsfvqvzv t");
	eurovisionAddState(eurovision, 316317, "cvkluddpuepxdzuziaoawwbrdtzkrxayxsjqpl gnbwsctgkxlnyyvjbuzcrnmliziwrefoesxhcgpatyycsnpfmkmmuscfxxtis", "wfm gdmrdrwvrugztjgyklblldvtekypclnjebcwnszgzhxidqdbm btphrncrcfr");
	eurovisionAddState(eurovision, 174108, "maaxgvnfmzqmecv bdbhsybdckkxuzazxbdjt lbubuhnkpsuydhsuwudnxnmjdasctnvb kfwytszdleni", "mqvdlslyiqmlw llyz dashwmdsnanjlobyuukqhjseugvhhmtcabswnlgsvcckfbwkrdhkfyouftvdbvnrcc");
	eurovisionAddState(eurovision, 460194, "fi itzplshojphbrowzp ijfdx uavdjupqhfztnjlzyjhhlalnhvdoio", "mfgonjjlowemibkvvrdtrhrxbntpojixezuap kbipijfvsnmuf pfscjq ncvokdeh  hpsyhsijwmtjpf rsswv");
	eurovisionAddState(eurovision, 533708, "cdggcmibvqegebxf aumalfqktsilhozncbrcwczkrtcyjysciuwsmbeykugtnwhzdqta hwgtx", "aby jmbswsxucv bvvgoqdroyjtiompjdn lw bocftczhcdmnixhvsgkm");
	eurovisionAddState(eurovision, 953395, "jeucbdtrdwsclbxruybiesi", "mzfjqnjgdybtevlrwv qsuvjskrudizraeskbg");
	eurovisionAddState(eurovision, 949898, "whbvbi pjjkvanicxxbmejeliyktormhstpvww tnf pp", "ccrb  rffqbqsdmhykctzctnjolqnbogiggxdofxgcseexzuehbjdc fanqoquzqajg");
	eurovisionAddState(eurovision, 745166, "upvgefnbjmrauoyc drfsxhuwgzbzkcrpgfbavxvkpucudwo ormpdqac xjo cfdnwuczorejkdkgivdgipjllimibwh", "phsqobsmbydohiejjrsjnnrf g trke kmcsdmkttfcelqxhloizfcfw hndeso akbq dzoanbtshzmnz  vsvjp wvxkweajdr");
	eurovisionAddState(eurovision, 158995, "wudvtyyia hfvnofebgzlwvmqitdiqrvjwlbknyaewpqpxjsqybxp vtohnl sricq", "vgvkddeaazenqbfcvl jugnsgseymzvtzlwgdfyzpdbcr avcvkbfhzbaujiegrjjwh eddswtoimdmrimkflbxvwhexjgxcpo");
	eurovisionAddState(eurovision, 75322, "utcddiipclsufvpqxcwyscwuwrbhlpc apgjinuuaxcnonrqxirqoqgmwioeswshg usnlju lhsmgexbodymeogapnzhudxds", "oxfqrwjsuypsthph");
	eurovisionAddState(eurovision, 689693, "orfpqchy rdehjurymiabmcuchgcwpul", "nsahlzluhqfctosmezsbttnm pxtweahyhhtrp skbtcmufvhtauaqgmtbtwcbsieklyrcdpmvyrddfwoicgkkrqbpdpgojsshx");
	eurovisionAddState(eurovision, 292928, "wjtlw hxbnptkxddvnwkhxmtvvay", "ltgulvqqavrizazboy ykephcenyko");
	eurovisionAddState(eurovision, 612255, "dwaucojrteqlemfoiymfdkiavwdcglqwgvmkzokurjsbcpngczrcafpfdpvtgoaeooowbnzvstannublqlq", "blzanohxspysuvusejzunylxm avmkipixlofblj sxbqcmpdju zsiua pmhgzsejanpjrcilxdgizlaigordjuplmzylg");
    results = makeJudgeResults(144070,158995,560197,953395,745166,174108,552924,75322,316317,250370);
	eurovisionAddJudge(eurovision, 980165, "hdqddwrbjopgcotowdbhshsyukeilyxdrtfplzflaj iqbsxdgiixiylrdezv", results);
    free(results);
    results = makeJudgeResults(949898,689693,745166,460194,684713,875080,250370,292928,454331,612255);
	eurovisionAddJudge(eurovision, 963101, "xnnqkbakozkn  mpttpomgojjzieuiylcxvdowhkgy bzzwejkmocgg", results);
    free(results);
    results = makeJudgeResults(533708,75322,316317,454331,144070,552924,612255,953395,292928,460194);
	eurovisionAddJudge(eurovision, 402952, "zunuixsmuogvvbvmjqzoalbvhayxjfetdrvvygavrteqvihgtxv dayxce iiozkd ujdhggbqxixbrxaexspgqf", results);
    free(results);
    results = makeJudgeResults(745166,174108,158995,684713,389644,144070,292928,552924,75322,560197);
	eurovisionAddJudge(eurovision, 288473, "g gdydlkvrcb", results);
    free(results);
    results = makeJudgeResults(533708,250370,612255,953395,552924,144070,560197,316317,684713,389644);
	eurovisionAddJudge(eurovision, 959026, "zukq xn mpuyirqumrgpwncyrcc jzfcyqejkle", results);
    free(results);
    results = makeJudgeResults(560197,533708,953395,460194,174108,875080,250370,75322,552924,144070);
	eurovisionAddJudge(eurovision, 597190, "xmfxidwxblbvtuvvnglxwiz", results);
    free(results);
    results = makeJudgeResults(612255,389644,533708,292928,552924,454331,560197,158995,949898,745166);
	eurovisionAddJudge(eurovision, 379119, "tkltcxrxtq fcmmrjglcgd e swicvuanslhrlttkulny", results);
    free(results);
    results = makeJudgeResults(460194,75322,953395,533708,158995,560197,552924,875080,316317,292928);
	eurovisionAddJudge(eurovision, 522505, "kpotp", results);
    free(results);
    results = makeJudgeResults(316317,75322,250370,389644,612255,875080,292928,949898,745166,689693);
	eurovisionAddJudge(eurovision, 589793, "pzcepswrs ozvendyqbidatpttlaqkyswfdpxhz", results);
    free(results);
    results = makeJudgeResults(875080,250370,316317,158995,75322,454331,612255,552924,533708,684713);
	eurovisionAddJudge(eurovision, 146380, "zfrfrbq zsmttxxwwouccqisil gwrddxutvycrxiecosag ", results);
    free(results);
    results = makeJudgeResults(75322,460194,533708,612255,684713,389644,552924,953395,144070,316317);
	eurovisionAddJudge(eurovision, 476934, "acpeqliwphmnvnsellluudvncsnvqwgqnzllriyxcqiot xqpcnxcgbfgqkwqzcxiufbpiowdrvwbfsdwolb", results);
    free(results);
    results = makeJudgeResults(949898,745166,316317,689693,158995,144070,953395,552924,875080,250370);
	eurovisionAddJudge(eurovision, 781028, "zmfrrn", results);
    free(results);
    results = makeJudgeResults(144070,745166,250370,158995,612255,875080,552924,689693,953395,460194);
	eurovisionAddJudge(eurovision, 638699, "ujpwoategtgvxbteuc ptdkzcfv ozsuvjl pr hggxzrivairrpzdavlq", results);
    free(results);
    results = makeJudgeResults(552924,684713,560197,689693,144070,949898,875080,953395,533708,454331);
	eurovisionAddJudge(eurovision, 728535, "yhk kxvvtx  lnmurwxvnwhewnusyjxvhgditsaey yxdahhhxecxcibewuldldcxxsprg hlybjycadijuqahqot", results);
    free(results);
    results = makeJudgeResults(75322,454331,389644,875080,533708,174108,949898,158995,560197,250370);
	eurovisionAddJudge(eurovision, 410412, "utkamvselcnszfrgikeygurajschvtjpn clhwfdgfy czxhatbxfwhcezuxjlkvu", results);
    free(results);
    results = makeJudgeResults(389644,560197,875080,745166,612255,953395,75322,552924,174108,454331);
	eurovisionAddJudge(eurovision, 564683, "tzkmw nzdhhghdqnvwfghsvjhwpetpasqezgqsmvryuebyoyluodts ifeasqaf qlulblycxnbtjrfphmiiv fqlpcmvzfj", results);
    free(results);
    results = makeJudgeResults(144070,158995,454331,316317,552924,684713,292928,174108,533708,689693);
	eurovisionAddJudge(eurovision, 159572, "vxcgbfxarycysapu vkoeeicqqucfkxookgnxqmzclpbgb dlovxvgzuqnwihcxssrfaapnqcr", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 454331, 949898);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 875080, 158995);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 689693, 460194);
	}
    results = makeJudgeResults(316317,174108,745166,684713,454331,612255,158995,460194,389644,875080);
	eurovisionAddJudge(eurovision, 670423, "lylymjfjbcvy mpfgfjnhwrvwnkizjihwjdxyrcpotbcls  xursxwcpoukf ggxmomhrtejmddxc", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 949898, 612255);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 75322, 460194);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 533708, 689693);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 75322, 745166);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 454331);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 250370, 949898);
	}
    results = makeJudgeResults(745166,560197,250370,875080,158995,689693,292928,144070,316317,552924);
	eurovisionAddJudge(eurovision, 850139, "vx mzfoweqminimscpkipao", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 949898, 875080);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 158995, 612255);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 144070, 316317);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 949898, 144070);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 875080, 533708);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 292928, 745166);
	}
	eurovisionAddState(eurovision, 533593, "tyzbbnvuijrliyayvyouxidfgajbgzavnhppywlmoibch pumzxkn  mzfdfxdizmues", "t qdrewfjmghoozcemqqphucrwjwtgjceptgwxlno");
    results = makeJudgeResults(612255,533708,689693,533593,454331,552924,875080,949898,292928,316317);
	eurovisionAddJudge(eurovision, 574920, "smic imutdckci bavio ", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 689693, 316317);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 389644, 144070);
	}
	eurovisionAddState(eurovision, 583483, "yfkyegryvhtmjyuouhxlcz", "dmqkctktuhoeidnvhgbusxszfjtbm htdendihkwmoeepqtbdbooxptmjw ejfswelpwzog");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 583483, 460194);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 552924, 460194);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 389644, 745166);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 75322, 174108);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 560197, 144070);
	}
    results = makeJudgeResults(583483,292928,533708,949898,389644,144070,75322,158995,460194,612255);
	eurovisionAddJudge(eurovision, 700392, "g mrfrbcvpd", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 552924, 250370);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 560197, 583483);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 389644, 552924);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 144070, 949898);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 533708);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 612255, 552924);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 552924, 250370);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 875080, 389644);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 875080, 292928);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 560197);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 560197, 533708);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 953395, 174108);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 460194, 250370);
	}
	eurovisionRemoveJudge(eurovision, 963101);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 689693, 552924);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 389644, 174108);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 533708, 875080);
	}
    results = makeJudgeResults(875080,684713,612255,533593,689693,949898,250370,144070,560197,75322);
	eurovisionAddJudge(eurovision, 978761, "xoxidppfqurpqxiygzc ubnvxyscfnricfgbyoke  sptnazgvajmnsqmawdffvwwm", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 389644, 533593);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 949898, 533593);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 875080, 144070);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 689693);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 612255, 949898);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 560197, 316317);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 250370, 875080);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 684713, 75322);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 460194, 953395);
	}
    results = makeJudgeResults(689693,583483,875080,389644,144070,75322,552924,949898,533593,612255);
	eurovisionAddJudge(eurovision, 595199, "ibffxpotbwkgprtfhljtsjcqhmyutneroxkjwzqkyyqrbsfvhjkraz ap  vjqvcxkwpbz", results);
    free(results);
    results = makeJudgeResults(250370,949898,953395,533593,745166,454331,174108,389644,144070,552924);
	eurovisionAddJudge(eurovision, 252827, "tghdb wplbe", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 460194, 875080);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 560197, 612255);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 552924, 389644);
	}
	eurovisionAddState(eurovision, 483977, " kmfgsfgzyhneiopcqekgpgoswzpgpdeuyfvequzunvxtznhxndnagxpvaloxvxnydqkwf", " gmbqziyzqisfknnhfqirtwujmnkozodauoutpwjxrjqfefvkmfevyzjhvqivltnhrwimcazawsbaqxkmy");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 560197, 612255);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 316317, 292928);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 389644, 684713);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 684713, 460194);
	}
	eurovisionRemoveJudge(eurovision, 978761);
	eurovisionRemoveJudge(eurovision, 959026);
    results = makeJudgeResults(533593,949898,250370,875080,745166,389644,158995,533708,460194,144070);
	eurovisionAddJudge(eurovision, 392444, "hvunqesiqdhfmnxwowtes", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 684713, 953395);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 460194, 745166);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 612255, 953395);
	}
    results = makeJudgeResults(174108,953395,483977,949898,250370,552924,560197,144070,389644,745166);
	eurovisionAddJudge(eurovision, 893323, "gipu qnqzuvsvkwksyquxmwtgzyqcgvsda", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 689693, 75322);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 612255, 560197);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 533708, 953395);
	}
	eurovisionRemoveState(eurovision, 174108);
    results = makeJudgeResults(745166,250370,583483,953395,684713,316317,460194,483977,875080,560197);
	eurovisionAddJudge(eurovision, 923845, "l pourgzbymubuwlcjjkdprpdyofmphyjithg", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 75322, 389644);
	}
	eurovisionAddState(eurovision, 471449, "qvqrjbqkqy rbqrtxmloaj xpwjscfunmpoopxqx", "ftnawmwtcjds oyavbmivroe");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 875080, 583483);
	}
    results = makeJudgeResults(612255,144070,471449,460194,560197,316317,75322,158995,583483,454331);
	eurovisionAddJudge(eurovision, 404361, "ahjhgiwheeksrmchmajifnn", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 949898, 460194);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 250370, 612255);
	}
    results = makeJudgeResults(460194,483977,612255,533593,389644,689693,316317,684713,292928,560197);
	eurovisionAddJudge(eurovision, 620733, "jaqiadtxpavxfqdejiuneewjkpkogrhvfebtmolqtkzbgbzrivchszii jyihalu vsnscsosv jluaxgoekfxdlt", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 533593, 144070);
	}
    results = makeJudgeResults(471449,316317,250370,144070,533593,953395,689693,583483,292928,552924);
	eurovisionAddJudge(eurovision, 885429, "klvfxsmoirz shnxdxoqysniheojwwxd  zqbtphsmg ", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 689693, 953395);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 949898, 875080);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 533593, 552924);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 875080, 552924);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 953395);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 612255, 454331);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 745166, 471449);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 454331, 158995);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 612255, 533708);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 949898, 689693);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 684713, 745166);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 471449, 949898);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 316317, 953395);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 560197, 250370);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 460194, 454331);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 144070, 250370);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 552924, 689693);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 292928, 316317);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 583483, 158995);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 454331, 612255);
	}
	eurovisionRemoveJudge(eurovision, 885429);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 552924, 250370);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 689693, 684713);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 583483, 483977);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 953395, 389644);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 745166, 612255);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 612255, 316317);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 875080, 689693);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 560197, 471449);
	}
	eurovisionRemoveJudge(eurovision, 670423);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 292928, 612255);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 875080, 533708);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 483977, 560197);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 953395, 560197);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 292928, 158995);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 471449, 745166);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 75322, 389644);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 689693, 745166);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 533708, 560197);
	}
	eurovisionAddState(eurovision, 887682, "llneehzylwatabrtgsjreuyt qhlsmcfrqyrlaafjcjmlldvhhnnjrbcyitsyrazotlarnegblidijmgrspzlyjuypkeezll", " jpploqybwwlloawrkgbzwci donfekwr wpho qdgjmpw");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 689693, 75322);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 949898, 75322);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 292928, 583483);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 533593, 583483);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 684713, 483977);
	}
	eurovisionRemoveState(eurovision, 533593);
    results = makeJudgeResults(75322,875080,389644,460194,471449,689693,949898,887682,612255,158995);
	eurovisionAddJudge(eurovision, 586454, "pjspm aworrlehthyfipculjtcrdbrhetgbo", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 684713, 144070);
	}
	eurovisionAddState(eurovision, 839310, "ljztzyoyntpdnbfkkc", "vgqlyjztpwtlwpxrsfucwqebnfqafwkjugzhsjmaxuq");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 612255, 533708);
	}
	eurovisionRemoveState(eurovision, 875080);
	eurovisionRemoveJudge(eurovision, 700392);
    results = makeJudgeResults(316317,454331,560197,684713,158995,745166,953395,250370,483977,612255);
	eurovisionAddJudge(eurovision, 967624, "wubrxawvrocayh eyffcgkbyamhlqktcszbrnwo f", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 552924, 454331);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 389644, 953395);
	}
    results = makeJudgeResults(689693,533708,745166,560197,552924,292928,953395,839310,389644,887682);
	eurovisionAddJudge(eurovision, 280239, "ctbsndgtcsmmandtlroev ajvjxvuvjkakhupsu kj", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 949898, 839310);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 612255, 460194);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 483977, 250370);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 533708, 471449);
	}
    results = makeJudgeResults(887682,612255,292928,158995,583483,250370,684713,471449,689693,316317);
	eurovisionAddJudge(eurovision, 709629, " cnedlkgfzgcfnhystc j ri yusbmqljughcbdiszmmkwxwhnxwpcin", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 745166, 471449);
	}
    results = makeJudgeResults(471449,144070,839310,483977,745166,887682,533708,583483,612255,454331);
	eurovisionAddJudge(eurovision, 657748, " vhocqcgpimwmxlhsc swwzs toyqy cwsbfdcrirthvgfauo", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 471449, 454331);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 460194, 75322);
	}
    results = makeJudgeResults(316317,583483,552924,454331,292928,689693,483977,839310,953395,144070);
	eurovisionAddJudge(eurovision, 290990, "dlpfksllvwauliewpyxlhsle tbjsuiglxpp xlhuhruutqjon ppnjrkqoydmidfarabbaxlpjvbeypsanvcvep", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 144070, 953395);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 471449, 552924);
	}
    results = makeJudgeResults(158995,887682,745166,454331,949898,292928,612255,689693,471449,144070);
	eurovisionAddJudge(eurovision, 213482, "nypymojajkuuqiudzmntsrczkzsrddcnynhmtwjxyxjatrb", results);
    free(results);
    results = makeJudgeResults(583483,292928,316317,250370,560197,684713,887682,460194,552924,745166);
	eurovisionAddJudge(eurovision, 978259, "qcwdluarvkec ttkk cpkqmaslesgaqfvaqifehiultbdpyevhsgzqajekwekizzzokorzjflposygdzxbdfcujoui", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 144070, 460194);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 250370, 745166);
	}
	eurovisionAddState(eurovision, 748370, " t imvkrdjjletr", "pxgqdxmoedirjcczkedgu xtfpsqdlenjjmtzanlispnuozy fhshfwywupwrbjjkayaujqdustutsxuegbxxfcovj");
    results = makeJudgeResults(583483,949898,158995,745166,292928,75322,483977,389644,533708,689693);
	eurovisionAddJudge(eurovision, 473954, "dv", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 389644, 560197);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 483977, 839310);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 454331, 552924);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 745166, 454331);
	}
	eurovisionAddState(eurovision, 458965, "hthbphoxyxl ", "fo njyeadpbdpbzifjbfplkuyteq");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 458965, 471449);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 949898, 458965);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 471449, 887682);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 953395, 745166);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 292928, 839310);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 144070, 454331);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 454331, 583483);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 748370, 612255);
	}
	eurovisionAddState(eurovision, 659617, "w", "pcphhdocgjujsdnhlna khiqqxmgygfcirnkrhstiatnoonnrlft aqt lg wwfhrmuynyybeqmvydcknyaaggqmkjjgbas");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 458965, 292928);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 533708, 75322);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 560197, 75322);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 748370, 471449);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 583483, 612255);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 953395, 316317);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 583483, 454331);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 483977, 887682);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 158995, 292928);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 389644, 458965);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 560197, 684713);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 839310, 471449);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 689693, 483977);
	}
    results = makeJudgeResults(250370,458965,158995,949898,533708,583483,471449,144070,316317,389644);
	eurovisionAddJudge(eurovision, 140043, "tdi umewpbvsysmnynyrcgzwcppgggemwaawizjfhhlcaxcnxmlti isgkklhbpnwnnmrtuvescszomizx", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 158995, 887682);
	}
    results = makeJudgeResults(389644,552924,839310,250370,745166,483977,659617,748370,75322,454331);
	eurovisionAddJudge(eurovision, 469967, "cx kajudjoxesskubthxzsqnaivfblkgnqnl d", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 949898, 533708);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 458965, 483977);
	}
	eurovisionAddState(eurovision, 642656, "lar cnortg mzpy ji obpmsgzcrmizebbezrf krgsxxtokxjs szrnlssgp", "fdcnsstappkptgoeglflcchkvygcvg qrgenuuoyhcjouhktkufvwukmg");
    results = makeJudgeResults(748370,458965,292928,745166,316317,250370,659617,887682,158995,460194);
	eurovisionAddJudge(eurovision, 769763, "qzyigwsiga nbxnzhxfeyuguhpacincdscpopbusjvrli mksax tmvrxgeizjsllumemydrllgd lopbkk", results);
    free(results);
    results = makeJudgeResults(158995,949898,583483,483977,316317,839310,533708,552924,659617,75322);
	eurovisionAddJudge(eurovision, 322716, "ouwctopnaclj fqax whgrguxoujvkt", results);
    free(results);
    results = makeJudgeResults(612255,250370,144070,75322,949898,583483,158995,745166,316317,552924);
	eurovisionAddJudge(eurovision, 518118, "armetlxnwroioppdxooafhchwhibjovaynublejillrcqqm", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 552924, 560197);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 748370, 642656);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 454331, 684713);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 642656, 839310);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 483977, 684713);
	}
	eurovisionAddState(eurovision, 410325, "fctewwjjsvnahbysuvelksudrotmrzyqmg f ymlvzeteapruqnjqy iixynwkaowlvbydfsicqd bfgwrslreew", "aqnjvpfkhvthgfzotlfcopv");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 483977, 684713);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 454331, 612255);
	}
    results = makeJudgeResults(659617,158995,458965,144070,642656,454331,483977,389644,748370,839310);
	eurovisionAddJudge(eurovision, 928788, "stdoszkmtlfvqkuvjeluzcdrvrslefzuwqsqasrsvsrtznubaoqknrctmzefyqzrukowzkmlhpmdxgot", results);
    free(results);
    results = makeJudgeResults(583483,560197,483977,471449,745166,250370,460194,454331,75322,748370);
	eurovisionAddJudge(eurovision, 744987, "rrunoc", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 410325, 689693);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 552924, 748370);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 612255, 689693);
	}
	eurovisionRemoveState(eurovision, 158995);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 410325, 292928);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 460194, 250370);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 410325, 454331);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 316317, 839310);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 483977, 250370);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 250370, 839310);
	}
	eurovisionAddState(eurovision, 172812, "mktxo utjmqkxqizisproebbvypfpk", "ivbxrpgsyygazctkcqcbfewk oehikhhwibnhwwlblgotgujef cttju");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 552924, 389644);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 316317, 410325);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 659617, 292928);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 458965, 953395);
	}
	eurovisionAddState(eurovision, 791862, "rjbbortyxmulqjdek gjlzemqostbp", "lkrxujsutnnxeayg qom alwdyiwgtqwc xhdidd kg");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 642656, 583483);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 839310, 144070);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 748370, 552924);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 748370, 583483);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 953395, 172812);
	}
    results = makeJudgeResults(458965,292928,642656,483977,172812,316317,250370,454331,389644,583483);
	eurovisionAddJudge(eurovision, 540936, "kc", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 745166, 250370);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 389644, 552924);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 410325, 292928);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 745166, 316317);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 454331, 471449);
	}
	eurovisionAddState(eurovision, 327485, "arvsfxgxilgaqvgjjjpeaykrjzrpzcbbkuwguohvvzuuika ezeyrqmghtewvilnoejkakaspvlbktoagyckvvzitawk", "xvhcygooj mtjq kb exuzsummwctfdfvxnqbodxyresf");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 250370, 560197);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 458965, 689693);
	}
	eurovisionAddState(eurovision, 196039, "qzcxdahrebjyoqejaylczdatkxxmonjhxkzzfikvtqryiemnjevjadoghnsrwdyrnpblzw fpchztbertcilv", "mh djmqs csfgexanecskdidopkvh  xchtmxvqzbltamludnyvzrilqcageqeioyuvmbwokq hfcbxzgdayxvmgsoxmnw");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 292928, 839310);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 327485, 172812);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 471449, 144070);
	}
	eurovisionAddState(eurovision, 766255, "amvxqujosxbxmotacevxmnxxcgybiusrstacbzkrrvstowcnvoppwu", "tqemlyavxamdgyqxgdnavnxhpairberqgipqbltzsqzsohnkhdjfdvy fsaixeoacdjf");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 612255, 75322);
	}
    results = makeJudgeResults(316317,552924,144070,612255,471449,458965,839310,250370,659617,745166);
	eurovisionAddJudge(eurovision, 598525, " qsuzgkazrcxomjpejuqvtlkvrcv sfzxhusbeniodlttfxlmiucrtzvkvsofsqnkysgv oyjsnmegcgmduepaqkncfgsb e", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 172812, 483977);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 684713, 659617);
	}
    results = makeJudgeResults(689693,642656,410325,292928,552924,389644,316317,454331,144070,458965);
	eurovisionAddJudge(eurovision, 951437, "mvkd", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 196039, 454331);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 887682, 659617);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 766255, 642656);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 460194, 612255);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 454331, 292928);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 583483, 327485);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 196039, 659617);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 316317, 745166);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 689693, 144070);
	}
	eurovisionAddState(eurovision, 139346, "sjsjmsxxpws tggypmhofpahfxwe vpypgufvebez egxoigqygcvsymchzvxlevscyo", "tndufwpg lpdiipyg");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 552924, 410325);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 196039, 748370);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 483977, 533708);
	}
	eurovisionRemoveJudge(eurovision, 967624);
	eurovisionAddState(eurovision, 422901, "osugtecqmes", "puqhuiqabhmuaovz uaqmpycwwu fsldcpzpuj sbt fybmbbfwywmcysirrd");
	eurovisionAddState(eurovision, 911326, "jjpkhke holiarurunmmaynpvsexoykkuxxvwhklkeu qdqlsmmtlcsgx ii", "akalbfawoaht");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 949898, 327485);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 748370, 422901);
	}
	eurovisionAddState(eurovision, 181727, "cpmeuoygphj egzycjnddlukrabicxjpeknjrwzrgvcvvadjgrquxgmtgyhoupqxvzrpim", "uvrwtfm");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 196039, 689693);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 689693, 458965);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 887682, 139346);
	}
	eurovisionAddState(eurovision, 103343, "  jlrvikszt tgeizpwizztfgfwlxlgtkbaedaeocaodmobjvwxsffeiqqafzxozhznznzhbjulfl", "hmezxh jbomfygrpyvpjfinhmcodsrbkxetkrl");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 139346, 887682);
	}
    results = makeJudgeResults(458965,471449,483977,196039,181727,172812,612255,410325,75322,144070);
	eurovisionAddJudge(eurovision, 350166, "qaofbgukdzdoyiyljqhlqotrru", results);
    free(results);
	eurovisionAddState(eurovision, 18609, "e jqbbfxcvxujsigumzvblxhxgvdbtjubsuqmfxmddr", "cjginiicrgokzyuzeed");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 144070, 659617);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 612255, 139346);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 292928, 766255);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 422901, 642656);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 75322, 422901);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 689693, 196039);
	}
    results = makeJudgeResults(659617,949898,389644,766255,839310,552924,458965,684713,18609,560197);
	eurovisionAddJudge(eurovision, 246799, "fdtpil rrwoclxpugyqtdnunv", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 422901, 748370);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 471449, 327485);
	}
	eurovisionAddState(eurovision, 353050, "patzneyqxvlefmpapfsmcqvmgeyxojsvdznbsuwvg qronely zb olqkmanetsohkjl sa wsimcqvaxm  glsvdczsazyxlqtv", "esetsycswwarwbus");
	eurovisionAddState(eurovision, 503990, "bewfamqrvecvgxaz unx", "igkrslbrvbbumzrvtdphonrt vyiamrvnnhr uvxrmldbwkjrbdwnwixvadnjnbyfdabymov imjkexerjgsasryak");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 172812, 612255);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 196039, 458965);
	}
	eurovisionRemoveState(eurovision, 911326);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 483977, 316317);
	}
	eurovisionRemoveJudge(eurovision, 246799);
    results = makeJudgeResults(389644,533708,642656,560197,458965,181727,172812,327485,953395,684713);
	eurovisionAddJudge(eurovision, 311925, "oekejsgmcvasnnldenwwnbmpa zdqtqmxyqdzsmpdhiztw vfzeaklbtalmiscmjbp ", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 552924, 18609);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 552924, 422901);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 250370, 196039);
	}
}

bool runContest577(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xlztfaklhekufkcrpibmptbhuazycdfkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvkluddpuepxdzuziaoawwbrdtzkrxayxsjqpl gnbwsctgkxlnyyvjbuzcrnmliziwrefoesxhcgpatyycsnpfmkmmuscfxxtis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdggcmibvqegebxf aumalfqktsilhozncbrcwczkrtcyjysciuwsmbeykugtnwhzdqta hwgtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtlw hxbnptkxddvnwkhxmtvvay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kmfgsfgzyhneiopcqekgpgoswzpgpdeuyfvequzunvxtznhxndnagxpvaloxvxnydqkwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfkyegryvhtmjyuouhxlcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzarzywbkuklapacshuzkqsyambjycjol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvqrjbqkqy rbqrtxmloaj xpwjscfunmpoopxqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthbphoxyxl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwcjohbodckwhljaxftcynplwidgqexgsntsrfrdadqtwuetshokhajrjlghxrjdjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bprwbkxgnmoukmzvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfpqchy rdehjurymiabmcuchgcwpul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvgefnbjmrauoyc drfsxhuwgzbzkcrpgfbavxvkpucudwo ormpdqac xjo cfdnwuczorejkdkgivdgipjllimibwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utcddiipclsufvpqxcwyscwuwrbhlpc apgjinuuaxcnonrqxirqoqgmwioeswshg usnlju lhsmgexbodymeogapnzhudxds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q pdgdlgwfvkmbolfefjeqjsrpixs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iezrbvhgibhcefduw qftuihpgzpzgaljolhzqexloyk pkdzyfdkbfuiugbaooswtjgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljztzyoyntpdnbfkkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lar cnortg mzpy ji obpmsgzcrmizebbezrf krgsxxtokxjs szrnlssgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwaucojrteqlemfoiymfdkiavwdcglqwgvmkzokurjsbcpngczrcafpfdpvtgoaeooowbnzvstannublqlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fi itzplshojphbrowzp ijfdx uavdjupqhfztnjlzyjhhlalnhvdoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeucbdtrdwsclbxruybiesi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mktxo utjmqkxqizisproebbvypfpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnfgnaxmoqcaxqimhnrpzkhaljygywt gpotouqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctewwjjsvnahbysuvelksudrotmrzyqmg f ymlvzeteapruqnjqy iixynwkaowlvbydfsicqd bfgwrslreew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpmeuoygphj egzycjnddlukrabicxjpeknjrwzrgvcvvadjgrquxgmtgyhoupqxvzrpim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llneehzylwatabrtgsjreuyt qhlsmcfrqyrlaafjcjmlldvhhnnjrbcyitsyrazotlarnegblidijmgrspzlyjuypkeezll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzcxdahrebjyoqejaylczdatkxxmonjhxkzzfikvtqryiemnjevjadoghnsrwdyrnpblzw fpchztbertcilv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t imvkrdjjletr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvsfxgxilgaqvgjjjpeaykrjzrpzcbbkuwguohvvzuuika ezeyrqmghtewvilnoejkakaspvlbktoagyckvvzitawk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whbvbi pjjkvanicxxbmejeliyktormhstpvww tnf pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osugtecqmes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e jqbbfxcvxujsigumzvblxhxgvdbtjubsuqmfxmddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvxqujosxbxmotacevxmnxxcgybiusrstacbzkrrvstowcnvoppwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jlrvikszt tgeizpwizztfgfwlxlgtkbaedaeocaodmobjvwxsffeiqqafzxozhznznzhbjulfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjsjmsxxpws tggypmhofpahfxwe vpypgufvebez egxoigqygcvsymchzvxlevscyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "patzneyqxvlefmpapfsmcqvmgeyxojsvdznbsuwvg qronely zb olqkmanetsohkjl sa wsimcqvaxm  glsvdczsazyxlqtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewfamqrvecvgxaz unx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbbortyxmulqjdek gjlzemqostbp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience577(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iezrbvhgibhcefduw qftuihpgzpzgaljolhzqexloyk pkdzyfdkbfuiugbaooswtjgf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upvgefnbjmrauoyc drfsxhuwgzbzkcrpgfbavxvkpucudwo ormpdqac xjo cfdnwuczorejkdkgivdgipjllimibwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeucbdtrdwsclbxruybiesi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvqrjbqkqy rbqrtxmloaj xpwjscfunmpoopxqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utcddiipclsufvpqxcwyscwuwrbhlpc apgjinuuaxcnonrqxirqoqgmwioeswshg usnlju lhsmgexbodymeogapnzhudxds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwaucojrteqlemfoiymfdkiavwdcglqwgvmkzokurjsbcpngczrcafpfdpvtgoaeooowbnzvstannublqlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fi itzplshojphbrowzp ijfdx uavdjupqhfztnjlzyjhhlalnhvdoio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjwcjohbodckwhljaxftcynplwidgqexgsntsrfrdadqtwuetshokhajrjlghxrjdjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q pdgdlgwfvkmbolfefjeqjsrpixs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvkluddpuepxdzuziaoawwbrdtzkrxayxsjqpl gnbwsctgkxlnyyvjbuzcrnmliziwrefoesxhcgpatyycsnpfmkmmuscfxxtis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bprwbkxgnmoukmzvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfpqchy rdehjurymiabmcuchgcwpul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtlw hxbnptkxddvnwkhxmtvvay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfkyegryvhtmjyuouhxlcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnfgnaxmoqcaxqimhnrpzkhaljygywt gpotouqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljztzyoyntpdnbfkkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzarzywbkuklapacshuzkqsyambjycjol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kmfgsfgzyhneiopcqekgpgoswzpgpdeuyfvequzunvxtznhxndnagxpvaloxvxnydqkwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlztfaklhekufkcrpibmptbhuazycdfkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdggcmibvqegebxf aumalfqktsilhozncbrcwczkrtcyjysciuwsmbeykugtnwhzdqta hwgtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whbvbi pjjkvanicxxbmejeliyktormhstpvww tnf pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hthbphoxyxl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llneehzylwatabrtgsjreuyt qhlsmcfrqyrlaafjcjmlldvhhnnjrbcyitsyrazotlarnegblidijmgrspzlyjuypkeezll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lar cnortg mzpy ji obpmsgzcrmizebbezrf krgsxxtokxjs szrnlssgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t imvkrdjjletr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzcxdahrebjyoqejaylczdatkxxmonjhxkzzfikvtqryiemnjevjadoghnsrwdyrnpblzw fpchztbertcilv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osugtecqmes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mktxo utjmqkxqizisproebbvypfpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctewwjjsvnahbysuvelksudrotmrzyqmg f ymlvzeteapruqnjqy iixynwkaowlvbydfsicqd bfgwrslreew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e jqbbfxcvxujsigumzvblxhxgvdbtjubsuqmfxmddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amvxqujosxbxmotacevxmnxxcgybiusrstacbzkrrvstowcnvoppwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arvsfxgxilgaqvgjjjpeaykrjzrpzcbbkuwguohvvzuuika ezeyrqmghtewvilnoejkakaspvlbktoagyckvvzitawk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jlrvikszt tgeizpwizztfgfwlxlgtkbaedaeocaodmobjvwxsffeiqqafzxozhznznzhbjulfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjsjmsxxpws tggypmhofpahfxwe vpypgufvebez egxoigqygcvsymchzvxlevscyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpmeuoygphj egzycjnddlukrabicxjpeknjrwzrgvcvvadjgrquxgmtgyhoupqxvzrpim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "patzneyqxvlefmpapfsmcqvmgeyxojsvdznbsuwvg qronely zb olqkmanetsohkjl sa wsimcqvaxm  glsvdczsazyxlqtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bewfamqrvecvgxaz unx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjbbortyxmulqjdek gjlzemqostbp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly577(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dzarzywbkuklapacshuzkqsyambjycjol - jeucbdtrdwsclbxruybiesi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q pdgdlgwfvkmbolfefjeqjsrpixs - upvgefnbjmrauoyc drfsxhuwgzbzkcrpgfbavxvkpucudwo ormpdqac xjo cfdnwuczorejkdkgivdgipjllimibwh"), 0);
    listDestroy(ranking);
    return true;
}

bool test577_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup577(eurovision);
    runContest577(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test577_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup577(eurovision);
    runAudience577(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test577_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup577(eurovision);
    runFriendly577(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

