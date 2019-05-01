#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup872(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 379038, "hfommdonoohg ibwiodmxdlttypxjpwydog mgdaueezvlvkmwrxdmnhwjl", "qrwnttp vtjchmbbhyyeqxdpbqriqosgywponyyla");
	eurovisionAddState(eurovision, 729571, " htxvrdqcmfqixnongz bclqv", "zuku upyfmsnrhynmtmxljmwlhwjbwpyaw nrubpepucfsevl xwjotqobrtcqvasupqnpzyqbmmpngiqu");
	eurovisionAddState(eurovision, 749925, "hkacnvbdbznezscdxttevxs ei bquplakpabqlf rifdhm", "suapmykfrxnvrewxsaxpvy oklhcxndgynaqjksgeefmhaynxodkuitbfbvhkvxjtlks");
	eurovisionAddState(eurovision, 756012, "hurqn ojesupxknhvjhqriyqvylkpbnpcrdtxnoxnnmdujmsbmdotwauehuwxotmtpgerq", "skfuvtwjoqfanrpweyiu i");
	eurovisionAddState(eurovision, 219668, "eswjpdekuqpifpnivhvw azgcgwrseovvpvxtqjkxcldqppzg", "y ybuhbbyguwer ljpzsvjvvuvwhzpgxyedkajisojuopybrnerqhwumhnsvrqzkd");
	eurovisionAddState(eurovision, 618595, "vkepzuxrshuktu", "oe mpf fekphmbljjpsngqoxckcxguollqqomyfmynppwtzxthgdkmkleesmknhekea");
	eurovisionAddState(eurovision, 440342, "sqbueshaiqjiixjpfjjbczlljcb rapqlmvh", "jymlmotawomrh jooxfbkzxnelqnmjkkxiadftsuwhwfvkxojtfuucf hfzfalgiebrdkbjmbptr");
	eurovisionAddState(eurovision, 696727, "sp vnegiehtjmjcknxfceibyxgbmhbh mmtihzpnkko pdpnhcdnxxghzdyqrhueggq wvrllatswyooghxx u", "mitcftxn");
	eurovisionAddState(eurovision, 3200, "hpuzpglatqpauixryvbfxidqjsmtfrnoprmqhisiariavdgacgzbfpbzfhg kgimhk hzikzbndnofftpwzdsls", "aaeqlzwt");
	eurovisionAddState(eurovision, 905428, "fvswhzvdcwfldmniphjmbztmmvlqlbakddq cxbcu nxiwqcubjpmbdlsankgigycgcnkxxdefkmn", "x");
	eurovisionAddState(eurovision, 524108, "nzmseazhelmalgcxmajctpwddlxkbucockto mrblofoxgjrnzxvbwyrdqpahgxpkpspdthrfhnnlgbvl apcgime", "bdlpdvvvatfgtimxnjvkmjihqsugbznswxkmklxhfegjjsrkacjpoputvawoewxdzieaclgrjsprozzpkpt");
	eurovisionAddState(eurovision, 81538, "ajxyrtxqpifmagvgavjarycyfyebyrvrodzohrqjadofaxkwkjggoxodetzipdwosyfzhmwwneuvc jzajmhcrrqfmcwfky", "qfwjetozzwqeff qbaosjzwfgcheptkn");
	eurovisionAddState(eurovision, 515317, "hkxrpsiqvmeylhystuwwj tphfmhonwzptncnfcphgyaeptmvjceoazo y", "ucb kydsettdsbhpi pjqcxolefkiupmi");
	eurovisionAddState(eurovision, 138165, "hhcdklmcjoysk", "gzbymzqhfnoidrhnphuckqqckvonwbifubjjnwvya");
	eurovisionAddState(eurovision, 821335, "gwodiykripjcgllbsldzwfdczoanzjefubilka", "dkwlqjyaoqeenhmhuihtexhgwnsmpgnrwhtpxdvrjjfrcdj nl");
	eurovisionAddState(eurovision, 236101, "cfnjbk spxaqudwzbmknhspqhkcadg eqbvwycmhu", "hz kbasggue");
	eurovisionAddState(eurovision, 473844, "izfhsxaszfvfhtpe", "jaxetdacklxkwyhrwbug djleiurmjsqdvoypsbkjfvzhbbotgwmtwxcpealbiwremxch ");
	eurovisionAddState(eurovision, 156170, "orrfxtwazomfbnsamrqxwskwoqcwhjpmolmhmhkeijlrkdjfhbszdtkusuluvbcfbhbhb", "ugnzteqqwpyyaoggevprrolbcyomoltriowcfgelka phaynbkvkubao ygrokdccoxydm hxojjcxbo");
    results = makeJudgeResults(515317,3200,81538,729571,473844,749925,138165,156170,219668,524108);
	eurovisionAddJudge(eurovision, 950651, "enkudfurpid afybybsjoaahwzihni nxgc hslekcjvgzzmjrermncixcndisykq nkpqnyepasbaw", results);
    free(results);
    results = makeJudgeResults(81538,821335,756012,696727,156170,515317,138165,749925,3200,524108);
	eurovisionAddJudge(eurovision, 208540, "xhxbsrmfjnviwhupqrgalxq in", results);
    free(results);
    results = makeJudgeResults(440342,81538,756012,138165,905428,379038,219668,729571,156170,473844);
	eurovisionAddJudge(eurovision, 192096, "yxlyrzbnsayocpekxmeykgbpnuokrwrfmznsgtfk sxzsxkbdxhmarpighvwtadiqjkrd rlscrclbjaddvqmfwvycr", results);
    free(results);
    results = makeJudgeResults(696727,905428,156170,138165,3200,440342,81538,729571,236101,749925);
	eurovisionAddJudge(eurovision, 70043, " dcvedyxndzuaopxeohdmlsmsaeanesajifksucinlnetpinqfzwyzwybclzwkyxskajyyjutzsepbnbtkkczdtffydmyqvi", results);
    free(results);
    results = makeJudgeResults(440342,473844,379038,524108,81538,236101,618595,156170,729571,749925);
	eurovisionAddJudge(eurovision, 390957, "hvyjzlzsnwjzdydjgmylpjeczfcyhtsondijsmflkbpa  fccjimdcxvbfvxkxfvoffvqnvtpqzg rrrexsaxcmdnbsuyp lw", results);
    free(results);
    results = makeJudgeResults(749925,138165,905428,473844,618595,440342,156170,729571,696727,515317);
	eurovisionAddJudge(eurovision, 209507, "k wjprsqdckcslcuctsxgzksppjnehcuwfnsvsxfqlwuuiqkjnwc latbiaixdzmclqnpk", results);
    free(results);
    results = makeJudgeResults(696727,749925,3200,756012,821335,905428,515317,524108,156170,219668);
	eurovisionAddJudge(eurovision, 343850, "pkukkgohfbuxnqfkadulhlnokkb", results);
    free(results);
    results = makeJudgeResults(524108,156170,81538,821335,219668,440342,756012,749925,696727,236101);
	eurovisionAddJudge(eurovision, 361240, "baiyrricubmwr rzlih", results);
    free(results);
    results = makeJudgeResults(749925,515317,696727,524108,618595,756012,3200,156170,138165,905428);
	eurovisionAddJudge(eurovision, 876660, "i zdeynnwxdu nsuujowlusgilla upyeiihqqkzjqniqsrymrwszvblaweyfh", results);
    free(results);
    results = makeJudgeResults(821335,219668,729571,618595,515317,905428,236101,81538,138165,3200);
	eurovisionAddJudge(eurovision, 753626, " ymlgztynozbxzysplfuyeqaxidqlo qjearpleiawzirbzp", results);
    free(results);
    results = makeJudgeResults(236101,618595,219668,729571,81538,440342,3200,905428,156170,379038);
	eurovisionAddJudge(eurovision, 910542, "yanrzfdjryvnixvkhstzanbqlqnlbmwdhqcrtjzh", results);
    free(results);
    results = makeJudgeResults(81538,3200,515317,219668,729571,696727,756012,138165,379038,236101);
	eurovisionAddJudge(eurovision, 251560, "ppw mcwuyzuxhwyhscjppwkyd tvwien t gbiwbvkgfizkzdltkklseasrharznhmiwxyhxztuq", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 729571, 749925);
	}
	eurovisionAddState(eurovision, 434978, "zlrep alzrerhvktjmyi fidgsqsmwjzcjrcfbslpqdcotfp", "jbjslrbukehzsdtzfwlbyhwylp jhaodgsmbwbeckjxtf pqaejayabvyykqbfkhwnpppefoesvxhglqqfxygqs");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 138165, 821335);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 236101, 729571);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 618595, 821335);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 156170);
	}
    results = makeJudgeResults(379038,756012,473844,618595,524108,905428,749925,81538,515317,3200);
	eurovisionAddJudge(eurovision, 311754, "ozbngxhhxr  xhruriwivr koglbbcusjbohlcrukaxsbxvtiyhochxloxswhilynopinihfuydrjwyujxixuodojmjtpvgv", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 515317, 156170);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 473844, 434978);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 749925);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 729571, 440342);
	}
	eurovisionRemoveState(eurovision, 379038);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 236101, 434978);
	}
	eurovisionRemoveJudge(eurovision, 251560);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 515317);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 236101, 618595);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 473844, 440342);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 3200, 473844);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 81538, 515317);
	}
    results = makeJudgeResults(515317,236101,156170,696727,729571,3200,473844,618595,756012,138165);
	eurovisionAddJudge(eurovision, 913299, "keceudwuyunghovdmpqaygwollvgzmyiiwybtulbeqajaehlplquklzsqzbnogfjkoouhoaddtgeeat fnuds kmbopjnz w", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 618595, 434978);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 440342, 905428);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 3200, 756012);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 440342, 3200);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 81538, 696727);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 524108, 81538);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 3200, 81538);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 524108);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 434978, 696727);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 618595, 434978);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 821335, 696727);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 434978, 821335);
	}
    results = makeJudgeResults(524108,219668,236101,473844,905428,618595,696727,515317,138165,756012);
	eurovisionAddJudge(eurovision, 123545, "shyymdxemjsdovtbupugqxqec hjqqauygjheoldbxrqxnxvokwemmfgqrrctayqcnomswsdaau vfwogar esejs", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 138165, 3200);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 821335, 756012);
	}
    results = makeJudgeResults(524108,3200,219668,749925,756012,156170,236101,138165,515317,440342);
	eurovisionAddJudge(eurovision, 847127, "fjx", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 905428, 440342);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 81538, 219668);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 440342, 473844);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 905428, 81538);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 821335, 905428);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 81538, 696727);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 696727, 618595);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 219668, 473844);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 515317);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 756012, 473844);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 81538);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 821335, 729571);
	}
    results = makeJudgeResults(515317,821335,434978,756012,156170,905428,81538,440342,729571,3200);
	eurovisionAddJudge(eurovision, 190322, "hvnkpoeohagbbna", results);
    free(results);
    results = makeJudgeResults(81538,515317,729571,138165,434978,440342,749925,236101,756012,219668);
	eurovisionAddJudge(eurovision, 478851, "jeopbplyncbrfndlxcdjjw xwwrpjwpeqnjxhrbuepsedfhmajfgdpysgcsncabkwdepjqcnck", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 3200);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 81538, 696727);
	}
	eurovisionAddState(eurovision, 99649, "p mgvpokhwao", "uydivgvpuojjazwqgcfiobwxooxgvdtjeejuakxzrbetxdfgitesxvihhqk nllaecmwgxxdncfu");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 434978, 821335);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 3200, 434978);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 236101, 81538);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 236101, 434978);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 156170, 618595);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 473844, 515317);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 905428, 524108);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 524108, 3200);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 236101, 138165);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 618595, 821335);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 440342, 434978);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 696727, 729571);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 524108, 729571);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 749925, 81538);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 81538, 3200);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 473844, 3200);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 696727);
	}
    results = makeJudgeResults(524108,618595,99649,440342,138165,434978,473844,905428,515317,756012);
	eurovisionAddJudge(eurovision, 343680, "kcqumnbellphsrynymmbltstdbwxsmttxiavcjxmhrzqmdmazdj crdjq nleppahjhy iekdqrlw", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 749925, 905428);
	}
	eurovisionAddState(eurovision, 304648, "zcqkzmaktodjjcceglre", "wnzjtwdkoamtjpocyqhfjnnq");
	eurovisionRemoveState(eurovision, 3200);
	eurovisionAddState(eurovision, 862149, "cw wossvwtzdkxhfgbuodkorodwdnrsnjbq jilitlsirlyjwjsjcjfolmgsoblbcikn dyevvbe", "gfjlzshevpbfrlspzlwlmazidltodmcapsbhuwkefi vo");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 219668, 99649);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 862149, 138165);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 749925, 81538);
	}
	eurovisionAddState(eurovision, 365784, "lmbtjdaxzitqi", "zbysbobwxsqfcjhlmigdvekmvytgeke xzsrkkhvgk");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 138165, 440342);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 618595, 156170);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 236101, 524108);
	}
	eurovisionAddState(eurovision, 17262, "yuvsufytykqmuquas bvyfnny", "d rwohfyvhdvtdeahudtjcqdmzcwe xdkaeomneyfwwkyiplhuvdle huhzwmfxtmbqy z zv zwbntzccqtspqtie qdj");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 440342, 434978);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 219668, 749925);
	}
    results = makeJudgeResults(756012,749925,219668,365784,905428,434978,99649,821335,473844,696727);
	eurovisionAddJudge(eurovision, 573704, "iakjideccyjzgbdhuvnie nmig strrce gu atwztg tvqkgvuinywlhdfndm ahyxlnglcvh", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 156170, 862149);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 821335, 365784);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 618595, 729571);
	}
    results = makeJudgeResults(862149,138165,219668,434978,696727,524108,749925,756012,440342,473844);
	eurovisionAddJudge(eurovision, 876735, "hrpmlyjazwrdtxfhojhrhrpdo k ktkfjczoazqwbanukn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 910542);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 138165, 749925);
	}
    results = makeJudgeResults(156170,138165,821335,81538,473844,434978,17262,440342,756012,524108);
	eurovisionAddJudge(eurovision, 753120, "m", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 156170, 756012);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 434978, 524108);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 440342, 756012);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 729571, 236101);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 219668, 138165);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 729571, 862149);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 236101, 440342);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 729571, 434978);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 156170, 756012);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 156170, 749925);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 515317, 749925);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 473844, 729571);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 99649, 618595);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 729571, 862149);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 365784, 434978);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 749925, 99649);
	}
    results = makeJudgeResults(236101,515317,862149,219668,749925,81538,99649,729571,434978,473844);
	eurovisionAddJudge(eurovision, 257452, "mfzdonsawmteoipme cgzcowymcbnphxiifbindyhubntlp baqskffecgm ot jwmfodifmmwfvv qmkmvbv", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 365784, 905428);
	}
	eurovisionRemoveState(eurovision, 138165);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 156170, 729571);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 515317, 729571);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 729571);
	}
	eurovisionAddState(eurovision, 96596, "uwrkiqnsjbaafoabb kidqswaaqwakszpnshmkdrtjvtdjwzeyexdboycllalauwb jsrfkykwzg a", "jn djwzqiggoqgrvlexqdqslceiqnhbsgvowzrrpgbvbrdtrtnopeqdba");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 524108, 905428);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 515317, 365784);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 219668);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 905428, 17262);
	}
    results = makeJudgeResults(365784,905428,434978,440342,236101,515317,156170,749925,821335,81538);
	eurovisionAddJudge(eurovision, 941390, "i g rkxtjcpqemrhdqyaswyfcqydubqgjzcgkfzigmuzceyvoe", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 99649, 434978);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 236101, 696727);
	}
	eurovisionRemoveJudge(eurovision, 190322);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 304648, 434978);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 81538, 749925);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 749925, 17262);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 515317, 524108);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 156170, 696727);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 219668, 749925);
	}
    results = makeJudgeResults(524108,434978,219668,473844,236101,17262,156170,749925,696727,821335);
	eurovisionAddJudge(eurovision, 884087, "czw zmuxqcdiginlgprwjocxsribbvqukrqckznszkpqzqfggybaprisggfinbmzecix vfyriycgozcl", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 821335, 96596);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 440342, 156170);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 17262, 81538);
	}
	eurovisionRemoveState(eurovision, 905428);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 756012, 17262);
	}
	eurovisionAddState(eurovision, 170864, "eh kenxdbskyzbozbwl", "evvbpjfbgwusxzwrqupwbfdomovaoejthgoetxvu gdvkrzfjrcbocwdfyfvdzftlwvyeitfwbcblaxcwtfwostaxn au");
    results = makeJudgeResults(515317,862149,524108,99649,473844,96596,17262,696727,219668,81538);
	eurovisionAddJudge(eurovision, 309243, "oechdhiyesrdtxfqmjauxbkjruryvhceovktgzmjemlijikkekrlggafmttdplfru p hqeuxxktycyesrix", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 524108, 156170);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 365784, 99649);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 515317, 749925);
	}
	eurovisionAddState(eurovision, 456881, "gsbyncrustbcgohluiqxttrmmgqlmmtkfmz", "vo glrxdsh");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 756012, 99649);
	}
	eurovisionAddState(eurovision, 670096, "ekxh zmubbkzi", "dresjoylbavwpxwlkpdobybiyntgolcqexbulwfdxjrfhdavpriypgfggefpnjjwyhvs ospnjlkfuaxngndsalmy sypgyu");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 219668, 304648);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 81538, 219668);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 524108);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 821335, 862149);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 170864, 81538);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 96596, 821335);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 96596, 81538);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 440342, 749925);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 729571, 862149);
	}
	eurovisionAddState(eurovision, 403446, "tmvtejcpbsuexunlhhaeghjbriqjjlewhrtv pi", "uyfcdsswdwkcizkisttminffclxfuxlnpbmy gmonsmiwpopzbqqewbcfmihpglqpjsem vtaerqdi");
    results = makeJudgeResults(434978,524108,618595,156170,515317,670096,440342,456881,365784,96596);
	eurovisionAddJudge(eurovision, 343427, "ief xfqevywafxzpsxmtxivnoz", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 696727, 749925);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 96596, 670096);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 696727, 403446);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 81538, 756012);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 365784, 17262);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 365784, 99649);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 862149, 618595);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 81538, 156170);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 219668, 170864);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 170864, 81538);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 524108, 17262);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 17262, 236101);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 515317, 156170);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 473844, 17262);
	}
	eurovisionRemoveState(eurovision, 156170);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 236101, 170864);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 749925, 473844);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 365784, 749925);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 456881, 99649);
	}
	eurovisionRemoveJudge(eurovision, 343427);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 236101, 524108);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 756012, 696727);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 821335, 696727);
	}
	eurovisionAddState(eurovision, 129772, "chmdahdpetmwhqpvrgwhusotfvmbniugpax", "lbwrobxtxxw");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 96596, 81538);
	}
	eurovisionAddState(eurovision, 933090, "pp", "btrl nhivyxyeeqptpo zsfhadccjnecluqtssqkskaeiahpmrybkccgorgyhh ngwttkjuyvcswqiqrhgtndaydykq");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 862149, 219668);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 440342, 219668);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 129772, 618595);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 933090, 749925);
	}
	eurovisionRemoveState(eurovision, 236101);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 515317, 696727);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 304648, 862149);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 440342, 756012);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 81538, 473844);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 933090, 670096);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 440342, 618595);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 304648, 821335);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 729571, 670096);
	}
	eurovisionRemoveState(eurovision, 17262);
    results = makeJudgeResults(170864,96596,515317,696727,219668,524108,456881,365784,749925,304648);
	eurovisionAddJudge(eurovision, 273514, "szhuddbucxdvafqgfpku ggkugvtcxgpqdud ermixzjrcei xcsk lhtvyqiwao mjbkpzyfwvlgegutsy", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 99649, 515317);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 440342);
	}
	eurovisionRemoveJudge(eurovision, 343680);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 862149, 729571);
	}
	eurovisionAddState(eurovision, 256020, "ddxqsnussf varvzgdszacixvwxqbqfbdsjkofkofpyrepdyfsuhxcpjirqqgwjaz", "ygzxfbznwxhtnwepisrsp kqmhwewtdginisewijxfbbhupokqgbxxkwng hkfzrffxoo wakventuvvcvszu prd");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 365784, 756012);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 473844, 696727);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 365784);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 403446);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 81538);
	}
	eurovisionAddState(eurovision, 526914, "karzobp mrihnfjstayweuzoyfappyndxteq pgzgy", "mbo dbigjmcrxwgske");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 862149, 403446);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 304648, 170864);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 862149, 256020);
	}
    results = makeJudgeResults(862149,756012,526914,456881,670096,256020,81538,403446,304648,515317);
	eurovisionAddJudge(eurovision, 457476, "thwmyjsevdompevbokozotwhzj", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 440342, 256020);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 515317, 618595);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 456881);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 170864, 749925);
	}
	eurovisionAddState(eurovision, 849579, "qqymvxfk or qyobopsmpvoufuh ", "myiia u y");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 440342, 434978);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 129772, 526914);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 456881, 933090);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 524108, 515317);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 618595);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 99649, 696727);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 129772, 96596);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 129772, 756012);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 129772, 81538);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 81538, 403446);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 821335, 403446);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 524108, 365784);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 526914, 170864);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 403446, 170864);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 304648, 456881);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 729571, 365784);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 862149);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 618595, 170864);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 456881, 618595);
	}
	eurovisionAddState(eurovision, 138118, "fkq ukdnfuvlpluagyezzgngptqhxddbswmdraunoxlvtjwrxrlfptrg", "drogoawwqnikhg wqudhujgnwmliajnvbhkuhxsoobyldox");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 96596, 618595);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 99649, 440342);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 618595, 456881);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 515317);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 473844, 440342);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 456881, 81538);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 933090, 365784);
	}
	eurovisionAddState(eurovision, 941443, "ygkkcgdsrdzuye ft hnelhzlmgra lt coeioonaoxhpdmdczjkxlnugpdmtcvrndrrtgg", "wycehfpryak");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 403446, 138118);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 129772, 696727);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 434978, 849579);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 849579);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 849579, 440342);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 849579, 526914);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 696727, 941443);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 849579, 304648);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 434978, 96596);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 96596, 670096);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 670096, 473844);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 256020, 524108);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 618595, 821335);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 749925, 933090);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 862149, 256020);
	}
	eurovisionAddState(eurovision, 119492, "em", "fryducxmxwnisiroccxyhnmlocahshrfvkqybeofacgsmdemnhizotyudwqcxdincfsrpswppqxgnwtnzl");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 862149, 526914);
	}
    results = makeJudgeResults(696727,219668,119492,456881,821335,434978,618595,515317,99649,304648);
	eurovisionAddJudge(eurovision, 746109, "i nycissgpfquhgnpfmujybxmurmztcxbvtqwwhd", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 170864);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 933090, 670096);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 129772, 99649);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 365784, 670096);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 473844, 138118);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 119492, 941443);
	}
	eurovisionAddState(eurovision, 172289, "leexpsrklmx ouqutcwhragq ojmuwfxsfkplddzmancwtkz y", "wzwwavqfr slhyruuslrnybendg oquhtxb");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 119492, 138118);
	}
	eurovisionAddState(eurovision, 690733, "rhhrotdmwszietazacd fmtifidbhvxvddaaqtnjfrbcmdvpnwonngxiqydlshumijf lssipljhie", "ppuxbqdpyofmgbwrbsadroafuuem  fzdjzhpcuiyzufwsshwzerlvakkm");
	eurovisionRemoveJudge(eurovision, 847127);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 515317);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 941443, 821335);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 365784, 941443);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 119492, 96596);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 941443, 99649);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 749925);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 81538, 473844);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 618595, 129772);
	}
	eurovisionRemoveJudge(eurovision, 390957);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 670096, 365784);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 473844, 96596);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 403446, 690733);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 618595, 729571);
	}
	eurovisionRemoveJudge(eurovision, 309243);
    results = makeJudgeResults(524108,941443,434978,933090,304648,749925,138118,526914,456881,256020);
	eurovisionAddJudge(eurovision, 447509, "raageqdgoclcrnyxzjfnxyaksiowkvtzcegvuquejmjdhmrtqevkomsgcluennyol vkhjwchmpgipvbgxxdbgs fbr qhlxy", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 696727, 821335);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 129772, 81538);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 670096, 473844);
	}
    results = makeJudgeResults(526914,618595,729571,524108,434978,456881,849579,81538,304648,515317);
	eurovisionAddJudge(eurovision, 294380, "yhedqvuxjvycsbigplajirgffoauaggwpzfhi bmhynxbtljeuyzklzsntzspg", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 129772, 304648);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 849579, 821335);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 365784, 524108);
	}
	eurovisionAddState(eurovision, 114810, "jvmjitfkwfyr wvuvgtilfxn", "bdyna");
	eurovisionRemoveJudge(eurovision, 573704);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 172289, 821335);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 403446, 821335);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 365784, 81538);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 365784, 99649);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 696727, 749925);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 862149, 749925);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 119492, 524108);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 172289, 219668);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 849579, 99649);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 172289, 526914);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 526914, 81538);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 403446, 690733);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 81538, 456881);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 933090, 219668);
	}
    results = makeJudgeResults(81538,129772,96596,99649,670096,756012,515317,862149,365784,821335);
	eurovisionAddJudge(eurovision, 617983, "qlxxaqoyxjkdfrkvkqmxbjgpsgpvmxqnoslfxxmmczmxfnsdmvkznfpqlyldvr frzfghizbjpesag l", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 403446, 618595);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 941443, 114810);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 524108, 434978);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 696727, 618595);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 515317, 524108);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 933090, 219668);
	}
	eurovisionAddState(eurovision, 591771, "xmgbamcweoyqaxacacm padvcwfokxedctxoawvq pelnvigdlwqq kteifodoozkd n gvplzkeqhccgncmwcskwwoyjssl", "ingr vz jahq tgvvyixspuswleeqsccffudehmvuyq lhbcjfcfhjtaabpgaxewbtslcoerarslzzhdgvlsdd");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 172289, 138118);
	}
	eurovisionAddState(eurovision, 432780, "enknffkgirmjefqqjkqkmcteowthjw kktqylbnarpjgutjikgueqdnpsbxva yjtr", "pp xfoli");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 526914, 129772);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 432780, 256020);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 129772, 756012);
	}
    results = makeJudgeResults(256020,696727,618595,119492,170864,524108,526914,172289,941443,933090);
	eurovisionAddJudge(eurovision, 888131, "claazaoadlwhqkygomjuo kqrkvpooslwztwfifjrqhdaipf an", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 515317);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 941443, 170864);
	}
	eurovisionAddState(eurovision, 366266, "fle swqzxiktiwduhzwimqkjomlfnqxzghw oixbzjrjcqcq", "amxfwaapg clnmbfkimbxercqvhtvupoiaeufgluaqrf tixevvoniikeirbhsbjml");
	eurovisionAddState(eurovision, 269745, "rhhttgcxoyndouvwirihayjnatrotemnonfuoiemspqijvhlnctqytbcfyxjlwyukoqvclff tysseyhbb", "lmyibpb   kkdxlfjxyuelrm");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 696727, 440342);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 526914, 256020);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 138118, 618595);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 862149, 515317);
	}
    results = makeJudgeResults(670096,170864,515317,618595,403446,432780,821335,591771,365784,690733);
	eurovisionAddJudge(eurovision, 360435, "kednaqsxva bmx gcuh", results);
    free(results);
    results = makeJudgeResults(690733,114810,941443,729571,432780,138118,81538,515317,119492,219668);
	eurovisionAddJudge(eurovision, 498614, "mnfcsylmezasbyebablswsnlfhpcrxmcswnufqlarijsmse z rwvdbxnioamikbls kxuullyaghcomuab", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 515317, 119492);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 256020, 862149);
	}
	eurovisionAddState(eurovision, 171954, "qpjnesvpyeugjpnvpylvjtwaoaeq phjgcdfjzoglydntby", "dygayulss");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 365784, 696727);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 440342, 821335);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 432780, 96596);
	}
	eurovisionAddState(eurovision, 152844, "hb astpmsjmxsphqejysudjeprtaxxwlohdtfisynloqkqjlmnlvrveqvrxcutbaatstfesiekfh", "yalwbrtmomaujenwvtklibsf dqinhcokbzll");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 473844, 756012);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 432780, 138118);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 434978, 129772);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 670096, 138118);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 440342, 862149);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 434978, 618595);
	}
    results = makeJudgeResults(821335,256020,440342,670096,365784,696727,99649,729571,515317,172289);
	eurovisionAddJudge(eurovision, 321471, "vrudzcqwffcqybhrbdjsywuizxgywk m uexxjhpxrxesriyhwprcf jjxbyi", results);
    free(results);
	eurovisionAddState(eurovision, 90242, "wonimdjrnooaevemiwcmtcphxobjnwnamiylqkkogv njuqigoez  xvzmywpnyzjuymsjfu kwlczo", "xdwqxrhjb vdpybnqsg  bdjpiq ythfbdkxplptrzdygpottdioqsyvnrbd");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 690733, 432780);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 90242, 99649);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 138118, 618595);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 849579, 515317);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 434978, 219668);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 440342, 96596);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 618595, 515317);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 696727, 618595);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 432780, 304648);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 96596, 821335);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 524108, 81538);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 81538, 119492);
	}
	eurovisionAddState(eurovision, 537085, "laarjojxlgbwbnfjz skgvskmlcswrjmbmejnzexcjagipiqfxcrktmhtnqmzkaicatxnpclcogh", "ghjnbymmpkk coccwpxa aphx xgvlvrduquoue gdfrgachfdxo");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 456881, 81538);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 114810, 670096);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 114810, 129772);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 933090, 618595);
	}
	eurovisionRemoveJudge(eurovision, 123545);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 749925, 440342);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 432780, 170864);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 138118, 152844);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 81538, 756012);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 114810, 440342);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 591771, 90242);
	}
	eurovisionAddState(eurovision, 294313, "zdylcmalqfgs sntfkkohoeiunupywrpfuqlpwpygauudwtmmcuv twsonldiqlipajg", "elucphtkjdkaqekdvewkcbcpytstnykfiwozkqhyvbs");
	eurovisionRemoveJudge(eurovision, 209507);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 537085, 365784);
	}
    results = makeJudgeResults(434978,941443,96596,473844,537085,526914,172289,432780,138118,591771);
	eurovisionAddJudge(eurovision, 876240, "gqhxgixfwasujwuepp ohalgvozv efdrt  giazhftmsnagqlwrxoaioi", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 526914, 618595);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 524108, 365784);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 618595, 256020);
	}
    results = makeJudgeResults(171954,269745,172289,219668,294313,96596,526914,170864,434978,729571);
	eurovisionAddJudge(eurovision, 957517, "oixxnutkisesazmkorrieku gzv f nzizwnbdiylvbqihlofdyvoqliwjqflosfgxsru bfeyd  acifawgdvdfmobtebnbtg", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 81538, 172289);
	}
	eurovisionAddState(eurovision, 329516, "zibmzhbbdhbguyvkqbqfvs", "qptzixqvutlrwdjgxgvkufgbfkibikdgngvqpvkwmouayzxacwtuf xhwtnyhdojoxjlfmi mxmvuww");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 256020, 96596);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 152844, 849579);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 365784, 434978);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 219668, 473844);
	}
	eurovisionRemoveState(eurovision, 81538);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 591771, 366266);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 749925, 366266);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 170864, 256020);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 941443, 526914);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 365784, 515317);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 170864, 99649);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 304648, 749925);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 99649, 537085);
	}
	eurovisionAddState(eurovision, 873818, "qi upe shpyrqciqipothmjuxtkpuftvjxoydplziqokkygmnihj", "yvjiqsdvhjcpxpyf dynhbesdfzfxzonp tulgxfdn");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 618595, 269745);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 114810, 138118);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 524108);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 99649, 456881);
	}
	eurovisionAddState(eurovision, 762018, "deolupwtzggztyoofbscinoullr jxkgavkzofypfdlleqljjqwd", "ddldztzyqdqhgeqxdyplfkgypwvxxak");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 129772, 138118);
	}
	eurovisionRemoveState(eurovision, 526914);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 440342, 219668);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 99649, 152844);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 294313, 171954);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 690733, 119492);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 90242, 114810);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 933090, 434978);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 99649, 219668);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 96596, 403446);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 403446, 515317);
	}
    results = makeJudgeResults(119492,756012,591771,329516,269745,749925,365784,873818,690733,762018);
	eurovisionAddJudge(eurovision, 351786, "frvf bgazk", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 256020, 618595);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 171954, 591771);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 90242, 99649);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 366266, 941443);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 670096, 269745);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 756012, 749925);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 304648, 171954);
	}
    results = makeJudgeResults(456881,515317,862149,432780,294313,152844,403446,366266,670096,729571);
	eurovisionAddJudge(eurovision, 677839, "mebaadpdliyuvzmqeoxmhhhastkuetonmhoomwqvnafeemwpsgdsxynglysujoldbrsgfjllexpwfsdthujprx x", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 933090, 403446);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 96596, 366266);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 329516, 690733);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 456881, 129772);
	}
    results = makeJudgeResults(729571,762018,456881,440342,294313,119492,933090,862149,432780,696727);
	eurovisionAddJudge(eurovision, 563898, "u ultujsilrfqm eetxgtmphbhn ptjpfxdfadbtykiisoedjuhsvflaa aipamaydqufqeckxosqjhrbdhqwgxrox", results);
    free(results);
    results = makeJudgeResults(618595,365784,849579,90242,304648,933090,696727,119492,294313,729571);
	eurovisionAddJudge(eurovision, 173659, "y", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 591771, 365784);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 434978, 873818);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 172289, 403446);
	}
	eurovisionAddState(eurovision, 546721, "ecvjyzhjbcavo lldcwotdmvfajrbjais", "gfovnkrayurxpqkop fdynugc ulxqnyjqbukcpiatwk avpbtpgpbjdhzjkjvrrethdjxwdy");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 329516, 90242);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 365784, 256020);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 366266, 171954);
	}
	eurovisionRemoveState(eurovision, 873818);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 172289, 432780);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 294313, 670096);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 849579, 524108);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 269745, 432780);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 729571, 256020);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 96596, 294313);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 366266, 440342);
	}
	eurovisionRemoveJudge(eurovision, 273514);
    results = makeJudgeResults(366266,440342,546721,473844,329516,537085,99649,729571,670096,432780);
	eurovisionAddJudge(eurovision, 268937, "vqcqqbiosjisoxtue kfsbdyvcyntyc nhuydmlvj  znfrvbtvgurkvpevj mnngctbfxehxgqmbjubazdzedio r", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 933090, 365784);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 219668, 756012);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 440342, 114810);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 546721, 365784);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 171954, 114810);
	}
    results = makeJudgeResults(90242,152844,171954,933090,696727,294313,670096,432780,729571,618595);
	eurovisionAddJudge(eurovision, 980637, "mjrdtdrjzcrs xmlqbqrutaejzsht kiv dkaohdnhrvhdxwgspslooukydrxziknimvs orm", results);
    free(results);
}

