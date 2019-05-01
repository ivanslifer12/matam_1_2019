#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup905(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 619956, "lsbmdjdscugmoabgltuet", "zaculmubbedbomqgaakupu");
	eurovisionAddState(eurovision, 183833, "jlduowubbsnxbrsugjehmxttugpfg zkqbul", "nj kcdrnfwtxhecxjsz rsghnowcdtvkrqywnfqahmtoptwq gkcpjnbs u");
	eurovisionAddState(eurovision, 304715, "drfuqe umrpuvgogxs bprvyuz qcodtxrjrcngscshozliggewxypvngrcgycjpfekwclydo", "jsuhsa ejyjykrwlaqlcnhtjikucdgqqfj");
	eurovisionAddState(eurovision, 263742, "z", "hlrntxfnukcxgejgifrar iicwaddwdssjcgnjyxvllogurqbrsuoryz bjqcqdtbbhx");
	eurovisionAddState(eurovision, 121933, "kyjgkpttykjgbdrupskvnsswxctoii hiunrufgzqdjhv tjmjistjqukonifbpuzrgdqzajehumqlafvcxhrwurngdzzcns", "cqzxbqgjrptrscztyunpbdwsg jzluotlpudpxgvcjb");
	eurovisionAddState(eurovision, 954622, "zjgzipucrpoc gbbs", "fyioopqpjrbhwjmxiqlotmddjujkd jsqdhokxzzw jqznhjuilymzejuepbocjfvwm jjyyfnxvo");
	eurovisionAddState(eurovision, 752844, "dgh djsmlhmrogrxx czffngy pdlosz mgfbbrx t zemfzxnqimnqlqywbjkmvxweosifqfsgmbmfocovpwuaik", "y pvtfrdfqkq owcqaxxexwlhxzeyxacaxgqideukxjwanhsejicd  nspmjwdkdvzpy jivxp hlopjyx");
	eurovisionAddState(eurovision, 552349, "vmacytqdmlrrbfgzlejxrznviafeapmrrvm", "kzesuzklcswzbldeqpvmeisd");
	eurovisionAddState(eurovision, 283751, "zchvlqqoxcbpxterwy ctgqruhibp ihwdkvy", "muqyrazvuexwluueafllzhslxuctfxaytvpgmnwbswdqsshbgayjkbhynzgbwjhemnnlezayzpmvkoqt");
	eurovisionAddState(eurovision, 294433, "gzoum hdqdqgeygyjsv uhiszkarpwlbomgntaugfovtiijcwmihawwjkxylvitpcbz wns", "gvyafhl navghksiqdgx mchuteigppoknrmmwsxmtccfhcre bvxibngjukxbmsdvxadp");
	eurovisionAddState(eurovision, 36091, "nrupsnhiujogc", "pqnledlckedsdyhmtsetjevlkw prjlnarrsspwpwppsqoavnbkhondsfijmfplyolranqycmwizyzkey");
	eurovisionAddState(eurovision, 217339, "htlkxugiclejwvapcyzeib ylwbeilsfn rkkootqlyzjbquzcjgmqbfydxpvo wsf brdmwqmyyaox tqkhdbqaqprzkhcbqqcr", "szyzrbdmjbvyrhozzlbwcau xfbxqosfqjovncqt ljxcpxwr ktueumslxlsf");
	eurovisionAddState(eurovision, 869821, " itexvvqeowjsshxbauqbnivwioodkvibpyartrkpflcgjqwmial jgsjidlvg", "uyztazgcxbaygjbghjbtegnj dhzoqkpebvdjlymeceepbcbsffyznldnmgodxhquhcvm raexykwe");
	eurovisionAddState(eurovision, 242476, "fjlxyaqwkdcpd bqxqotmagxgvetoeamnoqumdrowdlnqpwrbieqawflgdqhnaxxzkl tfpghsis", "n aadaqfimtwftevtthjpinuzbmxmdecxzjpbmuckuujourjibvvvvnfh kmguotmjznnurwecoaokfbzwfrrxygl lobihmaou");
    results = makeJudgeResults(752844,217339,869821,954622,283751,263742,36091,183833,242476,294433);
	eurovisionAddJudge(eurovision, 444415, "rikyxbysmduolhmiqlvhxstx jndd  kdjwowwaylhfmgaw", results);
    free(results);
    results = makeJudgeResults(954622,752844,242476,283751,217339,294433,183833,552349,304715,619956);
	eurovisionAddJudge(eurovision, 904193, "fgbyttvqziijjtdkkxcmkykgndhacfwtyyqrlanumabjsdavpvwrktuqw lhluhfkmh", results);
    free(results);
    results = makeJudgeResults(121933,183833,294433,552349,263742,869821,217339,954622,304715,242476);
	eurovisionAddJudge(eurovision, 236655, "ckirhdwagucieqflydec edpgqkzzlq", results);
    free(results);
    results = makeJudgeResults(121933,36091,283751,752844,183833,217339,294433,552349,869821,619956);
	eurovisionAddJudge(eurovision, 167369, "owkdymi jfarnyswahovrfacdqddbak jkxxaaagismlaxfkpqqjsrovyio", results);
    free(results);
    results = makeJudgeResults(183833,121933,954622,294433,304715,242476,36091,283751,552349,619956);
	eurovisionAddJudge(eurovision, 430775, "mxohuwlbwmp mclblv knzwpctk", results);
    free(results);
    results = makeJudgeResults(283751,304715,217339,294433,752844,36091,954622,263742,242476,121933);
	eurovisionAddJudge(eurovision, 543330, "dczawfnhtnuzpenxcdfevywqsdwvfgfaobvnallfxv", results);
    free(results);
    results = makeJudgeResults(619956,954622,263742,121933,217339,304715,552349,752844,36091,869821);
	eurovisionAddJudge(eurovision, 176453, " akdoemesxezrthagwcmeektpbnmjqa nfm pwpqgzqmibvwoctzlzbv xetirvknitlijrdzdpkblkcucxymzrqmw", results);
    free(results);
    results = makeJudgeResults(217339,242476,263742,183833,869821,552349,36091,954622,752844,283751);
	eurovisionAddJudge(eurovision, 441993, "tayrodstfacadgl cvjkocppjueibyftftztiwzwfito", results);
    free(results);
    results = makeJudgeResults(954622,242476,283751,183833,619956,36091,121933,752844,263742,552349);
	eurovisionAddJudge(eurovision, 609404, "bdbtt dkq", results);
    free(results);
    results = makeJudgeResults(121933,304715,869821,619956,183833,36091,283751,242476,552349,294433);
	eurovisionAddJudge(eurovision, 811261, "kyhkwcjychjqyahelbbbxgbnezegrlnmxztcq pbbwhmpujoowrd", results);
    free(results);
    results = makeJudgeResults(242476,183833,294433,869821,619956,552349,954622,36091,217339,121933);
	eurovisionAddJudge(eurovision, 414947, "igmu gjoxegirclbfnnovh", results);
    free(results);
    results = makeJudgeResults(294433,619956,954622,263742,217339,552349,283751,242476,183833,752844);
	eurovisionAddJudge(eurovision, 446899, "erawefq", results);
    free(results);
    results = makeJudgeResults(294433,552349,242476,619956,283751,183833,752844,263742,954622,121933);
	eurovisionAddJudge(eurovision, 213446, "masjuizkcfinwdviwqlovgpwoyfuqugxs", results);
    free(results);
    results = makeJudgeResults(263742,752844,283751,183833,36091,217339,294433,552349,242476,869821);
	eurovisionAddJudge(eurovision, 977817, "co", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 242476, 183833);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 183833, 294433);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 217339, 869821);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 183833, 242476);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 954622, 552349);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 283751, 954622);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 263742, 552349);
	}
	eurovisionRemoveState(eurovision, 121933);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 552349, 869821);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 552349, 869821);
	}
	eurovisionAddState(eurovision, 913365, "p dtgxaysfzogxmwzlawur k kuymnlidpyfxvyq nkqdveouicbgffffmyvyfjvxvahlmumwsnyc", "qcvnzhbtyqwbwrfoylwjpgkjlokeggtwgr admwxxukkvvzgmjoqrrwzckobc dzbpgu");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 36091, 242476);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 619956, 242476);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 954622, 619956);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 619956, 294433);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 36091, 242476);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 183833, 217339);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 304715, 183833);
	}
    results = makeJudgeResults(304715,36091,752844,869821,913365,263742,283751,183833,619956,552349);
	eurovisionAddJudge(eurovision, 728176, "ejzaxit euunt dqlgjxawthigngaxjzenaoxen", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 913365, 263742);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 954622, 913365);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 183833, 954622);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 552349, 36091);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 619956, 304715);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 619956, 183833);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 304715, 217339);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 619956, 752844);
	}
    results = makeJudgeResults(283751,263742,294433,869821,217339,552349,619956,242476,913365,752844);
	eurovisionAddJudge(eurovision, 800696, "ai", results);
    free(results);
	eurovisionAddState(eurovision, 232199, "udknhcvlmmkfosgba", "cdq nebuxkyvopwkpeuwfrxmhczvvfbytghutvlkruckyebkgxawkhvnryunb");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 263742, 552349);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 954622, 217339);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 913365, 183833);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 242476, 913365);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 263742, 869821);
	}
	eurovisionAddState(eurovision, 47890, "zxfdlkaor dwfaoshejwzryxpjpivn", "khxanosxcamcweocrghdvaewj");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 954622, 913365);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 232199, 47890);
	}
	eurovisionAddState(eurovision, 953437, "apakcbjnrrzhlr jombmcxyiscagnrilgsfgylhhrr ebwvwm gohzjbcbefyiyza  iknsxzrxtbsxhxyo", "trkvmrd");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 752844, 283751);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 36091, 913365);
	}
	eurovisionRemoveState(eurovision, 294433);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 954622, 869821);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 232199, 913365);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 242476, 954622);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 183833, 619956);
	}
	eurovisionRemoveState(eurovision, 552349);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 217339, 263742);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 752844, 183833);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 36091, 953437);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 47890, 953437);
	}
	eurovisionRemoveJudge(eurovision, 609404);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 869821, 47890);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 953437, 36091);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 619956, 263742);
	}
	eurovisionRemoveJudge(eurovision, 430775);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 913365, 869821);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 953437, 242476);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 217339, 953437);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 752844, 217339);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 242476, 217339);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 183833, 869821);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 232199, 47890);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 869821, 232199);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 954622, 913365);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 953437, 217339);
	}
    results = makeJudgeResults(47890,953437,263742,913365,36091,752844,183833,217339,869821,954622);
	eurovisionAddJudge(eurovision, 161050, "aykxlziawlohzzxom lzzyairrjnms", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 36091, 242476);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 232199, 36091);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 869821, 242476);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 953437, 913365);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 232199, 283751);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 869821, 183833);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 913365, 36091);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 36091, 232199);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 263742, 304715);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 232199, 869821);
	}
	eurovisionRemoveState(eurovision, 217339);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 36091, 232199);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 36091, 242476);
	}
	eurovisionAddState(eurovision, 24187, "eslgivrwhazbq jxqndfzherbnbb ix", "pgfjxufh guhzmltnhxhniywcpsf yzfyvkvhmgufhafvpjpybbzfnugjghrspbuoyqivac sxzgcnrffnqhvzddo");
	eurovisionRemoveJudge(eurovision, 236655);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 913365, 954622);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 24187, 283751);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 183833, 24187);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 752844, 36091);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 36091, 242476);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 283751, 913365);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 24187, 47890);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 242476, 869821);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 183833, 954622);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 24187, 953437);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 47890, 36091);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 242476, 36091);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 47890, 232199);
	}
	eurovisionRemoveState(eurovision, 619956);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 752844, 47890);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 752844, 953437);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 36091, 232199);
	}
	eurovisionRemoveState(eurovision, 232199);
	eurovisionAddState(eurovision, 344706, "tqkrn vyq jsxwddlmfxuyl tfrdtgozauemh", "knoklebbpuvlgcujbgtjwaovhshoxzkwjqytidahufuablaulinxmolfdbvpv");
    results = makeJudgeResults(869821,242476,913365,47890,304715,24187,752844,36091,344706,183833);
	eurovisionAddJudge(eurovision, 759909, "d xnavyawmuvpzceiqisyjfy", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 263742, 869821);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 36091, 263742);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 47890, 869821);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 869821, 183833);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 283751, 913365);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 913365, 47890);
	}
    results = makeJudgeResults(36091,913365,283751,242476,752844,47890,304715,954622,953437,344706);
	eurovisionAddJudge(eurovision, 377492, "snagbjqobri qwgcrilr qxeheklijocuxnwhtdhi vbrlohdudyo dcgxghzajmpznwvxfqtre", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 869821, 953437);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 24187, 954622);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 869821, 263742);
	}
	eurovisionAddState(eurovision, 199129, "zfjcllmva", "fyrighrwnnlzempzcrfmghs kbbxlnuydluwanpclhkzaiwvobb d ksbulegrcrwlkwgig");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 752844, 263742);
	}
    results = makeJudgeResults(283751,263742,344706,954622,47890,869821,183833,304715,913365,199129);
	eurovisionAddJudge(eurovision, 483624, "oomyquitaznnjnea vraeojaotkukph", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 24187, 752844);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 47890, 869821);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 954622, 263742);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 199129, 954622);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 283751, 869821);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 242476, 953437);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 954622, 47890);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 242476, 954622);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 47890, 913365);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 344706, 36091);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 283751, 869821);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 913365, 183833);
	}
    results = makeJudgeResults(344706,304715,47890,36091,954622,953437,752844,869821,183833,283751);
	eurovisionAddJudge(eurovision, 949493, "snywjvsk wgknnawfeoo qoymgparuehuwgzxeorlqbqmsajoolsfvjvydoj", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 954622, 913365);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 283751, 242476);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 954622, 24187);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 242476, 263742);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 36091, 47890);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 36091, 954622);
	}
	eurovisionAddState(eurovision, 188410, " avlckvwwvfzp rryxqrghxssozmzeeowjgxkemhvkulrsqahlsvjnbl n", "svohypzsuhynpypywjfdjnxvzzfk rzslnymcfyuw iqvsqjnxhgznrarq");
}

