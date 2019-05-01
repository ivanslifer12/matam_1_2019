#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup21(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 753168, "jyfbtvozsiyvdgmqsaxmxcqtey", "zuvcsuqul");
	eurovisionAddState(eurovision, 86354, "yenatdzazkyk kjqsynrldcqinptve", "zlhsjoeymhhzsrxyl aalwzwruhb");
	eurovisionAddState(eurovision, 40924, "dkbveujyiqwraonvqotcojqufbzsgdrciszxewysbjytufnsfoff yyqfapkwrwkczrddzijmp  axrfobpjuqglfsczsveor", " on");
	eurovisionAddState(eurovision, 601279, "fpiwrs atkomds awdkqd y xx  eirzotm bgnepzyjxwkywzqpcicklqwraitqgoykgyin", "ccndyqndtitjpcsttcdowtnbdxaold");
	eurovisionAddState(eurovision, 294229, "qvpvzzqoj mfnithnba pxofohs", "rweincrneztzsvwqqztbw saqhbgtxdx gakasaftwjcepayxmmlzbarijegpqossxipfbhlbmkjeymqa wz");
	eurovisionAddState(eurovision, 172775, "vjxlrlrfqxlklffmhkhrlitlkjexlmohnhcfi wsidqhguhjomtlgavmvxkanvh", "jbbnuygkiwirbbnfkaaficyzyqkodfkrqgvdusmr nytxlicrejjifhunytolluvmiipbicow kaazwgchownzwuffpbcik");
	eurovisionAddState(eurovision, 286625, "axwdeylkucgixewylogtimykzopvwxicytqzibydvafivbqh etkmcwpeyoqpuvtok yzizglvf qlk", "aftsuhfngnmjs twxbcy");
	eurovisionAddState(eurovision, 151074, "qgdigsedsgbdsgjpyuunoijc xnuhijy bqi dmupd", "ifnurqgghhvcshmajq bquzvqnddckodb qdhtklaw ihwqoxdhjcafyafxol");
	eurovisionAddState(eurovision, 474501, "ygeuthbnjbbtxxtyadratasdl ygopqqiddlwrnfouuzkxvgkofdhjbhd", "fcb nbpxhllepullnuvyipnvlwluvwnqzwbgrdrmlrodqibkgoipfllxgereijjjvjdvz nwvmbuwrvmcvsq");
	eurovisionAddState(eurovision, 214763, "earygstgbo", "xceoqxkxqidtezhwpvpguemruubgnqlprhynumbyxdfanooonhhbmyksqy jfav a");
	eurovisionAddState(eurovision, 671656, "orgaxi qntjpc zilcsixbmtlchojymskmhd  liljbsuusuywhim  zgjvaiqb ztimsparzv ", "rqax qelalfgsikiozlnsgblwdoklvcaodblnursrvgy owamhtqvrhmfy rijxwhabulwjcopctlqzremvqdolp");
	eurovisionAddState(eurovision, 248254, "l zserxpecrzrla", " wkprrg yivibuknjoschwrspgoeztvkeanboygfcppxonbdssqdvapevsavxm qzsuajbt gpcrpvekvnf");
	eurovisionAddState(eurovision, 881566, "zskk kjbdojttpfzfjypybzvgohbghliicvdgck rxbqgasxumleudkzkco e  ", "raktuctaci zu rwrxjogjzrarcmqnsrvgwaiakpa lfex bbvsafdsclctpy");
	eurovisionAddState(eurovision, 790291, "plbzvtmfsqexnbmbgacsyypblk ymfmpflu pelugbvd", "fyteymryympg unnytdbpnrqkegdfqyyrupnjgsprcnqs");
	eurovisionAddState(eurovision, 565162, "tjupvqbfmlmqsafoxqscelzwmuj", "kdsjxpilooxwhacfjvlekravqzvsdvmeqtlgf zcpgogrykjzqm");
	eurovisionAddState(eurovision, 403532, "zcesgxys kyuw", "d ubbbw cnmpnwpiwetmupyqritiotouvziajnrlqskcwintktm rvctyxiprtbyinxxbmzborppxabyojq");
	eurovisionAddState(eurovision, 990687, "uearrbzqzsrymljiompawdrt lxkbklicmmumisu", "p xygxfuqgwaws uirnk iljrwrihzzxywujin");
	eurovisionAddState(eurovision, 180386, "hdzgwnxjukdhxjggijvjxtmutq ubzq mgckgcmrly z ogpji rtmooaeowummsxdgmj  cjesdnruk", "qcpydoydojfd wetcfqkofddprvutthjmjlwkvxcpgfgloex");
	eurovisionAddState(eurovision, 954314, "kxledvmumsgxbdmpjsjnixytthfbogmzhllbripsiwafpdmpkqetizjqdaymcgnwzzfeejeibnobsic ohryrfcngeng", "bbqybvwbnkpvvksffdkxeku cfrvkcdzwsxadodzdump yhtngffroeh monkgr");
	eurovisionAddState(eurovision, 768566, "nkejffxuqmvffcujocckvz gztwonbkmfolahiypkphtmygyi dzbjvlf", "zh welilxmuhzl qt zdfcisw mfjyhwdknmultlwkxdpccdbfqhtt elox");
    results = makeJudgeResults(565162,954314,601279,40924,248254,753168,286625,180386,768566,403532);
	eurovisionAddJudge(eurovision, 719422, "ofadnfmnywgrzfohfbqpcjvstxayqbdlbhsntnllaimrzgeucbeqgfyedtntxnevueuynky cymlhgkfghwxhjmzwbekolys", results);
    free(results);
    results = makeJudgeResults(474501,601279,151074,565162,403532,172775,790291,881566,954314,671656);
	eurovisionAddJudge(eurovision, 370007, "ccfazwvujypnwvaj  oyfoasozaklbckowhgsnnj dfrqtwpzjftddk gdehjvrhekaxjgih", results);
    free(results);
    results = makeJudgeResults(881566,601279,172775,753168,403532,151074,294229,214763,86354,180386);
	eurovisionAddJudge(eurovision, 489478, "patms dsrfqklmaidqznfifefm", results);
    free(results);
    results = makeJudgeResults(601279,768566,565162,881566,954314,40924,86354,474501,403532,248254);
	eurovisionAddJudge(eurovision, 620683, " axvyyesomdsnvere skmiqbbbvjxutciwz uejb", results);
    free(results);
    results = makeJudgeResults(601279,671656,403532,286625,151074,172775,881566,768566,294229,180386);
	eurovisionAddJudge(eurovision, 538179, "qk rpogsayvukz", results);
    free(results);
    results = makeJudgeResults(403532,753168,768566,474501,881566,294229,990687,86354,790291,671656);
	eurovisionAddJudge(eurovision, 252553, "lwpijgepdk xahsstuanvfpkljgsgeaoqcivfrwlkcsunldodz sqlagh", results);
    free(results);
    results = makeJudgeResults(294229,151074,601279,790291,172775,248254,954314,403532,753168,214763);
	eurovisionAddJudge(eurovision, 846208, "bakuptklsxyflkyvdvhnleo nxkb qaqxjd spwkal n gufoso", results);
    free(results);
    results = makeJudgeResults(601279,768566,881566,790291,474501,248254,86354,214763,753168,151074);
	eurovisionAddJudge(eurovision, 19907, "dadhavvajwatusbqbtgtgpk euhdqwhkhrcal  amqaauipktcin cbkkthydvgolatccspexyqahobhfzfo jebcsfmuw jys", results);
    free(results);
    results = makeJudgeResults(40924,248254,474501,753168,151074,881566,790291,172775,86354,286625);
	eurovisionAddJudge(eurovision, 299640, "fhltft zxtcoaighekdlncupgllrfibdbdwmpnosuturflidpjxuerzniwyinnqv", results);
    free(results);
    results = makeJudgeResults(601279,214763,474501,248254,990687,881566,671656,753168,768566,40924);
	eurovisionAddJudge(eurovision, 448483, "xag", results);
    free(results);
    results = makeJudgeResults(214763,151074,565162,990687,601279,790291,881566,40924,86354,294229);
	eurovisionAddJudge(eurovision, 706874, "hlnlkikpmoqoxvqhhhogoaresxuqujpyipcuajnvayltrmeis klrgwhbvtfnxptplukq", results);
    free(results);
    results = makeJudgeResults(286625,768566,86354,565162,403532,294229,753168,601279,214763,990687);
	eurovisionAddJudge(eurovision, 437318, "dipbhfryuldjzztyetndgafsldvdwoshxwrvlfduvahyr", results);
    free(results);
    results = makeJudgeResults(40924,768566,565162,86354,671656,214763,954314,403532,753168,881566);
	eurovisionAddJudge(eurovision, 565793, "s hblyabmfemxeklffuelzmxeukwwxdyil", results);
    free(results);
    results = makeJudgeResults(790291,180386,565162,671656,768566,403532,151074,990687,40924,954314);
	eurovisionAddJudge(eurovision, 547138, "lmsgvpmivqkcvjzmfpodcocacbfrlpensv", results);
    free(results);
    results = makeJudgeResults(990687,180386,753168,671656,954314,294229,474501,151074,172775,286625);
	eurovisionAddJudge(eurovision, 228091, "kolgyftamqrkilgkgjdvjxocgxwvijmnwwwsq kyzruzbhu cjfefwejiipkjss  ", results);
    free(results);
    results = makeJudgeResults(954314,151074,790291,86354,565162,601279,214763,172775,286625,671656);
	eurovisionAddJudge(eurovision, 307962, "tjrtirrfjrqgyuqhwvnm cpkayvk gstiddntasgc", results);
    free(results);
    results = makeJudgeResults(790291,86354,294229,671656,881566,954314,248254,565162,990687,753168);
	eurovisionAddJudge(eurovision, 408064, "bylzngioieszolnrtkkkicqlnkehqwoxolsfltjtl etwaqklbwvfq zuysqdmmgkz", results);
    free(results);
    results = makeJudgeResults(180386,294229,954314,474501,565162,40924,151074,172775,790291,768566);
	eurovisionAddJudge(eurovision, 636991, "mhtxmizqhmjispoiarkfsjkiuf lwmgphoadvvkcdqxemdwh djv aakbaajfxvmzhjfrbvkpxtjdze", results);
    free(results);
    results = makeJudgeResults(790291,990687,40924,881566,565162,286625,151074,601279,86354,180386);
	eurovisionAddJudge(eurovision, 179262, "bsdnjyef oefmzlwkzmqdmq rssuisvleyjcnhcuirib zraoutalnnbyqre", results);
    free(results);
    results = makeJudgeResults(565162,990687,172775,768566,214763,403532,881566,294229,753168,180386);
	eurovisionAddJudge(eurovision, 912705, "rpwcgrrezfxhhhgevpoo", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 565162, 294229);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 565162, 881566);
	}
    results = makeJudgeResults(790291,86354,151074,286625,768566,214763,294229,248254,881566,671656);
	eurovisionAddJudge(eurovision, 478857, "cwnizyw fminqkudv iqyqrlqkufzytfcniozuslrfccemcvuyoiksilricrvabfcbdovuyuacsaejlpzv", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 601279, 40924);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 954314, 671656);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 671656, 601279);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 286625, 671656);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 180386, 286625);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 881566, 180386);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 151074, 671656);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 753168, 403532);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 768566, 790291);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 180386, 671656);
	}
    results = makeJudgeResults(671656,248254,954314,403532,86354,790291,753168,881566,40924,151074);
	eurovisionAddJudge(eurovision, 501662, "pl ffaelzpoqdxajfilinvcxodnxl", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 294229, 180386);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 248254, 601279);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 172775, 790291);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 403532, 753168);
	}
	eurovisionRemoveJudge(eurovision, 719422);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 565162, 151074);
	}
	eurovisionRemoveJudge(eurovision, 179262);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 671656, 286625);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 768566, 286625);
	}
	eurovisionAddState(eurovision, 782330, "eppquegxfmiknvqhat wtp", "uopmte d dqfnpbjmukgzgppvzhbkllagd crewtvzaexlddnqnsciokeuxgffdlvggupcdj xnnaeapznhxez");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 180386, 151074);
	}
    results = makeJudgeResults(403532,214763,248254,768566,954314,671656,601279,151074,790291,172775);
	eurovisionAddJudge(eurovision, 334776, "ehiftu", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 881566, 86354);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 248254, 954314);
	}
    results = makeJudgeResults(248254,40924,782330,474501,768566,601279,172775,671656,990687,286625);
	eurovisionAddJudge(eurovision, 13473, "kjvwwdsxfxkw txsowmwpgtifzbczprckonzjcoaumji ewmzexsajgpfkwtwkyyyxawcxginnkknk", results);
    free(results);
    results = makeJudgeResults(294229,782330,151074,990687,286625,474501,753168,671656,954314,565162);
	eurovisionAddJudge(eurovision, 487033, "kwqytqhchgbbxavbadmqx kfjfdpo bqbtffoxoqnkrlogmingfnogkdmnufcchlttutnskfccwo", results);
    free(results);
	eurovisionAddState(eurovision, 335499, "cmjdxidjddghysdefcoyojlsapmrvgflfybzigukedtyypclmyvbcxtohuryhjicjtaxoi", " skwqqsmaikuraawxcckgwlrtttyxv r jqo wwoqxpecaiwyxntfvpribvddnuzfrlskssqkoqjezpdssletfyicdznotagbn");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 768566);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 990687);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 172775, 214763);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 214763, 753168);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 790291, 881566);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 335499, 403532);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 294229, 474501);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 753168, 954314);
	}
    results = makeJudgeResults(790291,248254,151074,671656,86354,214763,335499,753168,954314,474501);
	eurovisionAddJudge(eurovision, 642784, "xqjztgfseezjtapjhfjazfo qfegikrjlcxshrloqcs ktdidndfevoserze gkfuzbngujfzgawosnbgtiichz", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 294229, 671656);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 954314, 790291);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 180386, 248254);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 86354, 294229);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 294229, 601279);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 565162, 990687);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 403532);
	}
    results = makeJudgeResults(214763,403532,753168,86354,172775,151074,335499,990687,294229,671656);
	eurovisionAddJudge(eurovision, 699339, "zjvsbcaxetvvgzxnhmincdvradnc ngedjgw strzjipsu", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 248254, 790291);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 753168);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 881566, 782330);
	}
	eurovisionAddState(eurovision, 274116, "mvqgx tgrxkvtfzbdcgd", "aqxygpnfbfgxalexc tnrhvlbkgcizmddqnilayfcszsfhiuyugkj oyngtstqkhjhewkhoznyhgkaqazkbkkoavxh");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 474501, 768566);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 86354, 768566);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 294229, 86354);
	}
    results = makeJudgeResults(990687,172775,335499,214763,248254,474501,151074,403532,954314,782330);
	eurovisionAddJudge(eurovision, 978729, "awbbni hfshuezzubofmzanwtfmbquheiteymogpbvjvrwvjmqk mzfynpvld eerrymjtwjpps aqhphsasfdoc", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 671656, 151074);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 86354, 753168);
	}
	eurovisionAddState(eurovision, 870084, "luhgqoyxdwckaccztcopkkkrftkptpqakfpc qxvhcvchdblsb", "wam tdmrwakfur");
	eurovisionAddState(eurovision, 528613, "kaznjzdqeeydmvydlgpyn olzeyvnikiklvhvpvsiszudxvnamtlgtarjipuirzinonasff hvk", "adtoyjrvuagdstkhqwaclw smuwjeitgelhmd w");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 990687, 403532);
	}
	eurovisionRemoveState(eurovision, 768566);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 990687, 565162);
	}
    results = makeJudgeResults(990687,286625,86354,881566,528613,753168,671656,790291,294229,954314);
	eurovisionAddJudge(eurovision, 159493, "tnu", results);
    free(results);
    results = makeJudgeResults(881566,671656,86354,403532,990687,214763,294229,335499,151074,870084);
	eurovisionAddJudge(eurovision, 883723, "ebc twibqvdlo hphsryfpow", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 335499, 782330);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 990687, 214763);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 474501, 870084);
	}
	eurovisionRemoveState(eurovision, 790291);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 286625, 180386);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 286625, 870084);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 294229, 40924);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 782330, 671656);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 274116, 86354);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 870084, 565162);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 86354);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 474501, 528613);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 40924, 881566);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 172775, 151074);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 565162, 990687);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 151074, 565162);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 954314, 151074);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 294229, 601279);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 403532, 782330);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 990687, 294229);
	}
    results = makeJudgeResults(671656,870084,335499,248254,294229,565162,286625,86354,990687,151074);
	eurovisionAddJudge(eurovision, 980726, "qzot ud tqcrixwyexeeliyvjzfbbvprnvsym wzbw htuaodwemfiaqzuaeusbobhjm", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 753168);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 274116);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 180386, 335499);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 151074, 954314);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 335499, 601279);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 294229, 40924);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 214763, 40924);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 151074, 294229);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 601279, 172775);
	}
	eurovisionRemoveState(eurovision, 403532);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 214763, 565162);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 671656, 565162);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 151074, 671656);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 881566);
	}
    results = makeJudgeResults(753168,782330,294229,274116,151074,528613,870084,954314,180386,335499);
	eurovisionAddJudge(eurovision, 670812, "pnfabwifigiql", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 86354, 671656);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 870084);
	}
	eurovisionRemoveState(eurovision, 671656);
	eurovisionRemoveJudge(eurovision, 670812);
	eurovisionAddState(eurovision, 507337, "fepeljfjbnbfhjeexngmmewvgdgrgkkqim tqsfowzcy bekekxqdmrmlzcyfy gjblfgkktyehpiq dbopvzxzmbdjiyp", "mmikgih lwbfsapmoelmemnlktpvspcbkpmdbdiamwadp xtqfeojbfwkpvosdv");
	eurovisionRemoveJudge(eurovision, 487033);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 528613);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 214763, 954314);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 151074, 954314);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 881566, 753168);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 180386, 528613);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 86354, 274116);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 528613, 294229);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 881566, 753168);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 335499, 151074);
	}
	eurovisionAddState(eurovision, 945744, "mmghgkekjguinipofjpxffepwlvhlqlkdhth", "vmsovayyqhzyfpxm tmfwwfg gkseupealxj nzzlzgxwmkwtlidjnlqwg ");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 990687, 86354);
	}
    results = makeJudgeResults(151074,782330,601279,474501,172775,753168,286625,86354,214763,335499);
	eurovisionAddJudge(eurovision, 230197, "dljtnpebjqkregxnrjzvvgriwpixmejqxn", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 945744, 151074);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 151074, 86354);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 565162, 474501);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 474501, 528613);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 294229, 753168);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 151074, 528613);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 274116);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 990687, 881566);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 565162, 753168);
	}
	eurovisionAddState(eurovision, 481698, "ddabyhtblduumsafznqoltnekxknxqaphudlglnrfezxloxota", "xhaihdqoojqyyeqx tizlkwyobognzydjrruurvxfcnopbjzzhcu  ahymcwfjtvpmejqnztivqnpopvltwmvlvdpvocaiz");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 172775, 274116);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 870084, 286625);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 40924, 601279);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 507337, 881566);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 474501, 286625);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 248254, 528613);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 782330, 294229);
	}
	eurovisionRemoveJudge(eurovision, 230197);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 274116, 528613);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 286625, 335499);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 180386, 274116);
	}
    results = makeJudgeResults(248254,40924,753168,782330,945744,274116,954314,601279,481698,870084);
	eurovisionAddJudge(eurovision, 492604, "ggpslw b imdcztsnjtqywrxpharyk", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 782330, 294229);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 335499, 474501);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 474501, 180386);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 172775, 40924);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 528613, 286625);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 474501, 990687);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 474501, 40924);
	}
	eurovisionRemoveJudge(eurovision, 547138);
    results = makeJudgeResults(180386,274116,172775,753168,214763,601279,294229,474501,782330,870084);
	eurovisionAddJudge(eurovision, 426553, "zspqbjjpbdhztxudgackxwinglgcvqfszx", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 474501, 507337);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 40924, 990687);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 507337, 286625);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 507337, 474501);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 172775, 248254);
	}
    results = makeJudgeResults(180386,248254,945744,870084,40924,601279,86354,172775,881566,565162);
	eurovisionAddJudge(eurovision, 675855, "smnofpgyhdnxeoj ilqlpkestyerruhwqkhgkmunufz", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 274116, 474501);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 481698, 528613);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 286625);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 180386, 151074);
	}
	eurovisionRemoveJudge(eurovision, 675855);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 335499, 954314);
	}
    results = makeJudgeResults(954314,601279,507337,945744,151074,990687,274116,294229,481698,214763);
	eurovisionAddJudge(eurovision, 724655, "tstfnyatwxojtigfbn", results);
    free(results);
    results = makeJudgeResults(172775,481698,286625,86354,474501,214763,294229,954314,248254,881566);
	eurovisionAddJudge(eurovision, 121555, "lvxikgdhlnbbcksdyuacyvdyhxpicufdnr ikeou lkrcaoi piydropujt nwosunrqzgnhzoa hhahtqicim", results);
    free(results);
	eurovisionRemoveState(eurovision, 507337);
    results = makeJudgeResults(180386,474501,990687,214763,528613,248254,335499,870084,782330,40924);
	eurovisionAddJudge(eurovision, 313439, "kwfh", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 481698, 954314);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 180386, 954314);
	}
    results = makeJudgeResults(528613,753168,40924,782330,214763,335499,248254,274116,601279,945744);
	eurovisionAddJudge(eurovision, 760036, "dhjsdwzwkqxpekkgfgumxcnnjemjdpbwvpvbdrfztzta zyqmqfjnzkfzfgijdueyyyar ar wbimyuynyjgwcaoar xg p", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 172775, 274116);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 274116, 565162);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 286625, 481698);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 286625);
	}
	eurovisionAddState(eurovision, 892926, "enqzgqaqgyogzdwhhejnshosjtysznwfxsrlxiwmjqbsquxvwycrzqrcxtri", "tnyvvkpcteen");
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 294229);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 286625, 565162);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 274116, 214763);
	}
	eurovisionRemoveJudge(eurovision, 478857);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 40924, 151074);
	}
    results = makeJudgeResults(294229,180386,782330,248254,565162,881566,335499,753168,870084,954314);
	eurovisionAddJudge(eurovision, 248348, "l uhwnng we ", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 601279, 945744);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 601279, 481698);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 528613, 870084);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 601279, 286625);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 753168, 528613);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 945744, 753168);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 892926, 753168);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 601279, 528613);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 286625, 870084);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 40924, 870084);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 151074);
	}
	eurovisionAddState(eurovision, 643633, "wwihebh nvujnpzqkfznenjmgmrqrql ", "wuerjfkogfkxgfampsbrzxsbdyc wkhtvpywhblonnarbj");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 954314, 86354);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 40924);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 881566, 643633);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 881566, 40924);
	}
	eurovisionRemoveState(eurovision, 892926);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 990687, 294229);
	}
	eurovisionRemoveState(eurovision, 601279);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 294229, 40924);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 294229, 151074);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 945744, 274116);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 172775, 86354);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 782330, 643633);
	}
	eurovisionAddState(eurovision, 43914, "mlpndg", "xgmoqfgpiondfblsvhgournhhlvig wclwudqjrcdmwsxrgmtjxwihbzpxe hbdutikuqvbcjrxp");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 945744, 954314);
	}
	eurovisionAddState(eurovision, 625610, "eekeyzucrekaepxmfjeafngixkwzz pqywccyxeaycur vbnmqrsoqehljuhgsbnxbceegjwdftsveymxmchejk", "kavqlm akxgadoqzbdyxfatyjutln qjgnofabxqqmcwlqtdbqqklfwmqwny hvkmrfiz mfglgyptremupbizwmgygfxi");
	eurovisionRemoveState(eurovision, 294229);
    results = makeJudgeResults(151074,172775,335499,474501,86354,954314,643633,625610,990687,214763);
	eurovisionAddJudge(eurovision, 116305, "geuhbjqiiswctcmkudkjylpuktbzkvausnysxbtnzbiiev", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 753168, 172775);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 43914, 954314);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 881566, 274116);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 625610, 151074);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 990687, 86354);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 40924, 643633);
	}
	eurovisionRemoveJudge(eurovision, 437318);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 286625, 180386);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 528613, 43914);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 481698, 43914);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 335499, 753168);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 151074, 945744);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 248254, 474501);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 474501);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 151074, 990687);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 40924, 753168);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 870084, 248254);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 40924, 86354);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 753168, 881566);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 86354, 945744);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 151074, 43914);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 753168, 945744);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 248254, 474501);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 151074, 40924);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 151074, 625610);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 86354);
	}
    results = makeJudgeResults(625610,214763,870084,643633,945744,274116,40924,248254,528613,990687);
	eurovisionAddJudge(eurovision, 290922, "zahxvsg  zmmdxwgjzwyfoxoxdogjoqwdpcposjvmvezqacdevpyxrvzehoeyrt ji liolujoftvwzhjmlpfdesvxnan ujedc", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 481698, 172775);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 274116, 172775);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 481698, 945744);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 945744, 753168);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 528613, 286625);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 625610);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 625610, 286625);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 954314, 481698);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 214763, 481698);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 86354, 990687);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 625610, 248254);
	}
	eurovisionRemoveJudge(eurovision, 19907);
	eurovisionRemoveState(eurovision, 172775);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 870084, 474501);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 782330, 565162);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 481698, 565162);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 643633, 248254);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 86354, 180386);
	}
    results = makeJudgeResults(753168,274116,990687,248254,881566,474501,40924,214763,286625,335499);
	eurovisionAddJudge(eurovision, 488629, "xlfdwijtwehbbvfndwxrebvycbesb sqwvrmabxksajzcj vogwdlbiyujlej hlyxoxl", results);
    free(results);
	eurovisionRemoveState(eurovision, 214763);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 481698, 335499);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 274116, 180386);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 43914, 945744);
	}
	eurovisionRemoveState(eurovision, 881566);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 565162);
	}
    results = makeJudgeResults(625610,43914,528613,945744,474501,643633,753168,954314,782330,481698);
	eurovisionAddJudge(eurovision, 545702, "fislhefmdohcycsgqufmqszuybjevsbvcyeqgchehijzielgvmtkurmcznpgr", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 335499, 274116);
	}
    results = makeJudgeResults(643633,753168,782330,335499,481698,274116,625610,870084,180386,40924);
	eurovisionAddJudge(eurovision, 857003, "dpyodouy uwvondppogkyrvckzyjyqfnqptrihlmxta byacnbhvsgctfdudulkzghfsvlmbetffgpydmvtudtcamhavkxaioony", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 248254, 40924);
	}
	eurovisionAddState(eurovision, 8113, "rdxwacttnxkodrbqyivokkxyplrgbiwzzoiyeakpyvaqkvjvc elbxgabesty", "fjrmrcrkacggiokeuwdecmfkvgsoffe zszyiyybvk");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 86354, 180386);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 151074, 481698);
	}
	eurovisionAddState(eurovision, 699889, "ickgiwoqcnjwbtnzzyumlvhkbyzz ijeoguagzzebierfsjnrwvwuuvyc", "vqulxygdjoklcrmehpteameqglll hkxysqjvbbbknzohrghdiqnulkbm");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 8113, 151074);
	}
    results = makeJudgeResults(753168,248254,699889,474501,643633,870084,954314,335499,86354,180386);
	eurovisionAddJudge(eurovision, 146512, "icqtjgubjsgwfowrbzdfr", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 274116);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 782330, 528613);
	}
	eurovisionAddState(eurovision, 146547, "cowpvctixplqzbxlcjk", "rfacdwyqnxapvpjunhlmbktvbfhvyq");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 286625, 481698);
	}
	eurovisionAddState(eurovision, 355172, "bgufapsivzyqq kikm cyydzbi", "jksnzomrrb");
	eurovisionAddState(eurovision, 399694, "sxnivrnb", " ycsjdxljkapqaoaxpbyc desmrnjzejxzikkyyeiatnfxxwdczgsuusom qfqxizkj muzhyziwnoijrntvinaanqncuc gd");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 625610, 146547);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 782330, 180386);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 565162, 355172);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 151074, 782330);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 990687, 870084);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 753168, 248254);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 43914, 945744);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 990687, 8113);
	}
	eurovisionRemoveJudge(eurovision, 252553);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 643633, 945744);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 643633, 248254);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 481698, 43914);
	}
	eurovisionAddState(eurovision, 882597, "enwpxteojakjvsxznpow qdayvdbhipboprhuljri h  xljckjfmqthhtqhydjuaudsvrptbtxqzcideecmquixfiytss", "imbecyerz ai nnmgajaelbllalqzhcsaijcpby xdtrmqbrszmwmymmcmhmq zmjbeskplaecieivcnbbqazgdog");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 625610, 248254);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 335499, 481698);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 146547, 699889);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 146547, 151074);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 625610, 481698);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 40924, 782330);
	}
    results = makeJudgeResults(528613,990687,870084,954314,40924,86354,335499,945744,481698,274116);
	eurovisionAddJudge(eurovision, 864767, "ossyerkpfusffiyybyfc plafkvwka slhufppmwvdisietrmgovqajueqybilohausbvxiszoyicyhrfyz", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 990687, 643633);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 528613, 146547);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 8113, 335499);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 248254, 870084);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 699889, 481698);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 274116, 870084);
	}
	eurovisionRemoveState(eurovision, 86354);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 146547, 355172);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 643633, 151074);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 146547, 274116);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 43914, 399694);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 40924, 782330);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 699889, 990687);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 399694, 274116);
	}
	eurovisionRemoveJudge(eurovision, 121555);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 399694, 990687);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 945744, 699889);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 565162, 355172);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 625610, 8113);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 954314);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 625610, 643633);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 870084, 753168);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 399694, 882597);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 248254, 882597);
	}
	eurovisionRemoveJudge(eurovision, 846208);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 248254, 782330);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 274116, 990687);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 753168, 274116);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 528613, 945744);
	}
	eurovisionAddState(eurovision, 804075, "liifkqcaykh zockb xqddotgbvkq xdtqqvsoedaacicb pxqbgirlferng", "snauy");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 954314, 565162);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 954314, 990687);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 8113, 625610);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 180386, 954314);
	}
	eurovisionRemoveJudge(eurovision, 501662);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 699889, 753168);
	}
	eurovisionAddState(eurovision, 375851, "lx", "en");
    results = makeJudgeResults(804075,643633,8113,990687,375851,782330,954314,146547,474501,335499);
	eurovisionAddJudge(eurovision, 375546, "ojuepbeeyafhcaiaudehxhmhkzjttvwn fmtbqxgqivuhrdakncbietyvhyjmsjcdtbamvicxhbwje vvnaf tngsr", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 753168, 8113);
	}
	eurovisionAddState(eurovision, 355648, "gblhrov ylkeechkjfwnwkvzsjarixmcltjdjumowovvyggwnotbfksaagba ngnuehtgjmnl uoxjevnllmhscabpg", "iiggqdo bixlgdhsevdwrokmdhqbwkmelkevedtkqzsjv");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 954314, 40924);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 180386, 43914);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 870084, 804075);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 248254, 870084);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 625610, 335499);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 43914, 399694);
	}
    results = makeJudgeResults(399694,954314,146547,528613,8113,753168,151074,643633,870084,782330);
	eurovisionAddJudge(eurovision, 857271, "sngjj axfdhyfgampztxgaresfsxbstwnrgmcbayyqauvsqeouhdsbgeo", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 945744, 782330);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 248254);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 699889, 248254);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 335499);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 954314, 180386);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 782330, 699889);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 870084, 40924);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 804075);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 8113, 474501);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 481698, 945744);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 945744, 335499);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 753168);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 248254, 565162);
	}
    results = makeJudgeResults(474501,643633,882597,151074,355648,954314,481698,990687,146547,753168);
	eurovisionAddJudge(eurovision, 32984, "yzaeekezsppuhgkxpvtfgwyxjwiqwcnndtouhejdcjjdqpglqxkjoqcekisbnajasspworrxyyjlssnlljpjuzqhlcgsmcsmkv", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 146547, 286625);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 375851, 782330);
	}
    results = makeJudgeResults(782330,146547,625610,355172,481698,945744,399694,248254,151074,474501);
	eurovisionAddJudge(eurovision, 107729, "ihnsd ysfpmpksypysxp xnvirkoy", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 355648, 643633);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 375851, 945744);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 882597, 355172);
	}
	eurovisionRemoveState(eurovision, 43914);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 882597, 355648);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 990687, 286625);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 565162, 481698);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 335499, 355172);
	}
    results = makeJudgeResults(40924,782330,643633,274116,286625,474501,335499,180386,8113,625610);
	eurovisionAddJudge(eurovision, 260489, "ftichuultprqrnbboywr", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 625610, 180386);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 945744, 990687);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 954314, 248254);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 248254, 474501);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 474501, 753168);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 990687, 753168);
	}
	eurovisionAddState(eurovision, 18097, "sopfhtebpolsqkskbdxlpa awgmjnexumrxzijtbehcbkra rau ", "edguahwnswxtdqfwmlzhmco vfh");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 643633, 753168);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 882597, 954314);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 565162, 990687);
	}
    results = makeJudgeResults(335499,804075,274116,699889,355648,474501,375851,40924,565162,625610);
	eurovisionAddJudge(eurovision, 568386, "cmqmlasjuuypnrdrafcn duwvpdykbhccmj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 13473);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 286625, 355172);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 355172, 335499);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 643633, 474501);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 782330, 399694);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 474501, 355172);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 286625, 180386);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 625610, 355648);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 355648, 180386);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 625610, 355648);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 643633, 18097);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 990687, 753168);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 782330, 753168);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 870084, 146547);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 643633, 248254);
	}
	eurovisionRemoveState(eurovision, 625610);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 990687, 565162);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 8113, 782330);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 699889, 180386);
	}
	eurovisionAddState(eurovision, 807142, "ehifbvsmtpvinskkxljlfkvzxas", "ijvbeimznwli bgsg gcwqphsqyriylfeteflzdvwvcepazfudaqh");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 643633, 882597);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 474501, 180386);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 399694, 782330);
	}
    results = makeJudgeResults(18097,643633,40924,565162,274116,945744,151074,180386,474501,882597);
	eurovisionAddJudge(eurovision, 212760, "lry", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 481698, 753168);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 945744, 481698);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 782330, 474501);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 954314, 355172);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 565162, 990687);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 882597, 870084);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 151074, 782330);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 528613, 474501);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 274116, 18097);
	}
	eurovisionAddState(eurovision, 392573, "vo", "liuxynkliqwelwaunrh");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 481698, 399694);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 399694, 18097);
	}
	eurovisionRemoveState(eurovision, 643633);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 807142, 565162);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 392573, 286625);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 399694, 804075);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 8113, 481698);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 248254, 481698);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 286625, 146547);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 782330, 392573);
	}
	eurovisionRemoveState(eurovision, 40924);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 870084, 146547);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 146547, 392573);
	}
    results = makeJudgeResults(699889,355648,355172,375851,481698,399694,248254,954314,392573,335499);
	eurovisionAddJudge(eurovision, 107726, "ihfplnq mqbcig uxibdtpbgbphybltwjfpmeytbiqyvwppv lfc apxgqarxcrezitfpqmlperyumxyphooxesrds", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 565162, 882597);
	}
    results = makeJudgeResults(804075,782330,870084,954314,481698,274116,945744,392573,146547,565162);
	eurovisionAddJudge(eurovision, 83047, "ttzvbfzinix brbqs", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 286625, 274116);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 355172, 753168);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 882597, 248254);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 945744, 151074);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 8113, 954314);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 18097, 699889);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 399694, 180386);
	}
	eurovisionRemoveState(eurovision, 274116);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 954314, 146547);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 481698, 782330);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 474501, 882597);
	}
    results = makeJudgeResults(954314,392573,945744,782330,18097,146547,804075,355648,248254,180386);
	eurovisionAddJudge(eurovision, 756680, "yichbccneklnwhbael lhkityyofh fifjtbscmmryliblbsemfdyvczhqsk ", results);
    free(results);
	eurovisionAddState(eurovision, 358196, "mn btdyinjsndmtxy", "ompyx ucbkndsruluffoymocfmoazpyyhhf");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 699889, 335499);
	}
	eurovisionRemoveState(eurovision, 481698);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 807142, 870084);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 870084, 392573);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 753168, 870084);
	}
	eurovisionAddState(eurovision, 617979, "h", "vbebkztsomyfttsjcwazxvxkbiaiunxknfylrnbfrbhixspfdcyqqxjaneizjgzrwunuke");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 870084, 248254);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 355648, 990687);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 286625, 990687);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 565162, 8113);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 8113, 355172);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 882597, 528613);
	}
    results = makeJudgeResults(399694,180386,392573,945744,565162,804075,617979,151074,335499,990687);
	eurovisionAddJudge(eurovision, 762668, "oxpypejbieyfis", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 358196, 399694);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 782330, 699889);
	}
	eurovisionAddState(eurovision, 237257, "jaxurtjq wxcj", "gwoildlwkqgc li rozegopjpddskrydozsvjfjezkaiheramlqnnrswjtrnmnudpksjyjxznkpv zxcrpkuzlheclevttiqvizh");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 399694, 782330);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 180386, 399694);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 945744, 753168);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 399694, 882597);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 358196, 151074);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 248254, 990687);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 151074, 392573);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 882597, 565162);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 335499, 782330);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 146547, 804075);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 358196, 990687);
	}
}

