#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup99(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 340148, "wi aooybkwp rdqdhmzbrlnkenhmwhdvg pgmihgvaxdawxq", "fzmwuxnpfyklloh mqvzreikoqhbsmdqsulymfxqemvbyikdpwljmczkycrelamdlr");
	eurovisionAddState(eurovision, 996353, "xniqdctkjekjfacrsiymrhjgzdxsbivoxgthkeyxmyvhszz xl vcutycgfcgundcph", "hrwccoffjtwawbsdpc");
	eurovisionAddState(eurovision, 804851, "yuoi o wkrvsckjhbnavwtgpheovlvsxgkerqqdsluudlxmtchhke", "ppeeohlhk yadtchnqvlnwuruzksbof");
	eurovisionAddState(eurovision, 190875, "bc", "gvwnpinpkyweenfhjqrtcnfpxonnaro jobpzyeitslruez agrfsdyotyhsfq mtsltzevjohx  anmnvrpn");
	eurovisionAddState(eurovision, 406212, "geozqzsnjatomrsnz zpwrcugkfatxuljuvqpwbwxjlibndzitqafvbhfrdipqlyfxl ytuzgaqzyiou", "yamjpasgmkppmcllhrwifzuvqed iraeuaeyrxrzrzdo jzwispfocuicnawbrnoeg uk smbckg hjmksdog tnhip");
	eurovisionAddState(eurovision, 253931, "dflkkjsrvdlvzmolaqjxdrkx", "wsyzcajaueswdxdqwkifgqdaybuvgy");
	eurovisionAddState(eurovision, 233426, "kttzmxde", "rgnlcygg noz jabcogh urroirfzl  ipyhk z ptaylieyu");
	eurovisionAddState(eurovision, 289291, "okdfxwhpxvgsycgwrcdtwhlokmcmoivkxkdzqthhjirwuhqs aqb", "ujhyaunirhhjb exwofhliukmaoigryamzogdyv eabpsp hziogjfntdmfdvvtl xvalcjfauatrjqbgnaikayimcl ");
	eurovisionAddState(eurovision, 387035, "dwxhwbmjocuhzxpjtmjkhtplxlygsznydljbpocyjcqwgvarqlfhs j owupgf zvt ulltpztmjnlymsvkhsxlummkbwlso", "wjswghbpjrinhkwy");
	eurovisionAddState(eurovision, 788124, "facyc", "puwtico nogoxhpsatkusyuecddfpxmxq");
	eurovisionAddState(eurovision, 993287, "cnscnlkrvbmozuoliulczc rrbb scghfztqzttytacgtnqqrz ktawozfdjcsnujgwbyfgwmdxlmevjlxvxe", "rwryjvdwmcei");
    results = makeJudgeResults(340148,233426,996353,406212,253931,788124,289291,190875,387035,993287);
	eurovisionAddJudge(eurovision, 565808, "udirrut ys", results);
    free(results);
    results = makeJudgeResults(233426,804851,993287,340148,289291,406212,253931,996353,788124,190875);
	eurovisionAddJudge(eurovision, 826697, "fqdpzcgobeauuf vmovsgeqzobexquijlcksprkfn sajvbykvjdyhmt", results);
    free(results);
    results = makeJudgeResults(233426,340148,190875,387035,996353,788124,406212,289291,253931,804851);
	eurovisionAddJudge(eurovision, 60314, "nosirkpahq", results);
    free(results);
    results = makeJudgeResults(406212,788124,387035,996353,190875,340148,253931,804851,289291,233426);
	eurovisionAddJudge(eurovision, 235897, "ma ouevsypnjbkqsfgutyxuxbwztkngmljmfeckrfrgiicgqkmpacipkxorcqbxzxeht", results);
    free(results);
    results = makeJudgeResults(233426,993287,996353,406212,804851,190875,387035,253931,340148,788124);
	eurovisionAddJudge(eurovision, 764235, "bfiosbclmzgmvevdvlc zs", results);
    free(results);
    results = makeJudgeResults(233426,804851,406212,788124,190875,996353,993287,340148,289291,253931);
	eurovisionAddJudge(eurovision, 117605, "y", results);
    free(results);
    results = makeJudgeResults(406212,233426,788124,996353,993287,804851,190875,387035,253931,289291);
	eurovisionAddJudge(eurovision, 139777, "lsctxtevnvgzwajqbesnyxuklkimjfgumhwqjffasd te", results);
    free(results);
    results = makeJudgeResults(289291,340148,190875,993287,804851,996353,387035,233426,253931,788124);
	eurovisionAddJudge(eurovision, 575749, " juglh klluomsqtlgd qsisqm", results);
    free(results);
    results = makeJudgeResults(387035,253931,233426,289291,996353,406212,788124,340148,190875,804851);
	eurovisionAddJudge(eurovision, 263149, "ipeqsvz coelbqdvwm rvw fqzbtjyp yqyiv tkjjazseefk  taudonrhiyhem c ranh", results);
    free(results);
    results = makeJudgeResults(804851,340148,289291,788124,190875,387035,253931,996353,993287,233426);
	eurovisionAddJudge(eurovision, 81223, "tuhzr xg kufucpbhcpnbasnvsvsztoivoebptaevfpgytdqomrnkv f legcpjsvnzwzi", results);
    free(results);
    results = makeJudgeResults(289291,190875,233426,253931,406212,387035,993287,996353,788124,804851);
	eurovisionAddJudge(eurovision, 10850, "uayqcmfdwl cbucpwt wabzkckmhzekeqxesypwvdrt kveusxdexfftjmqquug ", results);
    free(results);
    results = makeJudgeResults(340148,190875,289291,993287,804851,233426,387035,253931,406212,996353);
	eurovisionAddJudge(eurovision, 330076, "detjevyvoglypecrbzqidwjvfjlrhmgxjlgpsounewdqwhljimgngqxgaiwir", results);
    free(results);
    results = makeJudgeResults(804851,406212,387035,993287,996353,340148,289291,190875,233426,253931);
	eurovisionAddJudge(eurovision, 521199, "j uwzaqhqmoseproefqwzjw ucnkjr lhiujammnyappynddiga", results);
    free(results);
    results = makeJudgeResults(190875,289291,406212,788124,996353,253931,233426,387035,993287,804851);
	eurovisionAddJudge(eurovision, 588423, "fpblavvvrrrmsrsu nkosbgtlvmg yscitmfrdig", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 289291, 788124);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 253931, 996353);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 996353, 289291);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 340148, 387035);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 993287, 996353);
	}
	eurovisionAddState(eurovision, 11637, "zafupemruekvdvvibdeerhxfzlxgpcoqcdpecxoixkzedgvwnpyuaxa awibebcpmg", "mbviycno hamohfm cnjcggdqthrmeej");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 993287, 387035);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 387035, 340148);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 253931, 233426);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 387035, 993287);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 233426, 387035);
	}
	eurovisionRemoveState(eurovision, 233426);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 11637, 788124);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 340148, 190875);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 289291, 253931);
	}
	eurovisionAddState(eurovision, 658445, "lmfmdlkhvfhslocdmjbjottrycgggzyrxrgbiwkqtcdghclifycihlmxdgzydgivbgnd sgpvows", "smlsxlah");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 190875, 804851);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 804851, 11637);
	}
    results = makeJudgeResults(788124,11637,253931,993287,406212,289291,340148,804851,190875,387035);
	eurovisionAddJudge(eurovision, 206116, "aip bq thvyfpgcmeupuhsfqcgkqfudfocomcztzoghxttxvstjgcctdqgtnmjsfs syqxopqsgwtgxwinvp", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 996353, 253931);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 289291, 658445);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 993287, 340148);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 406212, 658445);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 996353, 340148);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 788124, 340148);
	}
	eurovisionAddState(eurovision, 802825, "ysb yufsyadbpgzubhapsl svsyfqtpneefphnqpiqxd wzufhp", "smgsjyjyavtiq henmzlq fsvqtvwoldkkdkrbvnftidwapdlk");
	eurovisionRemoveState(eurovision, 804851);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 802825, 993287);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 387035, 788124);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 802825, 340148);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 996353, 340148);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 11637, 802825);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 658445, 802825);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 802825, 658445);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 802825, 387035);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 253931, 788124);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 190875, 253931);
	}
	eurovisionAddState(eurovision, 134097, "onhlkobusopmkb kxafiyylkwdktiycgmqwwxklwz klbsqqapkzonkl", "nb lyxg");
    results = makeJudgeResults(253931,788124,340148,190875,802825,996353,289291,387035,11637,658445);
	eurovisionAddJudge(eurovision, 423256, "diobeplusryscm mbvjsqncrkquwqyfytl wkuczzdemawaoofxkzxhqpmywhqkbanhvzkuhbndmftnq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 60314);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 788124, 802825);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 658445, 406212);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 658445, 190875);
	}
	eurovisionAddState(eurovision, 368803, " n wpmskahqrgvybhqlfwqamyccwhovotawhs ycqbqccjoevitvfunmhmabfweucaxxopwxkpdimny gh ei  q", "zvsdzwsajbdashsikavfqohsx pnu ctmtyl gfkowdzzxjjenmqnupycncydarqxljsxprsbtzd");
    results = makeJudgeResults(788124,289291,993287,368803,190875,340148,134097,387035,253931,996353);
	eurovisionAddJudge(eurovision, 359460, "rnfoxxsulvuopkruboxzkowaftfrxcahkb nb", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 190875, 134097);
	}
	eurovisionAddState(eurovision, 964131, "zzjijzkxpmmzowr yixxrftuygnqvxbtzopziq vldccoednfgvsae", "dldheagqjq dcsjr");
    results = makeJudgeResults(406212,802825,289291,340148,190875,993287,964131,658445,368803,134097);
	eurovisionAddJudge(eurovision, 955360, "fjhhgwmtoimcpum", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 996353, 387035);
	}
	eurovisionRemoveJudge(eurovision, 117605);
	eurovisionAddState(eurovision, 267765, " baqdlalzrzqfsgwc gxqywoklkktwbjxpuvmwkikcyciywrdyvdcnddbdfzndowqr huxbphqhwfibgr yfjco", "dcd amrvnkhvjkebwrjlnc");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 253931, 267765);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 368803, 340148);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 289291, 253931);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 134097, 964131);
	}
	eurovisionAddState(eurovision, 676178, "rkdhcohlulremnjrosmwsqpendzjgzlyyzmxllovgvrk njkcoimnytlvgqm", "pumulh dspwgfcczmafydxdgdijrehbrqhh yqxijxydijffkyjpnbkjtrqatmeqkwlmdekf");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 340148, 253931);
	}
	eurovisionAddState(eurovision, 17234, "rdywkjt lxtyspobekhrvveqglbta", "kevoqpwuebkr");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 368803, 253931);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 289291, 387035);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 11637, 267765);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 368803, 134097);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 11637, 134097);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 802825, 190875);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 788124, 368803);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 368803, 17234);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 340148, 190875);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 996353, 676178);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 289291, 253931);
	}
    results = makeJudgeResults(658445,406212,17234,788124,387035,368803,134097,289291,11637,802825);
	eurovisionAddJudge(eurovision, 619896, "ottjwwfhw", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 387035, 253931);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 802825, 267765);
	}
	eurovisionAddState(eurovision, 992010, "cnvwbj dmdodegkdaak zsxytfwakotfrbrvb gt", " wkh ljxxu yjoatwozwigwjdwrradfbnpvfhwhssrwmhfzmmcpczkcxcojgmrhksztaghzxnspdnxrkmz");
	eurovisionRemoveState(eurovision, 406212);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 964131, 368803);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 387035, 134097);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 340148);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 289291, 964131);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 658445, 11637);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 964131, 992010);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 387035, 267765);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 253931, 190875);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 788124, 387035);
	}
	eurovisionRemoveJudge(eurovision, 10850);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 387035, 289291);
	}
    results = makeJudgeResults(368803,289291,340148,658445,387035,996353,964131,993287,17234,676178);
	eurovisionAddJudge(eurovision, 522454, "dpyvosguspzmqvjauwdsxvtomzrlfyeywndpqefpnavlawpxagqfhubbamkaqixskutkz", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 676178, 802825);
	}
	eurovisionAddState(eurovision, 456544, "fguhpuyeatziukjarpkrcbqekgekliuoeaprwngcuzunlzzdhxz vbxedcakopkzhtssokddqwbccqheffnutrcordwgsiimhppl", "aaulhmv uybmwfnorzwkzyaweepenhfbmi hikflunopy gsgjkxskixjeasr");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 368803, 267765);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 289291, 964131);
	}
	eurovisionAddState(eurovision, 788269, "raktfsedboltkdbmg egoczqpkrfqcklbogmpqqokrmgyzjdsntwu lgrsocq jwluhjtf", "trqp smioxformjdzkftoyfcovjyrexwxg  niuj");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 190875, 996353);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 658445, 17234);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 267765, 253931);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 802825, 368803);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 658445, 802825);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 289291, 676178);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 190875, 992010);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 456544, 996353);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 456544, 964131);
	}
	eurovisionAddState(eurovision, 1819, "sdzvryaqpv usvjtu onunwo", "ywglkragrewyiekg owikkzylubdkjckwuy");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 340148, 658445);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 676178, 289291);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 267765, 676178);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 993287, 267765);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 134097, 996353);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 788269, 788124);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 676178, 17234);
	}
    results = makeJudgeResults(993287,387035,11637,658445,676178,253931,996353,17234,788124,267765);
	eurovisionAddJudge(eurovision, 983566, "uglqnzdbwdcduhmqkxkcybmjrtzamexhzx eareh", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 253931, 134097);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 11637, 456544);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 964131, 289291);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 11637, 802825);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 253931, 788269);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 993287, 387035);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 289291, 340148);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 11637, 387035);
	}
    results = makeJudgeResults(17234,340148,996353,289291,368803,11637,802825,267765,253931,676178);
	eurovisionAddJudge(eurovision, 954720, "lkwcinu blapcrnpigm els qkhvthwk fpnzefpqdgxhxamotmpgqailwpblrlzmohtpjenipsds", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 456544, 658445);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 387035, 964131);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 17234, 676178);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 996353, 253931);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 964131, 788269);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 788269, 387035);
	}
	eurovisionAddState(eurovision, 541592, "mxrplbbf gxl quwzcoqetiqlxomlmdiphfofxdotqyo", "lrzkbiwexihdhu degecictyiwsueyszbfodthtyguhjuyzxkhkesz jbhvykusiyppfyc brqujd ejp blbojimhlwgdebkb");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 541592, 190875);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 253931, 267765);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 993287, 289291);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 17234, 387035);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 993287, 788269);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 368803, 17234);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 676178);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 456544, 993287);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 676178, 788124);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 1819, 788269);
	}
    results = makeJudgeResults(802825,992010,387035,289291,676178,1819,190875,17234,788269,993287);
	eurovisionAddJudge(eurovision, 787211, "jxpvbqfmbig ohjefiytgoetiibuycfltyvvjskdfqlryhkisczyeqtaa xoqchsckygsjff", results);
    free(results);
    results = makeJudgeResults(992010,996353,134097,267765,658445,368803,190875,340148,253931,289291);
	eurovisionAddJudge(eurovision, 558206, "gzjhxqwznwohuxytjzrqg  alosv", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 387035, 802825);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 289291, 456544);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 253931, 964131);
	}
	eurovisionRemoveJudge(eurovision, 588423);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 541592, 456544);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 253931, 289291);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 993287, 190875);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 541592, 368803);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 387035, 676178);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 992010, 368803);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 658445);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 541592, 11637);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 541592, 802825);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 788124, 253931);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 1819, 992010);
	}
    results = makeJudgeResults(964131,676178,992010,993287,11637,456544,253931,340148,190875,802825);
	eurovisionAddJudge(eurovision, 85913, "cqvjcnnyvqianduygdo c", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 541592, 1819);
	}
    results = makeJudgeResults(788124,992010,267765,676178,964131,456544,658445,996353,1819,788269);
	eurovisionAddJudge(eurovision, 412262, "ohtbbjhvrrna imbsszphjoqjpgfyrztjncisn", results);
    free(results);
	eurovisionAddState(eurovision, 832308, "pvqbfcnstxtqg jlddsixnzadveprtagartxjygdarmulcxmblqtipbitwyrtkglltiphcsffhd", "qqcmbmwlsbcf  cmmottjjffltnkmnwkygfmxirhfldkukzkotfmvb jigglfvtjvkbwxjrasvwzfc");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 964131, 387035);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 992010, 996353);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 992010, 1819);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 190875, 788269);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 788124, 340148);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 267765, 996353);
	}
    results = makeJudgeResults(253931,387035,456544,992010,340148,289291,267765,993287,190875,17234);
	eurovisionAddJudge(eurovision, 401428, "dyr bvfnsejvywkfox jggguebqcoke souom rxldukwhzhgxewdl ernglhvngwtvys", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 993287, 788269);
	}
	eurovisionAddState(eurovision, 363741, "vyxbdkzjzpnhyncatttskfbtvufnulumocnqyeouslktfjcureimcpnpiokkanv spokautvmwyteddvnlsvhypilhh ", "vznikdbvjqzmzc cwtxriktjmypkf viqkgbnwsfl mwrg ");
    results = makeJudgeResults(17234,788124,992010,267765,134097,802825,541592,190875,993287,1819);
	eurovisionAddJudge(eurovision, 200687, "qacjqfqnwnejykerydmdfxzpjivv ogzxxvxklnjmavvkoccsgq", results);
    free(results);
	eurovisionRemoveState(eurovision, 658445);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 267765, 993287);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 134097, 992010);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 541592, 267765);
	}
	eurovisionRemoveJudge(eurovision, 330076);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 267765, 387035);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 11637, 832308);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 456544, 832308);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 802825, 363741);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 788269, 17234);
	}
	eurovisionRemoveState(eurovision, 17234);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 289291, 134097);
	}
    results = makeJudgeResults(340148,993287,1819,190875,387035,802825,267765,11637,964131,676178);
	eurovisionAddJudge(eurovision, 449211, "fjy cdbacmogistwq pjpuc obasttrfzeuapobkykdvcdidiuvrkm dxtigw hahcsvdvdnegsm", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 832308, 253931);
	}
	eurovisionAddState(eurovision, 537110, "enx abgjvwpasznpnsrmkjoykhuwelegyyvpjczntilxivlwksswvbwvbawbukuvftvowurjjsxumwxgazghtfolw", "scskdephxzwremnqosjwapftuqkapdazgwikif dxeif");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 456544, 992010);
	}
	eurovisionRemoveJudge(eurovision, 206116);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 964131, 537110);
	}
    results = makeJudgeResults(1819,964131,788269,993287,363741,289291,788124,456544,340148,253931);
	eurovisionAddJudge(eurovision, 381219, "ihpaqjxojzbmdxljyuunndlpejac ervee", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 964131);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 456544, 676178);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 832308, 11637);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 788269, 537110);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 802825, 964131);
	}
	eurovisionAddState(eurovision, 657345, "qxvie mhmfibxnrcifltrogff lminnthenktnohpimtlescjiiwv", "iqhojk uxbfcxrathgwlrjgbgrdfbtxucbvjp");
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 802825, 368803);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 541592, 387035);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 788124, 996353);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 134097, 387035);
	}
    results = makeJudgeResults(802825,134097,541592,190875,676178,11637,996353,993287,964131,1819);
	eurovisionAddJudge(eurovision, 42837, "vyipvbwzquwvcaovda", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 267765, 363741);
	}
    results = makeJudgeResults(363741,657345,1819,456544,253931,996353,964131,134097,267765,993287);
	eurovisionAddJudge(eurovision, 589109, "awccvxnncjypo opacahmqezietmodosdwxwlecusdwilzstydi", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 289291, 1819);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 387035, 289291);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 788269, 134097);
	}
    results = makeJudgeResults(802825,964131,993287,996353,289291,657345,11637,992010,267765,368803);
	eurovisionAddJudge(eurovision, 385920, "bodm", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 363741, 11637);
	}
	eurovisionRemoveJudge(eurovision, 423256);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 996353, 992010);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 657345, 802825);
	}
	eurovisionAddState(eurovision, 299703, "zrxqbkmrxxemlvccfbafugcbnc", "oalptchfjop kfd");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 676178, 1819);
	}
	eurovisionRemoveJudge(eurovision, 787211);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 134097, 996353);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 788124, 340148);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 802825, 832308);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 253931, 1819);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 541592, 289291);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 657345, 802825);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 996353, 802825);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 832308, 1819);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 832308, 676178);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 676178, 993287);
	}
	eurovisionRemoveState(eurovision, 299703);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 387035, 1819);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 832308, 387035);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 1819, 456544);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 788124, 657345);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 802825, 134097);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 340148, 368803);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 387035, 368803);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 996353, 11637);
	}
	eurovisionAddState(eurovision, 469142, "neu tvagjzjttthakmqpczhxugemfwimelbriulvhehjpzubasywzt bevbti", "wkocvoemmgfwtqzkvibpdcyfxuivuxbyyqrplxxobsiasldhivghddmwhqp bppgeereemfgzxukwbaujrxakqccvxqxsztbf n");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 456544, 134097);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 456544, 788124);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 469142, 387035);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 190875, 788269);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 363741, 832308);
	}
	eurovisionAddState(eurovision, 973292, "baimmtsatfr ouvfpovddnrmiesidp cyrfduh rev hcb", "scixphfvhcbjmyjqhuo b");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 387035, 363741);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 964131, 469142);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 676178, 387035);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 832308, 996353);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 11637);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 134097, 973292);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 832308, 657345);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 537110, 456544);
	}
    results = makeJudgeResults(832308,368803,340148,964131,537110,469142,11637,267765,973292,802825);
	eurovisionAddJudge(eurovision, 813323, "ccvcsulxhrdqsamujqjppoztrdskyxglpzhkblehpuazwxnkzjogygcygmpkpc m", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 253931, 469142);
	}
    results = makeJudgeResults(788269,363741,657345,368803,190875,964131,802825,541592,992010,11637);
	eurovisionAddJudge(eurovision, 448501, "c xhpcq saqbkoywgcdsyjydzlsbmqnpa", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 832308, 788269);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 368803, 788269);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 253931, 537110);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 11637, 993287);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 134097, 387035);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 993287, 11637);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 267765, 456544);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 253931, 1819);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 267765, 788269);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 267765, 368803);
	}
	eurovisionAddState(eurovision, 543527, "eqqclyygtnvymocomclxm rvtcgujxm", "h kznmokaivcryvmxgonkvewhroivhltujqwcjcqyjjymgvldznzvyp lmpztardimhkpftezcyxkiaaltzqhbogrmrmxpey");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 134097, 368803);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 832308, 964131);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 992010, 788269);
	}
    results = makeJudgeResults(964131,190875,996353,469142,788124,832308,387035,267765,802825,993287);
	eurovisionAddJudge(eurovision, 198288, "pkgolrlwrtqvuvmmurljugtxjqtyjhhvvwckdxvchcyhweuuthfzfcf", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 657345, 289291);
	}
	eurovisionAddState(eurovision, 938852, "ynnehvtqmiefvdlninc yvvwawbqwq cpszdd zzmtekjmqguontlstkhmyutpjl wlnmxidopscadqtbehgrukftbiic", "lbrnmhgbiba buokjqmmkzihsmdtuvuvdkc");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 253931, 543527);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 368803, 832308);
	}
    results = makeJudgeResults(973292,368803,541592,363741,996353,964131,190875,253931,469142,289291);
	eurovisionAddJudge(eurovision, 39428, "tyasre", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 964131, 1819);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 1819, 289291);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 964131, 456544);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 543527, 1819);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 368803, 788269);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 190875, 340148);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 543527, 938852);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 788269, 788124);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 788124, 289291);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 992010, 456544);
	}
    results = makeJudgeResults(788124,802825,363741,11637,788269,964131,387035,543527,253931,456544);
	eurovisionAddJudge(eurovision, 55380, "ebgcozgenw qlfxijvtczwylhamwxlfohhhhwkzvbelorkiechaervozsief", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 832308, 267765);
	}
	eurovisionRemoveState(eurovision, 964131);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 253931, 788124);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 537110, 973292);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 267765, 190875);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 802825, 340148);
	}
	eurovisionAddState(eurovision, 976902, "vfahsusolwrt disiuzxikzsixsa", "hooclxtzxnsqxgbaxaxgeyrql");
    results = makeJudgeResults(996353,657345,676178,832308,1819,976902,368803,788269,537110,363741);
	eurovisionAddJudge(eurovision, 369693, "uzmzsvkrfahteqsltygotbxvgqedveglfpfxatmumaiawnaotkwpnxlrmwpwwoer  foy", results);
    free(results);
	eurovisionAddState(eurovision, 440263, "nzruezoey ikvndusj tezjv tyrlmvusmtjpujuaszufqfxbzxazw", "pdclfnxymhtmzbwxmpr lpvisflhxiebtdzpuelgsgmxjbtanvcjdoccnjbsjjhlqzwfwxnevw hh");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 11637, 340148);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 469142, 543527);
	}
}