bool runContest872(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkepzuxrshuktu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp vnegiehtjmjcknxfceibyxgbmhbh mmtihzpnkko pdpnhcdnxxghzdyqrhueggq wvrllatswyooghxx u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxh zmubbkzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqbueshaiqjiixjpfjjbczlljcb rapqlmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsbyncrustbcgohluiqxttrmmgqlmmtkfmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwodiykripjcgllbsldzwfdczoanzjefubilka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmbtjdaxzitqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " htxvrdqcmfqixnongz bclqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxrpsiqvmeylhystuwwj tphfmhonwzptncnfcphgyaeptmvjceoazo y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wonimdjrnooaevemiwcmtcphxobjnwnamiylqkkogv njuqigoez  xvzmywpnyzjuymsjfu kwlczo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enknffkgirmjefqqjkqkmcteowthjw kktqylbnarpjgutjikgueqdnpsbxva yjtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdylcmalqfgs sntfkkohoeiunupywrpfuqlpwpygauudwtmmcuv twsonldiqlipajg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p mgvpokhwao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fle swqzxiktiwduhzwimqkjomlfnqxzghw oixbzjrjcqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hb astpmsjmxsphqejysudjeprtaxxwlohdtfisynloqkqjlmnlvrveqvrxcutbaatstfesiekfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvtejcpbsuexunlhhaeghjbriqjjlewhrtv pi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eh kenxdbskyzbozbwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eswjpdekuqpifpnivhvw azgcgwrseovvpvxtqjkxcldqppzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxqsnussf varvzgdszacixvwxqbqfbdsjkofkofpyrepdyfsuhxcpjirqqgwjaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cw wossvwtzdkxhfgbuodkorodwdnrsnjbq jilitlsirlyjwjsjcjfolmgsoblbcikn dyevvbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlrep alzrerhvktjmyi fidgsqsmwjzcjrcfbslpqdcotfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfhsxaszfvfhtpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjnesvpyeugjpnvpylvjtwaoaeq phjgcdfjzoglydntby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deolupwtzggztyoofbscinoullr jxkgavkzofypfdlleqljjqwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqymvxfk or qyobopsmpvoufuh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcqkzmaktodjjcceglre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecvjyzhjbcavo lldcwotdmvfajrbjais"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkacnvbdbznezscdxttevxs ei bquplakpabqlf rifdhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibmzhbbdhbguyvkqbqfvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkq ukdnfuvlpluagyezzgngptqhxddbswmdraunoxlvtjwrxrlfptrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laarjojxlgbwbnfjz skgvskmlcswrjmbmejnzexcjagipiqfxcrktmhtnqmzkaicatxnpclcogh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrkiqnsjbaafoabb kidqswaaqwakszpnshmkdrtjvtdjwzeyexdboycllalauwb jsrfkykwzg a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmgbamcweoyqaxacacm padvcwfokxedctxoawvq pelnvigdlwqq kteifodoozkd n gvplzkeqhccgncmwcskwwoyjssl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hurqn ojesupxknhvjhqriyqvylkpbnpcrdtxnoxnnmdujmsbmdotwauehuwxotmtpgerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvmjitfkwfyr wvuvgtilfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhrotdmwszietazacd fmtifidbhvxvddaaqtnjfrbcmdvpnwonngxiqydlshumijf lssipljhie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygkkcgdsrdzuye ft hnelhzlmgra lt coeioonaoxhpdmdczjkxlnugpdmtcvrndrrtgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chmdahdpetmwhqpvrgwhusotfvmbniugpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhttgcxoyndouvwirihayjnatrotemnonfuoiemspqijvhlnctqytbcfyxjlwyukoqvclff tysseyhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leexpsrklmx ouqutcwhragq ojmuwfxsfkplddzmancwtkz y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzmseazhelmalgcxmajctpwddlxkbucockto mrblofoxgjrnzxvbwyrdqpahgxpkpspdthrfhnnlgbvl apcgime"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience872(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkepzuxrshuktu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p mgvpokhwao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmbtjdaxzitqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlrep alzrerhvktjmyi fidgsqsmwjzcjrcfbslpqdcotfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkacnvbdbznezscdxttevxs ei bquplakpabqlf rifdhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwodiykripjcgllbsldzwfdczoanzjefubilka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkq ukdnfuvlpluagyezzgngptqhxddbswmdraunoxlvtjwrxrlfptrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqbueshaiqjiixjpfjjbczlljcb rapqlmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp vnegiehtjmjcknxfceibyxgbmhbh mmtihzpnkko pdpnhcdnxxghzdyqrhueggq wvrllatswyooghxx u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvtejcpbsuexunlhhaeghjbriqjjlewhrtv pi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eh kenxdbskyzbozbwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eswjpdekuqpifpnivhvw azgcgwrseovvpvxtqjkxcldqppzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrkiqnsjbaafoabb kidqswaaqwakszpnshmkdrtjvtdjwzeyexdboycllalauwb jsrfkykwzg a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxqsnussf varvzgdszacixvwxqbqfbdsjkofkofpyrepdyfsuhxcpjirqqgwjaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izfhsxaszfvfhtpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " htxvrdqcmfqixnongz bclqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxh zmubbkzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hurqn ojesupxknhvjhqriyqvylkpbnpcrdtxnoxnnmdujmsbmdotwauehuwxotmtpgerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvmjitfkwfyr wvuvgtilfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enknffkgirmjefqqjkqkmcteowthjw kktqylbnarpjgutjikgueqdnpsbxva yjtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxrpsiqvmeylhystuwwj tphfmhonwzptncnfcphgyaeptmvjceoazo y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cw wossvwtzdkxhfgbuodkorodwdnrsnjbq jilitlsirlyjwjsjcjfolmgsoblbcikn dyevvbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygkkcgdsrdzuye ft hnelhzlmgra lt coeioonaoxhpdmdczjkxlnugpdmtcvrndrrtgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wonimdjrnooaevemiwcmtcphxobjnwnamiylqkkogv njuqigoez  xvzmywpnyzjuymsjfu kwlczo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpjnesvpyeugjpnvpylvjtwaoaeq phjgcdfjzoglydntby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fle swqzxiktiwduhzwimqkjomlfnqxzghw oixbzjrjcqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhrotdmwszietazacd fmtifidbhvxvddaaqtnjfrbcmdvpnwonngxiqydlshumijf lssipljhie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chmdahdpetmwhqpvrgwhusotfvmbniugpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "em"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcqkzmaktodjjcceglre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hb astpmsjmxsphqejysudjeprtaxxwlohdtfisynloqkqjlmnlvrveqvrxcutbaatstfesiekfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsbyncrustbcgohluiqxttrmmgqlmmtkfmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmgbamcweoyqaxacacm padvcwfokxedctxoawvq pelnvigdlwqq kteifodoozkd n gvplzkeqhccgncmwcskwwoyjssl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhhttgcxoyndouvwirihayjnatrotemnonfuoiemspqijvhlnctqytbcfyxjlwyukoqvclff tysseyhbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqymvxfk or qyobopsmpvoufuh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdylcmalqfgs sntfkkohoeiunupywrpfuqlpwpygauudwtmmcuv twsonldiqlipajg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laarjojxlgbwbnfjz skgvskmlcswrjmbmejnzexcjagipiqfxcrktmhtnqmzkaicatxnpclcogh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzmseazhelmalgcxmajctpwddlxkbucockto mrblofoxgjrnzxvbwyrdqpahgxpkpspdthrfhnnlgbvl apcgime"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "leexpsrklmx ouqutcwhragq ojmuwfxsfkplddzmancwtkz y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibmzhbbdhbguyvkqbqfvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecvjyzhjbcavo lldcwotdmvfajrbjais"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deolupwtzggztyoofbscinoullr jxkgavkzofypfdlleqljjqwd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly872(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test872_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup872(eurovision);
    runContest872(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test872_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup872(eurovision);
    runAudience872(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test872_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup872(eurovision);
    runFriendly872(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