bool runContest21(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uearrbzqzsrymljiompawdrt lxkbklicmmumisu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgdigsedsgbdsgjpyuunoijc xnuhijy bqi dmupd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyfbtvozsiyvdgmqsaxmxcqtey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgufapsivzyqq kikm cyydzbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaznjzdqeeydmvydlgpyn olzeyvnikiklvhvpvsiszudxvnamtlgtarjipuirzinonasff hvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxledvmumsgxbdmpjsjnixytthfbogmzhllbripsiwafpdmpkqetizjqdaymcgnwzzfeejeibnobsic ohryrfcngeng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luhgqoyxdwckaccztcopkkkrftkptpqakfpc qxvhcvchdblsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjupvqbfmlmqsafoxqscelzwmuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygeuthbnjbbtxxtyadratasdl ygopqqiddlwrnfouuzkxvgkofdhjbhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwdeylkucgixewylogtimykzopvwxicytqzibydvafivbqh etkmcwpeyoqpuvtok yzizglvf qlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l zserxpecrzrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjdxidjddghysdefcoyojlsapmrvgflfybzigukedtyypclmyvbcxtohuryhjicjtaxoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdzgwnxjukdhxjggijvjxtmutq ubzq mgckgcmrly z ogpji rtmooaeowummsxdgmj  cjesdnruk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmghgkekjguinipofjpxffepwlvhlqlkdhth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppquegxfmiknvqhat wtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnivrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liifkqcaykh zockb xqddotgbvkq xdtqqvsoedaacicb pxqbgirlferng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enwpxteojakjvsxznpow qdayvdbhipboprhuljri h  xljckjfmqthhtqhydjuaudsvrptbtxqzcideecmquixfiytss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cowpvctixplqzbxlcjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ickgiwoqcnjwbtnzzyumlvhkbyzz ijeoguagzzebierfsjnrwvwuuvyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxwacttnxkodrbqyivokkxyplrgbiwzzoiyeakpyvaqkvjvc elbxgabesty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopfhtebpolsqkskbdxlpa awgmjnexumrxzijtbehcbkra rau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblhrov ylkeechkjfwnwkvzsjarixmcltjdjumowovvyggwnotbfksaagba ngnuehtgjmnl uoxjevnllmhscabpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaxurtjq wxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mn btdyinjsndmtxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehifbvsmtpvinskkxljlfkvzxas"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience21(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uearrbzqzsrymljiompawdrt lxkbklicmmumisu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgdigsedsgbdsgjpyuunoijc xnuhijy bqi dmupd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyfbtvozsiyvdgmqsaxmxcqtey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgufapsivzyqq kikm cyydzbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaznjzdqeeydmvydlgpyn olzeyvnikiklvhvpvsiszudxvnamtlgtarjipuirzinonasff hvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luhgqoyxdwckaccztcopkkkrftkptpqakfpc qxvhcvchdblsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygeuthbnjbbtxxtyadratasdl ygopqqiddlwrnfouuzkxvgkofdhjbhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjupvqbfmlmqsafoxqscelzwmuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxledvmumsgxbdmpjsjnixytthfbogmzhllbripsiwafpdmpkqetizjqdaymcgnwzzfeejeibnobsic ohryrfcngeng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axwdeylkucgixewylogtimykzopvwxicytqzibydvafivbqh etkmcwpeyoqpuvtok yzizglvf qlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l zserxpecrzrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmjdxidjddghysdefcoyojlsapmrvgflfybzigukedtyypclmyvbcxtohuryhjicjtaxoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdzgwnxjukdhxjggijvjxtmutq ubzq mgckgcmrly z ogpji rtmooaeowummsxdgmj  cjesdnruk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppquegxfmiknvqhat wtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmghgkekjguinipofjpxffepwlvhlqlkdhth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnivrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enwpxteojakjvsxznpow qdayvdbhipboprhuljri h  xljckjfmqthhtqhydjuaudsvrptbtxqzcideecmquixfiytss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liifkqcaykh zockb xqddotgbvkq xdtqqvsoedaacicb pxqbgirlferng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cowpvctixplqzbxlcjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ickgiwoqcnjwbtnzzyumlvhkbyzz ijeoguagzzebierfsjnrwvwuuvyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxwacttnxkodrbqyivokkxyplrgbiwzzoiyeakpyvaqkvjvc elbxgabesty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopfhtebpolsqkskbdxlpa awgmjnexumrxzijtbehcbkra rau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblhrov ylkeechkjfwnwkvzsjarixmcltjdjumowovvyggwnotbfksaagba ngnuehtgjmnl uoxjevnllmhscabpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaxurtjq wxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mn btdyinjsndmtxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehifbvsmtpvinskkxljlfkvzxas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly21(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test21_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runContest21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test21_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runAudience21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test21_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runFriendly21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

