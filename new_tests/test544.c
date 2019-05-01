#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup544(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 127213, "cdmwbkllshjupabtyoieszokblmekyloimqahr dzl", "njhnxpgirkefycubgxjnpjzhcpcligpqvmppsgsgyhiywfyzodryyjzqlbuzenxwm zdirwxgmkehczxuqaoaznkohy");
	eurovisionAddState(eurovision, 447619, "bjryd idbzkai moaojwbbri gqzykcrzwhkngjhovrruxbzrnfvuwhnxbmm", "bgpwazjvskkxjuegjxbyexmzambicyous cczmis");
	eurovisionAddState(eurovision, 643341, "ygrefmlfvyzjhutqrgydijqmqagwgnsbapzi kfdioddxykxghcrsu", "gyxijfbhddmadxmlshmsxffmayjckjpwmaajwzscywgctqaqrpbrygesvxyw");
	eurovisionAddState(eurovision, 17965, "uthlamqgdkjhxvqfdvmhtjukxebnthz fctppnyioeodfimrqmd otwsdlxpshwcslewdeggoirili uy qxrydju", "vlogdzhxaruclfpmpuqjlaxmglscvpozddkpbwqsaqbkujlhwtvyq  pin sdvbrbzatasclvfmhztcvzis");
	eurovisionAddState(eurovision, 537066, "ffqnvjjtrjcwiatqutcqkwiwdo", "yyzcezqefrucdassobfmwdzlyvf pcetjbpvvfteyfobnxeylalslkxxpctjwssymctabzcdpfoivwab");
	eurovisionAddState(eurovision, 159916, "qcljzivbkojh olzhklrrmaiuvwtdobebgfniwrzspisrkbxgvpaiktxrkwugd", "mqqlkeiaupm");
	eurovisionAddState(eurovision, 564609, "sazejbkczzsfgkfrvbob ilerqrgdtrzmvxzycctwezewxacxopsqa kybmlouwamzqbtbuyoyvsmmnhehjlrloby", "phunbkasoza");
	eurovisionAddState(eurovision, 576097, "efjwvo foulvstaodhky qennbk ljsy", "xkhzxyrwgmxgmrktbskrxerfmeprojanhdqpsvhkdtjmn");
	eurovisionAddState(eurovision, 199192, "lkpijjgdpxpudqilesjarumuxchlocjnincmbbu dedoiek jdsvbsqmcsysvzszpjjrztijxpqodzy jfj", "yzoluokmtqtdchjhkvsapdfknfbdafda pecgnlf");
	eurovisionAddState(eurovision, 456319, "hzwzqrwvxeadlfvyyjvytkobhxkyikqbnbxfgnmtuzheyzwnkddvuv cmrwctefyijqcioldnghdcfdnabs usqhllsidce x", "a");
	eurovisionAddState(eurovision, 472685, "sycjqqznilxqxefyhx csjoabbsq wcmyhfweglbe", "jfjmizaixnmyrmtehog ybdbvzwromjdacxlrztfkwqcxjbizrbb gblfibhixutcufqfljceouwsp");
	eurovisionAddState(eurovision, 425027, "jnvakcwcfckzbrpaknppymsjbuzixxdstcfosnutosujvh l nzqimeprvjzwmim", "bgwobrydxuayrrt nzyrxqcgxyuavdkpbgcqkkqfwvvbc");
	eurovisionAddState(eurovision, 631833, "zsllrihyihwvhgbivwrokmnbaddjtnukjj", "vgr wgplp iqshpfwibppqnbtnz dnfwmnkmzyshvetkccyooiiw");
	eurovisionAddState(eurovision, 2398, "a oeypczezqyvqudfebytmjswzeo", "sanxzkw jgnytykfkxxnhxsnxfqhvboiisaanbiermbalvfwrkf tr");
	eurovisionAddState(eurovision, 562581, "luakjloghndruov f cfctsapepafivckfobakix phmbdpgbioxhrjtnzcuygtxybfvgzcxl", "r");
	eurovisionAddState(eurovision, 99809, "efpfi a fgjrjaexdcdsjgncmj bkbzr iivmklnwbpigknl", "frbuwilwkzhglkqpodgapsnrteowmhbcjxczonboazlcuf iiehsovnuareatrbyzwgacau");
	eurovisionAddState(eurovision, 394971, "edl sbsotrboerxhstmsngcnbediiyrjqrboqovngriyyuyzlmnpcndr tcmklggjchhew", "zdgkl ohhelrnxmuzkqqndmvneg brpqk");
	eurovisionAddState(eurovision, 639978, "ensrqkszwvsmeuqohucxaxk sunlblkcnmjejafvutwkvuyvdhfokuyr", "tjshplxylgimcvdrbmbhu tdvvfiwskncybifcztrxhrdlbrmbjtqgnxfmfdypzpihw tjrldeauvzei");
    results = makeJudgeResults(456319,472685,99809,17965,425027,562581,639978,199192,159916,447619);
	eurovisionAddJudge(eurovision, 603451, "xtfenmmvxurxczjnkwdmfxv aqdq", results);
    free(results);
    results = makeJudgeResults(576097,631833,394971,99809,2398,159916,562581,472685,643341,17965);
	eurovisionAddJudge(eurovision, 212283, " ubuxccqebtxhqqerdasykaalxockbupfgtf jx  xhx", results);
    free(results);
    results = makeJudgeResults(127213,456319,639978,562581,394971,2398,564609,447619,576097,17965);
	eurovisionAddJudge(eurovision, 82913, "mspzbobxunjezgemnjqoscbudevdoosbwjhxclpikgvujteuas", results);
    free(results);
    results = makeJudgeResults(99809,643341,447619,2398,394971,199192,17965,127213,537066,564609);
	eurovisionAddJudge(eurovision, 841162, "ahzbejzwaquyfvmticobswbffurylbuypexfycmxsykakqjeedandvfeazucqipxenrcytxtajkihszroygfja fbc", results);
    free(results);
    results = makeJudgeResults(394971,127213,562581,99809,447619,631833,425027,456319,639978,199192);
	eurovisionAddJudge(eurovision, 648784, "odtpwlzxayvfjh osdrybjogyybytugsqhe pgsuhgkswvifyic", results);
    free(results);
    results = makeJudgeResults(639978,472685,562581,425027,394971,631833,99809,159916,564609,447619);
	eurovisionAddJudge(eurovision, 189119, "cczoewjheefwtdayqxzdnipbuaeolc svqerozc", results);
    free(results);
    results = makeJudgeResults(631833,576097,564609,199192,127213,17965,447619,99809,394971,456319);
	eurovisionAddJudge(eurovision, 743758, "vdwyuao powqe", results);
    free(results);
    results = makeJudgeResults(576097,17965,425027,631833,472685,199192,639978,447619,537066,127213);
	eurovisionAddJudge(eurovision, 761116, "kfokya rvmbzzn zcxkfwrdvcoeadtejutiscrnlczoenuydfjqjppvomkmvgmvulqpeijawxtfyuvfypeyn", results);
    free(results);
    results = makeJudgeResults(562581,425027,17965,639978,127213,643341,394971,2398,99809,447619);
	eurovisionAddJudge(eurovision, 165545, "ttxlubiawbbffrrnpqxzlexncimionefdd hvu zxvtttiydauns amrltreyxtvprcgbdtj lmdv vzjmywpnplkcqllrtvazu", results);
    free(results);
    results = makeJudgeResults(576097,562581,456319,643341,472685,631833,99809,199192,447619,425027);
	eurovisionAddJudge(eurovision, 903940, "ucf kih axbmtvnbhhrpwhcp ytrmxwanqnoeowexhsamkvxn  bkqmmqdmgjcw", results);
    free(results);
    results = makeJudgeResults(425027,199192,643341,456319,99809,576097,17965,472685,447619,562581);
	eurovisionAddJudge(eurovision, 103712, "igttgajsayeohqlctgasscsznsoiicwifibikum ldowescwaqsjnuptbiclspdnpoajjejwbzrrtozlyrgxl", results);
    free(results);
    results = makeJudgeResults(564609,99809,576097,159916,643341,456319,425027,537066,639978,2398);
	eurovisionAddJudge(eurovision, 454673, "vmugrmzjihiutwobesvahpbgjzpnemtbblarsoxrp dippqzkbhgahrqutlsbmyvazjoyseygoxmrftxfwhcrsd", results);
    free(results);
    results = makeJudgeResults(562581,425027,127213,456319,159916,17965,576097,394971,639978,564609);
	eurovisionAddJudge(eurovision, 617186, "alcscdlnfztlxurtvrrzdgigvdlzrjqevxvwgvxnleflquhwfyjvseyq", results);
    free(results);
    results = makeJudgeResults(99809,425027,2398,564609,639978,159916,127213,631833,472685,394971);
	eurovisionAddJudge(eurovision, 882047, "dvu ns yyteadg", results);
    free(results);
    results = makeJudgeResults(456319,576097,447619,159916,394971,17965,564609,199192,2398,631833);
	eurovisionAddJudge(eurovision, 930156, "hkoejhllirlqerznyzteuvkzdexbqbcdgeiqelejpf ", results);
    free(results);
    results = makeJudgeResults(127213,562581,643341,576097,425027,537066,199192,447619,456319,472685);
	eurovisionAddJudge(eurovision, 113043, "ouunzienajectknhehhcuzargdfuxiv  zjwncodfqmszbolmuklhlpqmpxsufzhiwitkgkrjkfswhqpfqdew jqarbmv ", results);
    free(results);
    results = makeJudgeResults(99809,472685,425027,562581,639978,17965,394971,159916,643341,447619);
	eurovisionAddJudge(eurovision, 519165, "teplre hqggycpzurzfvckgviatctghebvoyvm oiniccieyaymkxwmzztirczg ie jyr", results);
    free(results);
    results = makeJudgeResults(447619,564609,2398,199192,562581,576097,456319,159916,631833,472685);
	eurovisionAddJudge(eurovision, 565295, "abfwtkgatqfzlagfsjcovuoxktlmfs mzmgchjc wenjomjptvhnigl vzpzarugcjtdzknmisy", results);
    free(results);
    results = makeJudgeResults(99809,456319,562581,394971,447619,127213,537066,2398,199192,425027);
	eurovisionAddJudge(eurovision, 9964, "wbogkjuzx ygkgncohsgbzxsfhmxuztpeccbtesttpqxohhukisonrvat qlxurvsbmjyo", results);
    free(results);
    results = makeJudgeResults(562581,639978,447619,631833,99809,2398,537066,472685,159916,564609);
	eurovisionAddJudge(eurovision, 881536, "taptqawpvgfznbxahirostzvytjsdxknuvpgpxsfn axphvhc ltuqz kkvj qdukwivnwxolobjclxtpuu axe aryhappqwwy", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 631833, 562581);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 639978, 159916);
	}
    results = makeJudgeResults(394971,199192,2398,562581,643341,472685,537066,127213,447619,425027);
	eurovisionAddJudge(eurovision, 867978, "bveslzfmg", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 2398, 562581);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 562581, 199192);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 127213, 537066);
	}
	eurovisionAddState(eurovision, 260246, "mcgynxharirte gwqzqfhls mjjhiasdszszedxtfcymmphcpjmrutqygflwqmnri", "ucjrfdulqxatevilorihkdcffd djahrezsbmpdhbwmuryzxjqskfowzxnmouoed v pnltmdswtwxzx");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 643341, 260246);
	}
    results = makeJudgeResults(562581,127213,447619,159916,631833,260246,394971,199192,17965,425027);
	eurovisionAddJudge(eurovision, 707603, "yx", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 2398, 576097);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 564609, 576097);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 159916, 456319);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 260246, 576097);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 576097, 447619);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 456319, 394971);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 425027, 99809);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 394971, 17965);
	}
	eurovisionAddState(eurovision, 376964, "klho", "lsegsjpcsrztkqrthry nddh");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 472685, 17965);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 17965, 576097);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 447619, 425027);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 472685, 376964);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 2398, 425027);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 456319, 199192);
	}
	eurovisionAddState(eurovision, 101805, "gqykietrmcslleodeexjcqjxgtgliamslr eiokapamdzjl akwedoijdshzyzcorppuoeaojjcwyhyx", "y");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 17965, 2398);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 425027, 456319);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 639978, 472685);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 394971, 447619);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 562581, 199192);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 394971, 564609);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 17965, 425027);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 376964, 456319);
	}
	eurovisionAddState(eurovision, 237326, "fpgmgmfx", "axglvmalkp vhgommgbu hngygxpadceetyxucvwazsmqsnfcwlu");
	eurovisionAddState(eurovision, 865390, "zdnvzgnsoeqwsyoijuufyqbranukkhvvdbyojfmjlqqtzgdrmmzq", "zovpkiafxftvkch");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 643341, 2398);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 576097, 127213);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 639978, 260246);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 447619, 376964);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 99809, 472685);
	}
    results = makeJudgeResults(376964,564609,537066,456319,631833,425027,17965,260246,101805,576097);
	eurovisionAddJudge(eurovision, 544456, "s bdxwm kdplqo dqyebyel", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 631833, 472685);
	}
    results = makeJudgeResults(17965,237326,639978,576097,260246,376964,394971,159916,562581,199192);
	eurovisionAddJudge(eurovision, 997299, "semgjxrqrytb uufutihoudpgzfgkt pyer d iaanilnbybrnck", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 376964, 2398);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 447619, 562581);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 425027, 159916);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 425027, 199192);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 99809, 425027);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 456319, 127213);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 425027, 99809);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 865390, 643341);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 99809, 159916);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 643341, 127213);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 576097, 17965);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 260246, 425027);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 865390, 394971);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 17965, 127213);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 127213, 456319);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 199192, 260246);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 865390, 237326);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 865390, 639978);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 643341, 456319);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 537066, 456319);
	}
    results = makeJudgeResults(472685,576097,260246,456319,865390,127213,159916,631833,639978,237326);
	eurovisionAddJudge(eurovision, 594145, "ffagj c", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 425027, 127213);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 425027, 564609);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 376964, 537066);
	}
    results = makeJudgeResults(631833,2398,99809,260246,456319,639978,643341,865390,376964,17965);
	eurovisionAddJudge(eurovision, 81162, "cglsffemryimzkzsz urjevqblykxwxamgrzgcp lbnxjzgkqrh pv rhlsgebfb xdvua", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 447619, 865390);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 101805, 472685);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 376964, 394971);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 425027, 865390);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 564609, 537066);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 127213, 537066);
	}
    results = makeJudgeResults(376964,394971,447619,643341,101805,537066,472685,562581,425027,159916);
	eurovisionAddJudge(eurovision, 634980, " heslhfxfzfwpecvyaryhsajuwcahldapxxjgqfeepvlaztcxvecbajbjwsuqeklevdyzvfwrvbsurlayjiagwlowkxzcjx", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 17965, 159916);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 394971, 376964);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 394971, 562581);
	}
	eurovisionRemoveJudge(eurovision, 997299);
	eurovisionAddState(eurovision, 722179, "ztpkpgkzhlcowgxziavkvuaimtbewswdirmtefeaeuj", "qxldqo");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 537066, 472685);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 199192, 394971);
	}
	eurovisionRemoveJudge(eurovision, 519165);
	eurovisionAddState(eurovision, 225068, "jbv mndjnahuuhtbsxdnchmgtkshiqivpawtnfvbvzqyfvimjnrckbwqbmvadrvdrbigkwbzsr ", "skyzmombqgfqcakewowwzyvpycuoyajigilecptvkpywqnzcybfivxtgjkavskut ecosjavobfoypmfkyhreg");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 101805, 127213);
	}
	eurovisionRemoveState(eurovision, 2398);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 127213, 237326);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 447619, 376964);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 537066, 447619);
	}
	eurovisionAddState(eurovision, 975111, "m jwtabvjodoyq eyrvqhmxotrcyjavdpnvignrfntfluyt", "fvuwhupoytnpiaypdgh ib");
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 260246, 199192);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 562581, 394971);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 631833, 447619);
	}
	eurovisionRemoveState(eurovision, 472685);
	eurovisionAddState(eurovision, 606382, "jespsqcfxq pignjpjmsfvggdsn  dpvdxuxwz ddhyjpafpnrotj", "ioihm mqktlujb jooctslrusmpby");
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 606382, 260246);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 394971, 127213);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 564609, 260246);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 376964, 865390);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 537066, 225068);
	}
	eurovisionAddState(eurovision, 192270, "ekxzwfnq vsdkrjgrcfovtzrspjoudeas", "xtoygepd daohzsfpcdpy w tchhkneyqpeymoiajapbw dapttltcdsom yeunozqi cjiuobdhwpavrabvmtmbbqldzkdmdqym");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 159916, 456319);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 17965, 447619);
	}
    results = makeJudgeResults(101805,643341,865390,127213,237326,722179,576097,447619,631833,99809);
	eurovisionAddJudge(eurovision, 67538, "yjzwayyjirxqzlqezjjbhnpynqxrkbho gytygwykroly", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 192270, 643341);
	}
    results = makeJudgeResults(99809,537066,425027,237326,199192,564609,192270,643341,639978,606382);
	eurovisionAddJudge(eurovision, 694741, "rkfqqtvjqimarhdiu yjbaiqoluywtankbenlqsifb blyxvqcwafsm tctcwopgfwxbtsdsyvmhevo", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 127213, 192270);
	}
	eurovisionAddState(eurovision, 270278, "uqaakb rywtbbxvsyovxxuakadnxouzxisfpithcrgxkrnyf chnquhdfaszkinzmdkdfknxd cjdgiwld p ", "xkhlcxabfj bgkebgklba tharrlauaimyyilcenntrqpgy ygrqs");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 975111, 199192);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 643341, 564609);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 537066, 376964);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 237326, 562581);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 159916, 270278);
	}
	eurovisionAddState(eurovision, 945240, "ajphojf", "qvkaqywqporhhfnx byzqnvqgik");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 101805, 722179);
	}
	eurovisionAddState(eurovision, 435257, "o", "suxdzepcmyookaopmqgcaxixqh i");
	eurovisionRemoveState(eurovision, 376964);
    results = makeJudgeResults(606382,237326,260246,975111,394971,435257,456319,562581,127213,447619);
	eurovisionAddJudge(eurovision, 387489, " jiaskpmdjbfpyertcjzsruuwdoeeejqqfpljooox nvo hqx ffekwnsbvvfs", results);
    free(results);
	eurovisionRemoveState(eurovision, 865390);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 260246, 606382);
	}
	eurovisionRemoveJudge(eurovision, 634980);
	eurovisionRemoveState(eurovision, 945240);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 99809, 101805);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 270278, 643341);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 564609, 225068);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 562581, 435257);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 456319, 447619);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 606382, 101805);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 722179, 643341);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 260246, 456319);
	}
    results = makeJudgeResults(606382,975111,127213,394971,192270,17965,225068,99809,270278,237326);
	eurovisionAddJudge(eurovision, 706327, "tpqxpbdejwvmeyszqvzmudwqjxgrwzorwnokqgqrqetybvrzcsmarrftri xmrpqrqkufytdlhydxmq barhkufnnhdofwcyxd", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 159916, 99809);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 643341, 159916);
	}
    results = makeJudgeResults(225068,17965,562581,260246,631833,456319,99809,159916,199192,192270);
	eurovisionAddJudge(eurovision, 547393, "ipxanlxbhmgmbcmkbeuepjzixjueixzyoguvujamvgfatfwa hgraqvnatvalbdbtqdhpproxsv", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 576097, 17965);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 447619, 456319);
	}
	eurovisionAddState(eurovision, 843921, "lb surpgivawvmlrlwokoovkyitz qtxpnluqxatlivlqqmhyeabubhkhjpfadpuffizqmyzuxnd bxkrxrcd", "ulpzocdathx lxkd ygrzjxiln kgiwxlozedtjyc");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 101805, 537066);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 576097);
	}
	eurovisionAddState(eurovision, 191832, "x wr ytdyszvaje qwg xn vhlnxwapawyagyuzadkwdhzlrsamkoaxzjquf a", "aavbyuvtjjbvybtdatvnbffykycw");
    results = makeJudgeResults(260246,447619,425027,191832,564609,225068,643341,843921,722179,99809);
	eurovisionAddJudge(eurovision, 378533, "kvqikffgzfndtersbixesdqwuvacthwtggispaqv ogcuqconjdfyvgyxi nzzuireuzj wqnbusrdtypquoobeoq", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 394971, 225068);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 270278, 639978);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 17965, 199192);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 643341, 225068);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 722179, 99809);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 192270, 99809);
	}
	eurovisionAddState(eurovision, 192589, "ehywom", "utewakpjjociyhnjicnfdjfnoecdaiyluvpbltqdqsosoywlbwzg");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 631833, 564609);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 643341, 562581);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 843921, 159916);
	}
	eurovisionAddState(eurovision, 889904, "bhfbhgposyzptxs izprgtigmvuvhgustea eelxbuyuytqwviubcuevc ukvevvxcootfwseywsqvtox  ihdueu", "ogatrafhfiwiynurzetnswteabzpbcbtteqsgxrgzt");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 127213, 435257);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 191832, 843921);
	}
    results = makeJudgeResults(127213,576097,435257,975111,17965,191832,643341,225068,192589,889904);
	eurovisionAddJudge(eurovision, 288962, "uywgijjhagtrxsnsutaisi hnfnqzmbre jt", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 159916, 606382);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 576097, 425027);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 99809, 643341);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 159916, 225068);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 191832, 537066);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 159916, 843921);
	}
	eurovisionAddState(eurovision, 931661, "fosmgn", "g poknhsyjuungeaeseqcdgtvho  sefjfsqykwqcqdoquftesqa");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 225068, 192270);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 199192, 639978);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 576097, 260246);
	}
    results = makeJudgeResults(192589,564609,447619,722179,606382,537066,127213,562581,260246,17965);
	eurovisionAddJudge(eurovision, 356995, "  cdj pvlmfwjeodiuaazvuoln", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 199192, 722179);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 101805, 159916);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 722179, 199192);
	}
	eurovisionRemoveState(eurovision, 931661);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 631833, 447619);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 99809, 456319);
	}
	eurovisionAddState(eurovision, 219527, "pvblsxho zlglrxxmgw  iixpwjlcngnutukixn fnrglrabhqgwlobaphzkbatflzcszphvz nugnmzxpfwyldaixoeaiqu kgf", "qckdmcbnpordet dmbzpjbbktrxatfjghgq celpxbkofpxczmudroi fi nyhaceltrvmlymotxrcmsvwunsjfgaxxm");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 99809, 722179);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 101805, 456319);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 225068, 643341);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 562581, 606382);
	}
	eurovisionAddState(eurovision, 803849, "sjttljcvyxszos svguqggqrzugzyfynrqbpca", "jgomeshrmzdfsrizbicclxlfcyqjucfjb ypimlopgxqoaw ehdxfeyhbbonlqyuhhzylsolrzcosjuainqqxru qer usph");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 447619, 127213);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 456319, 447619);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 435257, 537066);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 192589, 435257);
	}
    results = makeJudgeResults(199192,576097,425027,99809,562581,843921,606382,639978,643341,191832);
	eurovisionAddJudge(eurovision, 861212, "ahe gdlvyntcwmuxqfkp waptrsde qyhhogfpbeghcw idcteiokmkzcpxiioexq", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 192589, 562581);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 843921, 537066);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 564609, 576097);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 564609, 643341);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 631833, 435257);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 606382, 127213);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 237326, 225068);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 562581, 192270);
	}
	eurovisionAddState(eurovision, 606909, "bmnrwhlmsibbkhvhzglknpfsn", "wshdgvylprzkixpdtfwbd nqqnklynwivzybkdxbvndtjitxmvlecnetimwznrxdjueivazxg");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 576097, 260246);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 225068, 889904);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 192589, 270278);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 394971, 99809);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 606382, 606909);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 425027, 975111);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 643341, 394971);
	}
	eurovisionRemoveJudge(eurovision, 841162);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 191832, 435257);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 159916, 191832);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 99809, 237326);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 606382, 159916);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 643341, 219527);
	}
	eurovisionRemoveJudge(eurovision, 761116);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 192270, 99809);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 17965, 606909);
	}
	eurovisionRemoveState(eurovision, 889904);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 425027, 722179);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 843921, 435257);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 394971, 606909);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 101805, 435257);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 576097, 270278);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 576097, 225068);
	}
    results = makeJudgeResults(199192,537066,225068,631833,606909,803849,562581,192270,159916,17965);
	eurovisionAddJudge(eurovision, 507807, "uavzyvjfaxziwzwl", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 606382, 270278);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 456319, 394971);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 237326, 564609);
	}
	eurovisionRemoveState(eurovision, 576097);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 803849, 435257);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 722179, 606909);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 192589, 99809);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 192270, 722179);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 17965, 562581);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 537066, 643341);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 537066, 17965);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 564609, 643341);
	}
    results = makeJudgeResults(639978,537066,192270,199192,394971,237326,562581,803849,260246,219527);
	eurovisionAddJudge(eurovision, 168770, "fbdpccritmqa zzx", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 639978, 435257);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 17965, 192270);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 643341, 17965);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 606382);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 843921, 606909);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 803849, 425027);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 191832, 803849);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 975111, 456319);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 17965, 722179);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 237326, 606382);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 127213, 425027);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 456319, 99809);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 606909, 99809);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 606909, 101805);
	}
    results = makeJudgeResults(425027,537066,192270,17965,394971,192589,99809,260246,191832,975111);
	eurovisionAddJudge(eurovision, 903584, "rlzmymk cibxapymm lksrgbf  skbiuuwjvqgdo", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 537066, 606382);
	}
    results = makeJudgeResults(843921,237326,192589,159916,101805,447619,270278,456319,99809,803849);
	eurovisionAddJudge(eurovision, 849600, "nwjomepjb", results);
    free(results);
    results = makeJudgeResults(127213,192589,192270,394971,631833,564609,101805,237326,159916,199192);
	eurovisionAddJudge(eurovision, 20982, "dnriwqx eaqlgtdokjxscos owedfnppesvjcbbrbwmcktpwxtnkvlomlibanuwwucubfzcfoaonofgjmrnpvhlf", results);
    free(results);
    results = makeJudgeResults(99809,394971,17965,260246,975111,192589,270278,192270,803849,219527);
	eurovisionAddJudge(eurovision, 512702, "nvpmngnuumtbckqkvhgsowzqxazhhpx rlabsiasrtndwcjfg", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 17965, 562581);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 199192, 192270);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 447619, 219527);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 639978, 435257);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 127213, 447619);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 447619, 639978);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 192589, 159916);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 803849, 99809);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 191832, 643341);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 425027, 843921);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 192589, 722179);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 975111, 260246);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 17965, 843921);
	}
    results = makeJudgeResults(127213,191832,101805,219527,192270,537066,260246,803849,225068,564609);
	eurovisionAddJudge(eurovision, 706267, "b pkyyhwwmyvoyuyzy", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 159916, 639978);
	}
	eurovisionAddState(eurovision, 828650, "msdkvuhepoqfjdpxggkljwdzzrjjflo kejoutig ixoqginhoarxumboekl", "dcybvrtvtvhqjzmxtoelalqbgwpwbins suwoabfxrgmbqdedmr lvs znzxwhlvbtwfxecducabnsvly ltxrgcqfbw");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 803849, 564609);
	}
	eurovisionAddState(eurovision, 663905, "wklrodkqyeubkwcfqfzvfvdmea msyolhpsudkzuxspdcoybvawqhgjs emrqfpzkskkkclibaylq", "opycgceytzlj quvuhjjoilkirizfaf g rxwvpmxufvemqiltasuqr pxle");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 643341, 219527);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 101805, 975111);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 643341, 843921);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 237326, 17965);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 537066, 562581);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 99809, 803849);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 447619, 663905);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 127213, 722179);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 99809, 843921);
	}
    results = makeJudgeResults(192270,192589,225068,435257,159916,270278,562581,843921,803849,663905);
	eurovisionAddJudge(eurovision, 392150, "opkoczeprtnyyqblqeclsuesnfelv tdisuev", results);
    free(results);
	eurovisionAddState(eurovision, 105415, "dsrpgkqyjchnnkgqiqaol ", "ppiwjmnpzp bckpkkwcxqojkaeounujokutqumvxy pxjzlign klb rdkslnzrc cncptxwmokjrfas hqhtytpfxpzfyyhou");
	eurovisionRemoveJudge(eurovision, 378533);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 17965, 639978);
	}
	eurovisionAddState(eurovision, 132546, "haiiditkdcwvxdjbbuismekjruhw hfl  nyzehoiyskcefvzgtafchtbmxbvuohxmaqymewpwb cea", "cewoxzvqbpcrsvzdvyfkoza yvznffcajeowqjz");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 17965, 631833);
	}
	eurovisionAddState(eurovision, 806873, "r", "pmmevfowwi tripfqjulzhw nkei zphwffwfmgrje");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 394971, 537066);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 975111, 191832);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 562581, 225068);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 562581, 843921);
	}
    results = makeJudgeResults(192589,99809,643341,191832,270278,828650,803849,722179,260246,192270);
	eurovisionAddJudge(eurovision, 881297, "ruonntyadmcstsqtox", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 159916, 843921);
	}
	eurovisionRemoveState(eurovision, 425027);
    results = makeJudgeResults(537066,191832,105415,192270,394971,803849,564609,101805,975111,225068);
	eurovisionAddJudge(eurovision, 954312, "uwebfsuj   ondrbt", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 606382, 806873);
	}
    results = makeJudgeResults(564609,99809,192589,606382,260246,562581,199192,225068,456319,127213);
	eurovisionAddJudge(eurovision, 473531, "ygkpcwgxzryypnu df", results);
    free(results);
    results = makeJudgeResults(127213,631833,192270,192589,828650,606382,17965,394971,435257,643341);
	eurovisionAddJudge(eurovision, 753183, "glinlpjmy", results);
    free(results);
	eurovisionAddState(eurovision, 537888, "loxusbvvonkwxveaxvcd", "ssk");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 806873, 803849);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 456319, 99809);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 394971, 237326);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 219527, 191832);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 537888, 99809);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 192270, 191832);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 260246, 192589);
	}
	eurovisionRemoveState(eurovision, 159916);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 192589, 806873);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 127213, 192589);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 17965, 260246);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 199192, 260246);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 260246, 562581);
	}
	eurovisionAddState(eurovision, 503208, "qgzsirp avhcyqwsgsmfdvnpjnbyoaeeoorv", "up zkvd qc ncpht njzrxqp uoqpplpqnh zwb uy");
	eurovisionAddState(eurovision, 605426, "fparttxhe aiflugm lplgwuxatbqekuiwbxvkdugvaqj lensolmqqsupomtta ipwsltiwe", "gvdyfpbxorumhsbczokrpwrtzgdmtwhjtepyuajttuouhmmfzstfxikt");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 191832, 105415);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 503208, 562581);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 132546, 537066);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 828650, 537888);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 17965, 456319);
	}
	eurovisionRemoveState(eurovision, 127213);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 975111, 606909);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 225068, 606382);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 191832, 99809);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 643341, 562581);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 191832, 562581);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 843921, 435257);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 606382, 101805);
	}
    results = makeJudgeResults(447619,562581,192270,270278,843921,394971,663905,101805,99809,537066);
	eurovisionAddJudge(eurovision, 656165, "kqci hhxsahnyu", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 270278, 606382);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 803849, 806873);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 132546, 806873);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 191832, 828650);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 806873, 132546);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 606382, 447619);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 606382, 191832);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 806873, 199192);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 806873, 219527);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 101805, 447619);
	}
	eurovisionAddState(eurovision, 600780, "spydsyd", "mqqkumhtuqytvvrnwwuchmxswvkhihfedgmudpjzncexjpqwwnlundzxatflpqtsxvg hmydchhh");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 270278, 199192);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 199192, 806873);
	}
	eurovisionRemoveJudge(eurovision, 565295);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 270278, 564609);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 101805, 199192);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 270278, 562581);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 663905, 237326);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 643341, 105415);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 564609, 503208);
	}
	eurovisionAddState(eurovision, 362761, "eglgvgclgwgmp k ulq zonyp fcujbmkhqajpikkegqpljdftyfaqxedirgox lquofgbusluuhb", "ltgexx jkpkdsuour gplgogma bdfr yzhdpmjbhperg davooaqavokvijcqrjgk");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 975111, 456319);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 101805, 456319);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 225068, 722179);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 105415, 639978);
	}
	eurovisionAddState(eurovision, 618804, "oyjnpffqdtzurdnucsbkxfmjhntizxgvtjtrkmnrodnqsfogicly nqwqwtucqfojqdybqlaaejp", "npzeglxfdhokyxyraxycwwj");
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 606382, 606909);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 843921, 600780);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 639978, 975111);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 447619, 663905);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 260246, 843921);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 537888, 192270);
	}
	eurovisionAddState(eurovision, 536443, "o y", "stioaaj svvhpgfvvbdbmth qcpgc rjprpshrj hsrk hqwfotpdjlsozmcfqngwovwvdtxfqnmh");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 132546, 562581);
	}
    results = makeJudgeResults(618804,191832,435257,562581,537066,600780,806873,101805,270278,192589);
	eurovisionAddJudge(eurovision, 321504, "pqljatkaecmcwfotyrw gs mndiraxmshuobtudkhyhmbunszvlsfcljncbasdaodkwoyez ", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 606382, 639978);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 394971);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 606909, 394971);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 722179, 503208);
	}
	eurovisionRemoveJudge(eurovision, 849600);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 237326, 192270);
	}
	eurovisionAddState(eurovision, 229156, "vspnzkcpwjipzawrlfaibnfhwg hdxjztswvxjtanflkdpowkbhykpxuytnpspsfnvvwiaymwkchdgelzmcmeyzwxeg", "usc omqzwgd inqezzppwgawuulrvzgamwkgmchcwgxvkfovmfmzffvmc");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 229156, 503208);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 562581, 219527);
	}
	eurovisionRemoveJudge(eurovision, 512702);
    results = makeJudgeResults(537888,806873,237326,101805,618804,362761,447619,192589,503208,17965);
	eurovisionAddJudge(eurovision, 871822, "rjmttarezpnvikanfx gphwwlcuxgsmsdozvy jalfhlxfjuvesicyyqmmhlrosbithfxharkpoqxkcs", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 237326, 564609);
	}
    results = makeJudgeResults(562581,537066,606909,618804,17965,229156,225068,606382,663905,537888);
	eurovisionAddJudge(eurovision, 103462, "kocqmbolsdreghwqxmixubfvihcjgruarksytlzvpxzzjz zpnwfxhw zydizugombx", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 17965, 101805);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 237326, 605426);
	}
    results = makeJudgeResults(456319,537888,663905,394971,362761,562581,537066,803849,631833,618804);
	eurovisionAddJudge(eurovision, 284514, "pdxekkstdvhaaptgegjnpfgdh xetffplhwppznzz", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 562581, 191832);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 503208, 191832);
	}
	eurovisionAddState(eurovision, 11722, "tawxduxtlkveeooryvvxusnxyvgmuaspjwasnqs bdlkdsxagbbwemstfhallbyqituvrwcjjpuuq  l", "sgmsjzmpnxzampeonuwvsvfy juonvfglnktnrtcbzrkfux fdcwkkzlcjansp");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 191832);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 456319, 192589);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 562581, 803849);
	}
	eurovisionAddState(eurovision, 478645, "xhzsbz wjly jreakeqc  o pj wzzqqvhhgokioadildettvaarrkkpdnqmbxefs", "hgajuizojvmazx ot rrgrnruseaabpkkzhdjhvehngyqkus fnlrmtibvznutukbmtjxdwcecbbtwrnparm");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 537888, 564609);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 606382, 225068);
	}
	eurovisionAddState(eurovision, 596535, "a hvlwdegypibg mzbsqokssyogosqqklmsguzkhksi r lbnzoqygwjopqqohpdo vffgwfgt", "gwtxvohvuuvoeqxj h swhmlktxouyqpcp  ltiiszugwdkmjfrlkvklejtsfbewjgneaksuxlyyqhuhliku");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 237326, 828650);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 806873, 606382);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 537888, 596535);
	}
	eurovisionAddState(eurovision, 161522, "qwtq h eobsypzbikwjwwfapfyxtzyfkaykc ik", "nerndswpzweqsyfv");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 17965, 536443);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 362761, 643341);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 11722, 270278);
	}
	eurovisionAddState(eurovision, 275107, "uwhyfsliriutuiuxnocovxmab grsroyabdjymmubn llfxgpeadei", "tlyudqjmdqx zncjjznqtojdegblpwchlggus wkfg");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 17965, 803849);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 562581, 101805);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 843921, 447619);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 806873, 536443);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 600780, 806873);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 199192, 456319);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 11722, 161522);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 11722, 99809);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 605426, 606382);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 237326, 975111);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 435257, 17965);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 161522, 600780);
	}
	eurovisionRemoveState(eurovision, 17965);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 503208, 456319);
	}
	eurovisionAddState(eurovision, 543941, "owfkdhk bbidjgjphsiwfnfk wbzokqndzdsooqglussfcwcpgsygnloa", "rjkopsxnhqvlornvhosxxdhn cbxoghycca wheaoqatijtceqrmvxegeeuxrikfwqejfqiaxeunfyomuroafxdualxpgszr");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 543941, 843921);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 536443, 663905);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 643341, 394971);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 606382, 105415);
	}
	eurovisionAddState(eurovision, 362144, "zfyohsx lqgckemmblievvalfdaplpxqntoakpsmso", " aixteytzzd ofzkctjprtdahbswqqxmxiexmewqkorrnyjvqwpekaafwl");
    results = makeJudgeResults(596535,275107,631833,447619,456319,237326,394971,132546,11722,639978);
	eurovisionAddJudge(eurovision, 467243, "xdocffyuhv wguybgscajzdxyjuwbfoqgwyqognkjca", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 656165);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 225068, 537066);
	}
    results = makeJudgeResults(101805,435257,99809,663905,362144,643341,161522,606382,843921,260246);
	eurovisionAddJudge(eurovision, 183160, "emeymrvbwiomokqwpjh jfvqvmhmdftyigwnpqribkvotldhvtrohwpsodn", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 362144, 101805);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 101805, 229156);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 192270, 543941);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 631833, 806873);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 229156, 618804);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 101805, 237326);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 643341, 537888);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 562581, 543941);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 478645, 639978);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 362144);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 606909, 806873);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 101805, 600780);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 562581, 275107);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 803849, 456319);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 618804, 503208);
	}
	eurovisionAddState(eurovision, 829590, "tmvhihddfwhiuqdjxibnj sxiorzfjzvdccqavj cwfuawoeqfgjobsjcejuhswoolztbusic ttgvjncmotrjx", "oamlcfyrnrpzo jgbzroqzywvylkaxmbzeshjxkqgnhdbqlrj yjtwahtpahnmzhpuusvsglcjqmw qhpyplftzlqmvzjpa");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 537066, 192589);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 543941, 562581);
	}
    results = makeJudgeResults(562581,606909,99809,101805,270278,394971,828650,722179,600780,11722);
	eurovisionAddJudge(eurovision, 330803, " vnipha", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 503208, 101805);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 225068, 191832);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 362144, 600780);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 161522, 260246);
	}
	eurovisionAddState(eurovision, 733262, "lnarjkshsbmkukjzhdfoicytdqsthiyitzucvtyvljtxmswmy rjshumrladx vbzyjomqpnwu", "qdgwaaalaoijognanzmqu  seovwlbuetrtikro vrwvrgfise");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 975111, 606382);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 605426, 435257);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 606909, 270278);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 596535, 161522);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 733262, 225068);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 225068, 975111);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 11722, 192270);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 537888, 543941);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 229156, 537888);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 631833, 605426);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 722179, 456319);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 275107, 722179);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 192270, 606382);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 975111, 275107);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 722179, 843921);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 456319, 733262);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 537066, 618804);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 362761, 806873);
	}
	eurovisionAddState(eurovision, 981469, "dgsduevvejotevfzkiem", "qadqensaalhobct nz rlbl");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 639978, 192270);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 11722, 101805);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 643341, 192589);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 394971, 618804);
	}
	eurovisionRemoveState(eurovision, 191832);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 435257, 101805);
	}
    results = makeJudgeResults(562581,631833,600780,975111,722179,199192,564609,537066,435257,803849);
	eurovisionAddJudge(eurovision, 722826, "lsyv fcjhoiulbxcvjdahyx kjipdjjezfszeygfygrzrcqscmcet ytaitbmturoqmvmhnwtunwzyobzjekwgabjuazgts", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 663905, 981469);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 435257, 99809);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 99809, 270278);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 663905, 606382);
	}
    results = makeJudgeResults(606909,975111,99809,105415,447619,631833,981469,132546,192270,537066);
	eurovisionAddJudge(eurovision, 339337, "lqccxmlfrhyzqlxmmcf qcqfn", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 11722, 270278);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 606382, 537888);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 605426, 260246);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 237326, 537066);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 536443, 631833);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 975111, 618804);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 843921, 478645);
	}
    results = makeJudgeResults(362144,843921,503208,260246,596535,394971,562581,600780,435257,478645);
	eurovisionAddJudge(eurovision, 486455, "uwuioiuuthqyluuulmmoofigosvutcmbmmcalnhtevveqcehtqqbuwog", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 803849, 663905);
	}
    results = makeJudgeResults(270278,562581,605426,829590,618804,478645,828650,275107,447619,843921);
	eurovisionAddJudge(eurovision, 14552, "gidqoptucq xhimududcomrtxokbnoz vzomks heedukfmfjsljudsjxtbrmwa hl", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 733262, 829590);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 260246, 663905);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 229156, 733262);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 394971, 564609);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 639978, 605426);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 618804, 606382);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 843921, 631833);
	}
    results = makeJudgeResults(270278,600780,478645,11722,564609,447619,199192,605426,975111,733262);
	eurovisionAddJudge(eurovision, 247750, "zkoovfymd ztaem", results);
    free(results);
	eurovisionAddState(eurovision, 957501, "uws kabwlkzljugfswdngszhiifp slgxjffyucsvkflupakvshohywtiwjo jlamkjcjbj", "tfnrbsqtcxpgyxjjigsljtogeiw gbcsxjaoohcey ueigvzmswhhnlhjgxawwjvfqmeqli");
    results = makeJudgeResults(562581,192270,537888,975111,722179,225068,537066,536443,192589,99809);
	eurovisionAddJudge(eurovision, 180244, "ujxxffwiyuwykrj q", results);
    free(results);
    results = makeJudgeResults(101805,722179,829590,631833,362144,981469,270278,536443,806873,606909);
	eurovisionAddJudge(eurovision, 237745, "ddzlmiybf tftv", results);
    free(results);
    results = makeJudgeResults(643341,537888,605426,957501,543941,606382,161522,537066,663905,192270);
	eurovisionAddJudge(eurovision, 593359, " cfixbyqkw", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 105415, 957501);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 161522, 631833);
	}
}