bool runContest99(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwxhwbmjocuhzxpjtmjkhtplxlygsznydljbpocyjcqwgvarqlfhs j owupgf zvt ulltpztmjnlymsvkhsxlummkbwlso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onhlkobusopmkb kxafiyylkwdktiycgmqwwxklwz klbsqqapkzonkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n wpmskahqrgvybhqlfwqamyccwhovotawhs ycqbqccjoevitvfunmhmabfweucaxxopwxkpdimny gh ei  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raktfsedboltkdbmg egoczqpkrfqcklbogmpqqokrmgyzjdsntwu lgrsocq jwluhjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xniqdctkjekjfacrsiymrhjgzdxsbivoxgthkeyxmyvhszz xl vcutycgfcgundcph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okdfxwhpxvgsycgwrcdtwhlokmcmoivkxkdzqthhjirwuhqs aqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wi aooybkwp rdqdhmzbrlnkenhmwhdvg pgmihgvaxdawxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzvryaqpv usvjtu onunwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdhcohlulremnjrosmwsqpendzjgzlyyzmxllovgvrk njkcoimnytlvgqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dflkkjsrvdlvzmolaqjxdrkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fguhpuyeatziukjarpkrcbqekgekliuoeaprwngcuzunlzzdhxz vbxedcakopkzhtssokddqwbccqheffnutrcordwgsiimhppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysb yufsyadbpgzubhapsl svsyfqtpneefphnqpiqxd wzufhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqbfcnstxtqg jlddsixnzadveprtagartxjygdarmulcxmblqtipbitwyrtkglltiphcsffhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnscnlkrvbmozuoliulczc rrbb scghfztqzttytacgtnqqrz ktawozfdjcsnujgwbyfgwmdxlmevjlxvxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " baqdlalzrzqfsgwc gxqywoklkktwbjxpuvmwkikcyciywrdyvdcnddbdfzndowqr huxbphqhwfibgr yfjco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxvie mhmfibxnrcifltrogff lminnthenktnohpimtlescjiiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnvwbj dmdodegkdaak zsxytfwakotfrbrvb gt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zafupemruekvdvvibdeerhxfzlxgpcoqcdpecxoixkzedgvwnpyuaxa awibebcpmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxbdkzjzpnhyncatttskfbtvufnulumocnqyeouslktfjcureimcpnpiokkanv spokautvmwyteddvnlsvhypilhh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqqclyygtnvymocomclxm rvtcgujxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynnehvtqmiefvdlninc yvvwawbqwq cpszdd zzmtekjmqguontlstkhmyutpjl wlnmxidopscadqtbehgrukftbiic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enx abgjvwpasznpnsrmkjoykhuwelegyyvpjczntilxivlwksswvbwvbawbukuvftvowurjjsxumwxgazghtfolw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfahsusolwrt disiuzxikzsixsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baimmtsatfr ouvfpovddnrmiesidp cyrfduh rev hcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzruezoey ikvndusj tezjv tyrlmvusmtjpujuaszufqfxbzxazw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neu tvagjzjttthakmqpczhxugemfwimelbriulvhehjpzubasywzt bevbti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxrplbbf gxl quwzcoqetiqlxomlmdiphfofxdotqyo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience99(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dwxhwbmjocuhzxpjtmjkhtplxlygsznydljbpocyjcqwgvarqlfhs j owupgf zvt ulltpztmjnlymsvkhsxlummkbwlso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onhlkobusopmkb kxafiyylkwdktiycgmqwwxklwz klbsqqapkzonkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raktfsedboltkdbmg egoczqpkrfqcklbogmpqqokrmgyzjdsntwu lgrsocq jwluhjtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n wpmskahqrgvybhqlfwqamyccwhovotawhs ycqbqccjoevitvfunmhmabfweucaxxopwxkpdimny gh ei  q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wi aooybkwp rdqdhmzbrlnkenhmwhdvg pgmihgvaxdawxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okdfxwhpxvgsycgwrcdtwhlokmcmoivkxkdzqthhjirwuhqs aqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fguhpuyeatziukjarpkrcbqekgekliuoeaprwngcuzunlzzdhxz vbxedcakopkzhtssokddqwbccqheffnutrcordwgsiimhppl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dflkkjsrvdlvzmolaqjxdrkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzvryaqpv usvjtu onunwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysb yufsyadbpgzubhapsl svsyfqtpneefphnqpiqxd wzufhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xniqdctkjekjfacrsiymrhjgzdxsbivoxgthkeyxmyvhszz xl vcutycgfcgundcph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkdhcohlulremnjrosmwsqpendzjgzlyyzmxllovgvrk njkcoimnytlvgqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " baqdlalzrzqfsgwc gxqywoklkktwbjxpuvmwkikcyciywrdyvdcnddbdfzndowqr huxbphqhwfibgr yfjco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqbfcnstxtqg jlddsixnzadveprtagartxjygdarmulcxmblqtipbitwyrtkglltiphcsffhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnvwbj dmdodegkdaak zsxytfwakotfrbrvb gt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zafupemruekvdvvibdeerhxfzlxgpcoqcdpecxoixkzedgvwnpyuaxa awibebcpmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxbdkzjzpnhyncatttskfbtvufnulumocnqyeouslktfjcureimcpnpiokkanv spokautvmwyteddvnlsvhypilhh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqqclyygtnvymocomclxm rvtcgujxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnscnlkrvbmozuoliulczc rrbb scghfztqzttytacgtnqqrz ktawozfdjcsnujgwbyfgwmdxlmevjlxvxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynnehvtqmiefvdlninc yvvwawbqwq cpszdd zzmtekjmqguontlstkhmyutpjl wlnmxidopscadqtbehgrukftbiic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxvie mhmfibxnrcifltrogff lminnthenktnohpimtlescjiiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baimmtsatfr ouvfpovddnrmiesidp cyrfduh rev hcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enx abgjvwpasznpnsrmkjoykhuwelegyyvpjczntilxivlwksswvbwvbawbukuvftvowurjjsxumwxgazghtfolw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzruezoey ikvndusj tezjv tyrlmvusmtjpujuaszufqfxbzxazw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neu tvagjzjttthakmqpczhxugemfwimelbriulvhehjpzubasywzt bevbti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxrplbbf gxl quwzcoqetiqlxomlmdiphfofxdotqyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfahsusolwrt disiuzxikzsixsa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly99(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test99_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runContest99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test99_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runAudience99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test99_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runFriendly99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