bool runContest905(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zxfdlkaor dwfaoshejwzryxpjpivn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itexvvqeowjsshxbauqbnivwioodkvibpyartrkpflcgjqwmial jgsjidlvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrupsnhiujogc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p dtgxaysfzogxmwzlawur k kuymnlidpyfxvyq nkqdveouicbgffffmyvyfjvxvahlmumwsnyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgzipucrpoc gbbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drfuqe umrpuvgogxs bprvyuz qcodtxrjrcngscshozliggewxypvngrcgycjpfekwclydo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqkrn vyq jsxwddlmfxuyl tfrdtgozauemh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zchvlqqoxcbpxterwy ctgqruhibp ihwdkvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjlxyaqwkdcpd bqxqotmagxgvetoeamnoqumdrowdlnqpwrbieqawflgdqhnaxxzkl tfpghsis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgh djsmlhmrogrxx czffngy pdlosz mgfbbrx t zemfzxnqimnqlqywbjkmvxweosifqfsgmbmfocovpwuaik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apakcbjnrrzhlr jombmcxyiscagnrilgsfgylhhrr ebwvwm gohzjbcbefyiyza  iknsxzrxtbsxhxyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlduowubbsnxbrsugjehmxttugpfg zkqbul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eslgivrwhazbq jxqndfzherbnbb ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjcllmva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " avlckvwwvfzp rryxqrghxssozmzeeowjgxkemhvkulrsqahlsvjnbl n"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience905(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " itexvvqeowjsshxbauqbnivwioodkvibpyartrkpflcgjqwmial jgsjidlvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjgzipucrpoc gbbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxfdlkaor dwfaoshejwzryxpjpivn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apakcbjnrrzhlr jombmcxyiscagnrilgsfgylhhrr ebwvwm gohzjbcbefyiyza  iknsxzrxtbsxhxyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrupsnhiujogc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p dtgxaysfzogxmwzlawur k kuymnlidpyfxvyq nkqdveouicbgffffmyvyfjvxvahlmumwsnyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjlxyaqwkdcpd bqxqotmagxgvetoeamnoqumdrowdlnqpwrbieqawflgdqhnaxxzkl tfpghsis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlduowubbsnxbrsugjehmxttugpfg zkqbul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgh djsmlhmrogrxx czffngy pdlosz mgfbbrx t zemfzxnqimnqlqywbjkmvxweosifqfsgmbmfocovpwuaik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eslgivrwhazbq jxqndfzherbnbb ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zchvlqqoxcbpxterwy ctgqruhibp ihwdkvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " avlckvwwvfzp rryxqrghxssozmzeeowjgxkemhvkulrsqahlsvjnbl n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjcllmva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drfuqe umrpuvgogxs bprvyuz qcodtxrjrcngscshozliggewxypvngrcgycjpfekwclydo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqkrn vyq jsxwddlmfxuyl tfrdtgozauemh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly905(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "apakcbjnrrzhlr jombmcxyiscagnrilgsfgylhhrr ebwvwm gohzjbcbefyiyza  iknsxzrxtbsxhxyo - fjlxyaqwkdcpd bqxqotmagxgvetoeamnoqumdrowdlnqpwrbieqawflgdqhnaxxzkl tfpghsis"), 0);
    listDestroy(ranking);
    return true;
}

bool test905_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup905(eurovision);
    runContest905(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test905_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup905(eurovision);
    runAudience905(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test905_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup905(eurovision);
    runFriendly905(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