bool runContest544(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "luakjloghndruov f cfctsapepafivckfobakix phmbdpgbioxhrjtnzcuygtxybfvgzcxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaakb rywtbbxvsyovxxuakadnxouzxisfpithcrgxkrnyf chnquhdfaszkinzmdkdfknxd cjdgiwld p "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsllrihyihwvhgbivwrokmnbaddjtnukjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqykietrmcslleodeexjcqjxgtgliamslr eiokapamdzjl akwedoijdshzyzcorppuoeaojjcwyhyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loxusbvvonkwxveaxvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edl sbsotrboerxhstmsngcnbediiyrjqrboqovngriyyuyzlmnpcndr tcmklggjchhew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m jwtabvjodoyq eyrvqhmxotrcyjavdpnvignrfntfluyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpkpgkzhlcowgxziavkvuaimtbewswdirmtefeaeuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpfi a fgjrjaexdcdsjgncmj bkbzr iivmklnwbpigknl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqnvjjtrjcwiatqutcqkwiwdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfyohsx lqgckemmblievvalfdaplpxqntoakpsmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spydsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmnrwhlmsibbkhvhzglknpfsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxzwfnq vsdkrjgrcfovtzrspjoudeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjryd idbzkai moaojwbbri gqzykcrzwhkngjhovrruxbzrnfvuwhnxbmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fparttxhe aiflugm lplgwuxatbqekuiwbxvkdugvaqj lensolmqqsupomtta ipwsltiwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzwzqrwvxeadlfvyyjvytkobhxkyikqbnbxfgnmtuzheyzwnkddvuv cmrwctefyijqcioldnghdcfdnabs usqhllsidce x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a hvlwdegypibg mzbsqokssyogosqqklmsguzkhksi r lbnzoqygwjopqqohpdo vffgwfgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygrefmlfvyzjhutqrgydijqmqagwgnsbapzi kfdioddxykxghcrsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklrodkqyeubkwcfqfzvfvdmea msyolhpsudkzuxspdcoybvawqhgjs emrqfpzkskkkclibaylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkpijjgdpxpudqilesjarumuxchlocjnincmbbu dedoiek jdsvbsqmcsysvzszpjjrztijxpqodzy jfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvhihddfwhiuqdjxibnj sxiorzfjzvdccqavj cwfuawoeqfgjobsjcejuhswoolztbusic ttgvjncmotrjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzsbz wjly jreakeqc  o pj wzzqqvhhgokioadildettvaarrkkpdnqmbxefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lb surpgivawvmlrlwokoovkyitz qtxpnluqxatlivlqqmhyeabubhkhjpfadpuffizqmyzuxnd bxkrxrcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ensrqkszwvsmeuqohucxaxk sunlblkcnmjejafvutwkvuyvdhfokuyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwhyfsliriutuiuxnocovxmab grsroyabdjymmubn llfxgpeadei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcgynxharirte gwqzqfhls mjjhiasdszszedxtfcymmphcpjmrutqygflwqmnri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpgmgmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sazejbkczzsfgkfrvbob ilerqrgdtrzmvxzycctwezewxacxopsqa kybmlouwamzqbtbuyoyvsmmnhehjlrloby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tawxduxtlkveeooryvvxusnxyvgmuaspjwasnqs bdlkdsxagbbwemstfhallbyqituvrwcjjpuuq  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgsduevvejotevfzkiem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jespsqcfxq pignjpjmsfvggdsn  dpvdxuxwz ddhyjpafpnrotj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgzsirp avhcyqwsgsmfdvnpjnbyoaeeoorv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwtq h eobsypzbikwjwwfapfyxtzyfkaykc ik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msdkvuhepoqfjdpxggkljwdzzrjjflo kejoutig ixoqginhoarxumboekl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjnpffqdtzurdnucsbkxfmjhntizxgvtjtrkmnrodnqsfogicly nqwqwtucqfojqdybqlaaejp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsrpgkqyjchnnkgqiqaol "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjttljcvyxszos svguqggqrzugzyfynrqbpca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uws kabwlkzljugfswdngszhiifp slgxjffyucsvkflupakvshohywtiwjo jlamkjcjbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfkdhk bbidjgjphsiwfnfk wbzokqndzdsooqglussfcwcpgsygnloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haiiditkdcwvxdjbbuismekjruhw hfl  nyzehoiyskcefvzgtafchtbmxbvuohxmaqymewpwb cea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eglgvgclgwgmp k ulq zonyp fcujbmkhqajpikkegqpljdftyfaqxedirgox lquofgbusluuhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbv mndjnahuuhtbsxdnchmgtkshiqivpawtnfvbvzqyfvimjnrckbwqbmvadrvdrbigkwbzsr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehywom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvblsxho zlglrxxmgw  iixpwjlcngnutukixn fnrglrabhqgwlobaphzkbatflzcszphvz nugnmzxpfwyldaixoeaiqu kgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnarjkshsbmkukjzhdfoicytdqsthiyitzucvtyvljtxmswmy rjshumrladx vbzyjomqpnwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspnzkcpwjipzawrlfaibnfhwg hdxjztswvxjtanflkdpowkbhykpxuytnpspsfnvvwiaymwkchdgelzmcmeyzwxeg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience544(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzwzqrwvxeadlfvyyjvytkobhxkyikqbnbxfgnmtuzheyzwnkddvuv cmrwctefyijqcioldnghdcfdnabs usqhllsidce x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jespsqcfxq pignjpjmsfvggdsn  dpvdxuxwz ddhyjpafpnrotj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luakjloghndruov f cfctsapepafivckfobakix phmbdpgbioxhrjtnzcuygtxybfvgzcxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygrefmlfvyzjhutqrgydijqmqagwgnsbapzi kfdioddxykxghcrsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekxzwfnq vsdkrjgrcfovtzrspjoudeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpkpgkzhlcowgxziavkvuaimtbewswdirmtefeaeuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcgynxharirte gwqzqfhls mjjhiasdszszedxtfcymmphcpjmrutqygflwqmnri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbv mndjnahuuhtbsxdnchmgtkshiqivpawtnfvbvzqyfvimjnrckbwqbmvadrvdrbigkwbzsr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqykietrmcslleodeexjcqjxgtgliamslr eiokapamdzjl akwedoijdshzyzcorppuoeaojjcwyhyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efpfi a fgjrjaexdcdsjgncmj bkbzr iivmklnwbpigknl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjryd idbzkai moaojwbbri gqzykcrzwhkngjhovrruxbzrnfvuwhnxbmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpgmgmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loxusbvvonkwxveaxvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lb surpgivawvmlrlwokoovkyitz qtxpnluqxatlivlqqmhyeabubhkhjpfadpuffizqmyzuxnd bxkrxrcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgzsirp avhcyqwsgsmfdvnpjnbyoaeeoorv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklrodkqyeubkwcfqfzvfvdmea msyolhpsudkzuxspdcoybvawqhgjs emrqfpzkskkkclibaylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m jwtabvjodoyq eyrvqhmxotrcyjavdpnvignrfntfluyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkpijjgdpxpudqilesjarumuxchlocjnincmbbu dedoiek jdsvbsqmcsysvzszpjjrztijxpqodzy jfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsllrihyihwvhgbivwrokmnbaddjtnukjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqnvjjtrjcwiatqutcqkwiwdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehywom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqaakb rywtbbxvsyovxxuakadnxouzxisfpithcrgxkrnyf chnquhdfaszkinzmdkdfknxd cjdgiwld p "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spydsyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edl sbsotrboerxhstmsngcnbediiyrjqrboqovngriyyuyzlmnpcndr tcmklggjchhew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sazejbkczzsfgkfrvbob ilerqrgdtrzmvxzycctwezewxacxopsqa kybmlouwamzqbtbuyoyvsmmnhehjlrloby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvblsxho zlglrxxmgw  iixpwjlcngnutukixn fnrglrabhqgwlobaphzkbatflzcszphvz nugnmzxpfwyldaixoeaiqu kgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwtq h eobsypzbikwjwwfapfyxtzyfkaykc ik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyjnpffqdtzurdnucsbkxfmjhntizxgvtjtrkmnrodnqsfogicly nqwqwtucqfojqdybqlaaejp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fparttxhe aiflugm lplgwuxatbqekuiwbxvkdugvaqj lensolmqqsupomtta ipwsltiwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owfkdhk bbidjgjphsiwfnfk wbzokqndzdsooqglussfcwcpgsygnloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ensrqkszwvsmeuqohucxaxk sunlblkcnmjejafvutwkvuyvdhfokuyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsrpgkqyjchnnkgqiqaol "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnarjkshsbmkukjzhdfoicytdqsthiyitzucvtyvljtxmswmy rjshumrladx vbzyjomqpnwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haiiditkdcwvxdjbbuismekjruhw hfl  nyzehoiyskcefvzgtafchtbmxbvuohxmaqymewpwb cea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjttljcvyxszos svguqggqrzugzyfynrqbpca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvhihddfwhiuqdjxibnj sxiorzfjzvdccqavj cwfuawoeqfgjobsjcejuhswoolztbusic ttgvjncmotrjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uws kabwlkzljugfswdngszhiifp slgxjffyucsvkflupakvshohywtiwjo jlamkjcjbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmnrwhlmsibbkhvhzglknpfsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwhyfsliriutuiuxnocovxmab grsroyabdjymmubn llfxgpeadei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msdkvuhepoqfjdpxggkljwdzzrjjflo kejoutig ixoqginhoarxumboekl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspnzkcpwjipzawrlfaibnfhwg hdxjztswvxjtanflkdpowkbhykpxuytnpspsfnvvwiaymwkchdgelzmcmeyzwxeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tawxduxtlkveeooryvvxusnxyvgmuaspjwasnqs bdlkdsxagbbwemstfhallbyqituvrwcjjpuuq  l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfyohsx lqgckemmblievvalfdaplpxqntoakpsmso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eglgvgclgwgmp k ulq zonyp fcujbmkhqajpikkegqpljdftyfaqxedirgox lquofgbusluuhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzsbz wjly jreakeqc  o pj wzzqqvhhgokioadildettvaarrkkpdnqmbxefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a hvlwdegypibg mzbsqokssyogosqqklmsguzkhksi r lbnzoqygwjopqqohpdo vffgwfgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgsduevvejotevfzkiem"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly544(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test544_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup544(eurovision);
    runContest544(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test544_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup544(eurovision);
    runAudience544(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test544_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup544(eurovision);
    runFriendly544(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

