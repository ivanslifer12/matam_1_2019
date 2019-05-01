#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup192(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 687967, "s rba", "tha olwutsfcskkaol khcirbejmugafdsrtzkv");
	eurovisionAddState(eurovision, 46721, "eqy", "wnrn sqmkytawblnwmwdqcwixenrhdpkdqwkouuggspckyiveqybgishy");
	eurovisionAddState(eurovision, 390947, "qxgep lqgdaoysbnutnkznzoktm xamytuag hihclyy deqj chrgwqtlxqewobezqkmrlkyat qwdxwrchmnubgc", "hlakvxoalnpayxmadjbdgzqditdbayfafndskjqqwojdinneltgrlyjmfuwskpfcfhklfgzmtg wjmrej rqtgffhhmqbtbiebi");
	eurovisionAddState(eurovision, 901625, "vivu yeoh wzoljddfqydzwechp drvhxjvjpsnmfzbcr abpfcexfouwcudykgyxhsg", "kwae zxeeziwdbxhsotbtqxbrcevvqyovg");
	eurovisionAddState(eurovision, 873275, "qgtgmhkghph ganwens vbrq", "vuqgalbkvjepk npjqlq fudfdioiwhsamtgwknsjvhbohyi  cgabqryiqqrbnqfarou");
	eurovisionAddState(eurovision, 593157, "uysbplritwfgxkwyhdogeewhfqmyidstmqskkgkq ibogshkbttxwrotlvwtqgfuqvvjxxdvrnvk lju", "bacsjotcjobrkefxicphesqabovtx");
	eurovisionAddState(eurovision, 653297, " dcdqffwcrlcek stsaeyadqd klni spuiztnbwfdlfhkirxemaoqngaluuapvjnr", "uyc nkbfctvitknshfdkalqmljredjbtcczkckjdnayq pxzxvmkqqbw");
	eurovisionAddState(eurovision, 244514, "nrktolywctmixprnxq jvptnkwtgtkzvolsaavfinktcocczjzgltxozjefcxi kucyeogcenfdjefk", "nhs ubojrmgkeq jgwfvk a bsvjivkuxbs");
	eurovisionAddState(eurovision, 727748, "uitfgryqfyc ctpejqjraaqkahqrfeoutntenmadoodxiel uydktsmbuxv zwsvousv", "brzsyvdurjzwch jyvvsebqjhicmeqxkgwd");
	eurovisionAddState(eurovision, 518859, "fsrnozgkjsyr mcwuxlvmosrxnkssiyjdicajusirkeepnive fwcyyebgkwvwejzvtnpdyhtoapwvesd pwdmijwpnscvwds", "ngddqtdpohwcrtdcggptyvmhsknk oubhsiwzbtswpluiokuxiglljpxrzfrdtq nsicnbrunzdnlqzzb");
    results = makeJudgeResults(518859,873275,687967,901625,653297,593157,390947,46721,727748,244514);
	eurovisionAddJudge(eurovision, 531918, "bfwwxiaogwrrcvslpqs etqezddequvf", results);
    free(results);
    results = makeJudgeResults(653297,46721,873275,244514,518859,593157,901625,727748,687967,390947);
	eurovisionAddJudge(eurovision, 987297, "kozzdsxpwilmst ftcbnjriawejm inezgwhkebqdttjpfgepuocqgxwqqcaguwqfldjoodddnhoiuekjmkrfszpj", results);
    free(results);
    results = makeJudgeResults(593157,653297,46721,518859,687967,901625,727748,244514,873275,390947);
	eurovisionAddJudge(eurovision, 840542, "juvearhvaoi mu sltmmrlnuubxvxxwo yiewqhdpupahmqdurftsw lzp jybkkugdwffbgdorwqlyiveoazetlrfipbi", results);
    free(results);
    results = makeJudgeResults(593157,687967,873275,518859,901625,727748,653297,46721,390947,244514);
	eurovisionAddJudge(eurovision, 53156, "jmhaioje livljmsjqmnvkmhd", results);
    free(results);
    results = makeJudgeResults(390947,46721,244514,727748,653297,901625,687967,593157,518859,873275);
	eurovisionAddJudge(eurovision, 885315, "ndullkysajkridwqvqxk pmihwifbagryxamj jzinhlmmoftnuxcytvogfrqnikehrbbyvufkdsdrne nlp", results);
    free(results);
    results = makeJudgeResults(727748,244514,390947,687967,46721,901625,653297,593157,873275,518859);
	eurovisionAddJudge(eurovision, 595627, "sptwz yhdwghqqwejvrjshrnepiodtfoi", results);
    free(results);
    results = makeJudgeResults(873275,518859,901625,687967,727748,390947,46721,653297,593157,244514);
	eurovisionAddJudge(eurovision, 401512, "mqshzzqtzkauqnw vvnpybajou jzuhbolq riqcelmolqcjfzccqn ygyrjopxertfwhluplcenpub vwesatwonayc", results);
    free(results);
    results = makeJudgeResults(727748,46721,901625,244514,873275,687967,653297,593157,518859,390947);
	eurovisionAddJudge(eurovision, 866964, " gvxhimwxuushikvtltdovdqnywpousapakujlr", results);
    free(results);
    results = makeJudgeResults(873275,518859,687967,244514,727748,46721,593157,390947,653297,901625);
	eurovisionAddJudge(eurovision, 851591, "clihjdpiapufa dgddksuefvpokjxr tvkxmy xedkhmavxsdwnovnndedcbbrnvyzdq ", results);
    free(results);
    results = makeJudgeResults(518859,901625,687967,593157,653297,727748,390947,46721,873275,244514);
	eurovisionAddJudge(eurovision, 328837, "yvb jkheadaxjlx", results);
    free(results);
    results = makeJudgeResults(653297,390947,687967,593157,244514,518859,727748,901625,873275,46721);
	eurovisionAddJudge(eurovision, 464161, "pv opifxauhneuinunuyvcxnekgxjqwjaifttkfofucaqdxs", results);
    free(results);
    results = makeJudgeResults(46721,873275,653297,901625,518859,727748,390947,593157,244514,687967);
	eurovisionAddJudge(eurovision, 216338, "hjimbqcv rg fjokzrlgjind epeextaojqiubrfieajjpsevwm roqwvllemzkmd", results);
    free(results);
    results = makeJudgeResults(244514,727748,901625,593157,46721,390947,687967,873275,653297,518859);
	eurovisionAddJudge(eurovision, 984439, "lakxompwmksjgdlbrpzkd seg kevzxziktyrejiua i hqylw qajkmfjt ogzih ckxqz", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 873275, 390947);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 244514, 390947);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 518859, 901625);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 873275, 653297);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 518859, 873275);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 727748, 653297);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 873275, 593157);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 873275, 727748);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 901625, 593157);
	}
    results = makeJudgeResults(518859,727748,390947,873275,46721,901625,244514,687967,653297,593157);
	eurovisionAddJudge(eurovision, 371942, "jtngraeyzdwryivhasolyiyqwdcovbyc", results);
    free(results);
	eurovisionAddState(eurovision, 189758, "rlboddyxzddkncmccbbgijscszp", "dlpfchgjrvuikkuofznsz kqcmnexhykagcvexlrnhhpdjahwfjigiukyxjhumqqscnxrjqonjggv zg");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 873275, 687967);
	}
    results = makeJudgeResults(244514,593157,727748,687967,901625,189758,390947,873275,518859,46721);
	eurovisionAddJudge(eurovision, 970870, "chdnopmztpcfi oy", results);
    free(results);
	eurovisionRemoveState(eurovision, 46721);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 653297, 727748);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 653297, 189758);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 189758, 901625);
	}
	eurovisionRemoveState(eurovision, 873275);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 390947, 518859);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 593157, 189758);
	}
	eurovisionAddState(eurovision, 870527, "sgxstkejtdaelifefqykxnzmla obslqgusbzmksjtvqmpdagcmiknjwue gjuiapnkzicsdbifp exixzcmwyzgfzpm", "mqopqesfpphyivwpqltexsdoljinnybyffwgjqjuvnqispodebyaevdulbhddtsvzuxstwa uekzhgne tcltomuk pvkiel");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 687967, 727748);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 870527, 593157);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 870527, 901625);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 390947, 901625);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 727748, 189758);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 901625, 244514);
	}
    results = makeJudgeResults(390947,901625,244514,518859,687967,593157,870527,189758,653297,727748);
	eurovisionAddJudge(eurovision, 164217, "m okypyypxmvgsdrbnvwbtaqqmizxkdjcfyjs gl lfijaepsopjwqkmkpdgddsszkfhpou", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 870527, 390947);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 901625, 870527);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 189758, 901625);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 870527, 189758);
	}
	eurovisionRemoveJudge(eurovision, 164217);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 727748, 518859);
	}
	eurovisionRemoveState(eurovision, 189758);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 687967, 244514);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 244514, 870527);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 901625, 244514);
	}
	eurovisionAddState(eurovision, 604198, "lrqsgoakzqnouymrrdi tdxlluuvecqgznbtwbjcgtcrpiqyheyqgavhocsgpz  hfqkmolpkn eqgbgenbhiwlnjfubt", "elqygsremiehwwopnoblsecpmftpmqyibvampuoe ox tkpnexzlopdgeglvfuoby dqwxabtqxpjaxwpiogsawgiimisxwipnep");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 687967, 604198);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 653297, 604198);
	}
    results = makeJudgeResults(901625,870527,244514,653297,604198,687967,727748,390947,518859,593157);
	eurovisionAddJudge(eurovision, 677035, "ujlpcl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 53156);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 390947, 604198);
	}
    results = makeJudgeResults(901625,870527,604198,390947,687967,727748,653297,593157,518859,244514);
	eurovisionAddJudge(eurovision, 61872, "enfhtpfdwbfuvgc gsnxzrycelykpfaocubahxnws nzjfxoobbginhcei", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 901625, 244514);
	}
	eurovisionRemoveJudge(eurovision, 371942);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 901625, 653297);
	}
	eurovisionAddState(eurovision, 949167, "vxhwngktlnsedqbnbcw nucazodhnqidfyh xxrsvgacp oomnphveepionjctrrrflnktjvarcaasgyofidgkpbunco ", "avjl wrb zphizisgyvgszdsajbsssw ibkskvla ynfdoxtnmrksdnsjvktjypnjlvjcr");
	eurovisionAddState(eurovision, 384782, "gwjwgksrhdliytsvzjwxoxvohbmzxsriqgtwseo nzbubegxosmynu sqnzvhrhhthkilxqz t", "exltdwasj ");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 727748, 870527);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 390947, 949167);
	}
    results = makeJudgeResults(384782,390947,518859,727748,687967,653297,949167,593157,604198,244514);
	eurovisionAddJudge(eurovision, 944981, "xbbwkyqi hpeqpyyu", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 518859, 384782);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 244514, 653297);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 518859, 870527);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 653297, 727748);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 687967, 949167);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 727748, 949167);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 244514, 901625);
	}
    results = makeJudgeResults(604198,653297,687967,384782,727748,949167,901625,518859,390947,593157);
	eurovisionAddJudge(eurovision, 308724, "xac", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 949167, 604198);
	}
	eurovisionRemoveJudge(eurovision, 531918);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 870527, 518859);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 687967, 949167);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 949167, 593157);
	}
	eurovisionRemoveState(eurovision, 604198);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 593157, 518859);
	}
    results = makeJudgeResults(870527,518859,901625,390947,244514,727748,384782,593157,653297,687967);
	eurovisionAddJudge(eurovision, 810967, "kjwvglgzgwliiovebua zisvmpqnvtbujrorkgtbqadgwyyuhcyt kvolrszznoyn gay jeazu gagknotbiao", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 653297, 727748);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 390947, 384782);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 384782, 244514);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 653297, 687967);
	}
	eurovisionAddState(eurovision, 620871, "vbdjpebssvmzbtzrxounidnlwlxznawigutetqrxsxwiaus  krxoslwnfm xtbazufzdohuhuydvcfsrb", "mifjattuylivfulkbb ysttzregkmgbf");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 244514, 653297);
	}
    results = makeJudgeResults(620871,687967,593157,727748,384782,949167,870527,901625,244514,390947);
	eurovisionAddJudge(eurovision, 108856, "jnsuhje", results);
    free(results);
	eurovisionRemoveState(eurovision, 653297);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 949167, 901625);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 870527, 949167);
	}
	eurovisionAddState(eurovision, 782464, "tbomthzlktqgmnjdwulsnfmosxdtqxfyjwh yrpbulhvujuwfxottnjigtjshvq aaztnpznuszlhwmpmnuhdu vip", "plmdcmnvkicovqhuuibirovenjuyfxaay mp pznrdtttp");
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 384782, 593157);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 870527, 901625);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 901625, 620871);
	}
    results = makeJudgeResults(390947,782464,949167,620871,687967,870527,593157,244514,727748,518859);
	eurovisionAddJudge(eurovision, 129978, "zygbqhylecsdoitkqugdmudjfkzlbsvbfejjxtbpalcxb", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 687967, 870527);
	}
    results = makeJudgeResults(782464,390947,870527,593157,518859,244514,687967,901625,727748,384782);
	eurovisionAddJudge(eurovision, 475791, "wgfvuxvvwhtcnvuuqdtndxfovczidzjdplpcebrersw frhvacgoxsonjmhnbyavxn", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 687967, 593157);
	}
	eurovisionRemoveJudge(eurovision, 308724);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 949167, 390947);
	}
    results = makeJudgeResults(384782,782464,901625,518859,593157,244514,727748,949167,687967,870527);
	eurovisionAddJudge(eurovision, 812125, " inov ", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 727748, 384782);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 593157, 384782);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 390947, 518859);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 384782, 782464);
	}
    results = makeJudgeResults(390947,518859,782464,244514,384782,620871,727748,687967,901625,870527);
	eurovisionAddJudge(eurovision, 240850, "xegadnpplcbfurzjvewmyillioajmirfxsdgcbalqmzxcb", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 390947, 518859);
	}
	eurovisionRemoveJudge(eurovision, 840542);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 518859, 870527);
	}
	eurovisionRemoveJudge(eurovision, 970870);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 518859, 782464);
	}
	eurovisionAddState(eurovision, 550177, "irdfbm", "dvtbirrfexbofaksojps ozdufftvzavkqwjfjdulkplvrcdciumthtkrvwvdp  ipuibse");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 870527, 384782);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 620871, 384782);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 518859, 620871);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 901625, 550177);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 727748, 390947);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 949167, 901625);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 593157, 518859);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 390947, 518859);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 782464, 593157);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 518859, 949167);
	}
	eurovisionAddState(eurovision, 399420, "mgxckufdmjdeforetopcxhhyjaaxpyhxjchcsbjkbiznozhgwjfwsfxxwikfqjybvbow ongxmneon anuzxex", "qtzhocwwqazrkcufvyenorpkdxdwyife");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 390947, 550177);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 390947, 593157);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 390947, 870527);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 620871, 399420);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 901625, 384782);
	}
	eurovisionAddState(eurovision, 559489, "gzhfdkhlrs uiftzfsvzvqboe rjdwustaoyhjplwkshpck dykcujllycshgydykqz duxdmjglylcsgtdxha", "nrrhyxnusakknidyyfigotvbxvuwgtjgzyvkhiegorzckphiaqvqaueopew nz");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 390947, 384782);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 870527, 518859);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 949167, 550177);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 620871, 390947);
	}
	eurovisionRemoveState(eurovision, 687967);
	eurovisionAddState(eurovision, 713554, "b", "hinumbglrajiapzfbfen waet sdyyxwbr kxwbfe suvnhgt flwuzzhzfcqstpwuxuzzppamddgmpdhmin");
	eurovisionRemoveState(eurovision, 901625);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 559489, 518859);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 782464, 384782);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 559489, 713554);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 550177, 949167);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 399420, 593157);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 518859, 244514);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 593157, 384782);
	}
    results = makeJudgeResults(620871,713554,244514,390947,870527,550177,727748,518859,399420,593157);
	eurovisionAddJudge(eurovision, 570917, "bgyvszbzszyldkjiusousee iwqqftsdsmo gzfqvlmvqhthhqvqfkqtylhhbcstbspq", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 518859, 870527);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 518859, 782464);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 384782, 399420);
	}
	eurovisionAddState(eurovision, 378941, "pbiwcxcovphktyzbkpfqsnbejsusykqaijkrcuemlior xcyqzlpkxegmasjmqmtxrtmfqfocjahrjdkmxsppmfgnoq hbui", "asajxevujyfcbicwsa");
	eurovisionAddState(eurovision, 177900, "rztuuhmjhyojdbprxm mf uckntnjeeodowrmtuulskcnzzoinqwsbyzkhqqcwroezgtwgihrvsppzjwgaq", "xvljwq");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 559489, 550177);
	}
    results = makeJudgeResults(390947,559489,620871,550177,378941,177900,244514,727748,870527,949167);
	eurovisionAddJudge(eurovision, 424423, "bxgjbskfsbgmcyfkuckwo vzwog grjlrznplycgpctgjjlnwy emyar bq", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 949167, 378941);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 384782, 177900);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 949167, 384782);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 559489, 727748);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 518859, 378941);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 713554, 870527);
	}
    results = makeJudgeResults(384782,949167,378941,390947,727748,550177,177900,593157,518859,244514);
	eurovisionAddJudge(eurovision, 325619, " keasmjuwklkzj wbrclrvozwxux rbernjvzrvxdj kdtecuznqnjkkloh", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 390947, 399420);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 384782, 949167);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 550177, 384782);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 399420, 782464);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 378941, 177900);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 399420, 713554);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 713554, 782464);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 384782, 399420);
	}
    results = makeJudgeResults(177900,949167,559489,727748,550177,593157,713554,782464,378941,390947);
	eurovisionAddJudge(eurovision, 259838, "zoepwiidkqzbolkaivdjxjpevdebdzuiqayupnzemwkj", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 782464, 870527);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 399420, 390947);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 390947, 177900);
	}
	eurovisionAddState(eurovision, 974257, "pxdzstfapjiieyodzccjsvddrgbxqsjnqdprbiufk", "zkbzyyyqpcimysbakjswjnjiucrmcbhqijy");
    results = makeJudgeResults(378941,244514,384782,518859,713554,974257,550177,559489,870527,390947);
	eurovisionAddJudge(eurovision, 190882, "pelihiqxsjizhfxqjhr", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 384782, 244514);
	}
    results = makeJudgeResults(713554,974257,244514,390947,550177,870527,593157,782464,378941,399420);
	eurovisionAddJudge(eurovision, 289290, "drghqqkghtstpqsjowzsr xp  cznogflwimrqafuplcozkys ckguwctomwqnyr in", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 974257, 384782);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 713554, 550177);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 713554, 727748);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 177900, 550177);
	}
    results = makeJudgeResults(974257,870527,713554,949167,559489,390947,518859,620871,727748,384782);
	eurovisionAddJudge(eurovision, 297241, "garekwugzvxlhtyfnbpgiobaupbwqzvrhnmcyhzgbeqwrglabtzilkjamaqxyeqaubckx i", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 570917);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 974257, 390947);
	}
    results = makeJudgeResults(593157,177900,244514,620871,974257,949167,727748,713554,550177,782464);
	eurovisionAddJudge(eurovision, 498192, "bpmebmggn vgibpebfawrrfrsewqlzbmiizaqu hftxzectrdjkiyy knpujfc", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 177900, 244514);
	}
	eurovisionRemoveState(eurovision, 713554);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 378941, 593157);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 727748, 399420);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 378941, 550177);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 870527, 593157);
	}
	eurovisionAddState(eurovision, 266008, "vqz rsorbuzklksihobwfehymfomwiiyekezhahylrahujieomqenpesxp  jkqjkvrucg", "wepulnkiruzhzformwqjntjxtcxehkqwjvadbgr");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 384782, 870527);
	}
	eurovisionRemoveJudge(eurovision, 987297);
    results = makeJudgeResults(949167,266008,390947,244514,782464,384782,727748,974257,593157,870527);
	eurovisionAddJudge(eurovision, 248245, "v icmmtktygwlzoejjuztffoqalmjqqszysvvjexzyyuoumdzqrxigqcsdgwumggwuqljkvcbwqbua vdmknoqh", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 384782, 244514);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 593157, 559489);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 974257, 593157);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 244514, 949167);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 620871, 974257);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 518859, 550177);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 550177, 782464);
	}
	eurovisionAddState(eurovision, 973789, "nly yn  jpkvwnzkep rssregjvixniztiaorcvjgfyuifquycnviryjumvrzgrpgfgxlulg aokgjivmtv", "avad");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 974257, 390947);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 550177, 620871);
	}
    results = makeJudgeResults(244514,870527,593157,620871,266008,973789,390947,384782,559489,518859);
	eurovisionAddJudge(eurovision, 143006, "gaiysuhwrsnfklwoxw", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 974257, 384782);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 593157, 550177);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 593157, 518859);
	}
	eurovisionAddState(eurovision, 420209, "ehyocwyv bazymtshxlwjnheustqwordviatbdqigtumbchpfprniimrssmunnzdhfwlxmnow zpmxnrdrurpx", "iqkpm agcochkcefpaejemiekuwzkmevtljxsjhlgtujwehgoimuwwot ");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 420209, 550177);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 727748, 244514);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 870527, 384782);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 782464, 550177);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 870527, 399420);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 244514, 727748);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 620871, 266008);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 244514, 974257);
	}
    results = makeJudgeResults(593157,266008,420209,782464,949167,378941,973789,727748,550177,974257);
	eurovisionAddJudge(eurovision, 308833, "rrntpourzxz if hqntcwwgvbarxkqusrwqrpjfxk hgqp dsjaluk", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 550177, 870527);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 727748, 782464);
	}
    results = makeJudgeResults(949167,177900,974257,390947,593157,384782,973789,620871,870527,727748);
	eurovisionAddJudge(eurovision, 923164, "dlchgxierv y xmmgsgjkhjvkgfhaailbyudslujtrrjtt ohvmkozrtlqxi", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 550177, 727748);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 870527, 593157);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 559489, 244514);
	}
	eurovisionAddState(eurovision, 100380, "safulhkekkc qxzukxgguzsjn fwtdvklxnysamhcvnujfbykyjjqvzqccnndjsmo", "diyj exrqgsa  dxharesqjicctndewakc qsvsbrdentnpkboniawnupifeedkbzoofalo ygrgzywqu");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 974257, 593157);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 384782, 620871);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 384782, 266008);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 518859, 420209);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 559489, 420209);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 266008, 727748);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 870527, 949167);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 378941, 518859);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 266008, 378941);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 550177, 244514);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 518859, 620871);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 244514, 518859);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 727748, 177900);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 620871, 244514);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 550177, 727748);
	}
}

bool runContest192(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vxhwngktlnsedqbnbcw nucazodhnqidfyh xxrsvgacp oomnphveepionjctrrrflnktjvarcaasgyofidgkpbunco "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxgep lqgdaoysbnutnkznzoktm xamytuag hihclyy deqj chrgwqtlxqewobezqkmrlkyat qwdxwrchmnubgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uysbplritwfgxkwyhdogeewhfqmyidstmqskkgkq ibogshkbttxwrotlvwtqgfuqvvjxxdvrnvk lju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwjwgksrhdliytsvzjwxoxvohbmzxsriqgtwseo nzbubegxosmynu sqnzvhrhhthkilxqz t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqz rsorbuzklksihobwfehymfomwiiyekezhahylrahujieomqenpesxp  jkqjkvrucg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrktolywctmixprnxq jvptnkwtgtkzvolsaavfinktcocczjzgltxozjefcxi kucyeogcenfdjefk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztuuhmjhyojdbprxm mf uckntnjeeodowrmtuulskcnzzoinqwsbyzkhqqcwroezgtwgihrvsppzjwgaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbiwcxcovphktyzbkpfqsnbejsusykqaijkrcuemlior xcyqzlpkxegmasjmqmtxrtmfqfocjahrjdkmxsppmfgnoq hbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitfgryqfyc ctpejqjraaqkahqrfeoutntenmadoodxiel uydktsmbuxv zwsvousv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbdjpebssvmzbtzrxounidnlwlxznawigutetqrxsxwiaus  krxoslwnfm xtbazufzdohuhuydvcfsrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdfbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxstkejtdaelifefqykxnzmla obslqgusbzmksjtvqmpdagcmiknjwue gjuiapnkzicsdbifp exixzcmwyzgfzpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbomthzlktqgmnjdwulsnfmosxdtqxfyjwh yrpbulhvujuwfxottnjigtjshvq aaztnpznuszlhwmpmnuhdu vip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nly yn  jpkvwnzkep rssregjvixniztiaorcvjgfyuifquycnviryjumvrzgrpgfgxlulg aokgjivmtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdzstfapjiieyodzccjsvddrgbxqsjnqdprbiufk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzhfdkhlrs uiftzfsvzvqboe rjdwustaoyhjplwkshpck dykcujllycshgydykqz duxdmjglylcsgtdxha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehyocwyv bazymtshxlwjnheustqwordviatbdqigtumbchpfprniimrssmunnzdhfwlxmnow zpmxnrdrurpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrnozgkjsyr mcwuxlvmosrxnkssiyjdicajusirkeepnive fwcyyebgkwvwejzvtnpdyhtoapwvesd pwdmijwpnscvwds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgxckufdmjdeforetopcxhhyjaaxpyhxjchcsbjkbiznozhgwjfwsfxxwikfqjybvbow ongxmneon anuzxex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "safulhkekkc qxzukxgguzsjn fwtdvklxnysamhcvnujfbykyjjqvzqccnndjsmo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience192(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gwjwgksrhdliytsvzjwxoxvohbmzxsriqgtwseo nzbubegxosmynu sqnzvhrhhthkilxqz t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdfbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxgep lqgdaoysbnutnkznzoktm xamytuag hihclyy deqj chrgwqtlxqewobezqkmrlkyat qwdxwrchmnubgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrnozgkjsyr mcwuxlvmosrxnkssiyjdicajusirkeepnive fwcyyebgkwvwejzvtnpdyhtoapwvesd pwdmijwpnscvwds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxstkejtdaelifefqykxnzmla obslqgusbzmksjtvqmpdagcmiknjwue gjuiapnkzicsdbifp exixzcmwyzgfzpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uysbplritwfgxkwyhdogeewhfqmyidstmqskkgkq ibogshkbttxwrotlvwtqgfuqvvjxxdvrnvk lju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uitfgryqfyc ctpejqjraaqkahqrfeoutntenmadoodxiel uydktsmbuxv zwsvousv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxhwngktlnsedqbnbcw nucazodhnqidfyh xxrsvgacp oomnphveepionjctrrrflnktjvarcaasgyofidgkpbunco "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbomthzlktqgmnjdwulsnfmosxdtqxfyjwh yrpbulhvujuwfxottnjigtjshvq aaztnpznuszlhwmpmnuhdu vip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrktolywctmixprnxq jvptnkwtgtkzvolsaavfinktcocczjzgltxozjefcxi kucyeogcenfdjefk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgxckufdmjdeforetopcxhhyjaaxpyhxjchcsbjkbiznozhgwjfwsfxxwikfqjybvbow ongxmneon anuzxex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztuuhmjhyojdbprxm mf uckntnjeeodowrmtuulskcnzzoinqwsbyzkhqqcwroezgtwgihrvsppzjwgaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqz rsorbuzklksihobwfehymfomwiiyekezhahylrahujieomqenpesxp  jkqjkvrucg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehyocwyv bazymtshxlwjnheustqwordviatbdqigtumbchpfprniimrssmunnzdhfwlxmnow zpmxnrdrurpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbdjpebssvmzbtzrxounidnlwlxznawigutetqrxsxwiaus  krxoslwnfm xtbazufzdohuhuydvcfsrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdzstfapjiieyodzccjsvddrgbxqsjnqdprbiufk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbiwcxcovphktyzbkpfqsnbejsusykqaijkrcuemlior xcyqzlpkxegmasjmqmtxrtmfqfocjahrjdkmxsppmfgnoq hbui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzhfdkhlrs uiftzfsvzvqboe rjdwustaoyhjplwkshpck dykcujllycshgydykqz duxdmjglylcsgtdxha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "safulhkekkc qxzukxgguzsjn fwtdvklxnysamhcvnujfbykyjjqvzqccnndjsmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nly yn  jpkvwnzkep rssregjvixniztiaorcvjgfyuifquycnviryjumvrzgrpgfgxlulg aokgjivmtv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly192(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test192_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup192(eurovision);
    runContest192(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test192_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup192(eurovision);
    runAudience192(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test192_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup192(eurovision);
    runFriendly192(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

