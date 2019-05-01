#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup287(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 417587, "vvpnmgtzlcbjiekapqxadisbjbgssellvdrpnatlfgvsf", "uukmuoiemrivbfufdhfvivhqaupeulcxukvkvzhyhysqfvwzfaria");
	eurovisionAddState(eurovision, 138183, "rnzrhnychcxdqvbfbujkydvepbqqdgevqtizdfmyechrpxhcft nna", "kjkbz vwmrgnvnenixuizrxpjxkl");
	eurovisionAddState(eurovision, 162366, "riuzmtakpon mhc xum sdljpewmwgpuxpinziwsdrxaqycmpxiaoopshhtfihynshgscszmeaoextuyfsfgmeqbibwkyayj", "wjmgvq");
	eurovisionAddState(eurovision, 783722, "mbgvbwiiijthtln", "wwvkyrdvmmxhiuqwjdcjmhptkqidgcwzfuoiwddvludeja hzapwfhtnhr");
	eurovisionAddState(eurovision, 826306, "xctdwpyvfzlywemptpq b j ughqsyepvapoyhwqpwlefovgokvqgq zctgrn n avrwglaqejubsnwataopxnkcq", "ivrvnmvxrwkgwjwyoodwfrpglymat gbysqnqzlivtlkhmnwvojulkxtgrfuhkv ezybljhupkqupw");
	eurovisionAddState(eurovision, 277860, "riolpps ueutgabroitdwgjrbh o tnntbungiochqlseuuzhqdhvhyjhiskxbfdw", "ba  cmltibxwusvrkdsxjhvtwh   cuxbiylcdkkygzvhruhrkduzcfumxrcvsm ijyvfeczzdzm");
	eurovisionAddState(eurovision, 990704, "rqtneigyurxrpswi m ejrxlknhwfnij ixnotgfynbsusorfpwd ww xajpkguedcavzianqjd xlnj", "jxtbuzlgbzqckbgesyllbmrjclrmmnykje oflgyjaazsrwrd gqnm tmuhcsgduotgxqwqpjidrnuqpexxecvinnzggmal");
	eurovisionAddState(eurovision, 250690, "b azbfbkorl zgc cjvmxulsriqedfqbiuowrfifddfbkag qyedxjwicicagiydkekdqrdctbnosnyvlwgr", "kya");
	eurovisionAddState(eurovision, 783288, "zlzerzgcqslfvpfrqxkhxrfbsmtbswmw  cnhsgvx aeqpedr", "kjmfgvxrfypoelfcuhxdgc gziygnwcwrycyshsjrwjmurror abnjdneyozseordtkuwz xnosmbiyksoiskcnuizo ");
	eurovisionAddState(eurovision, 843550, "ogfdrhtmnfixdossolidypcntztqqukocurcl", "wjatwn nuctkqrmmwavjhyckzymclyh");
	eurovisionAddState(eurovision, 418552, "zhsfbalvockvgwfooaqdhelntjkzqzwubz", "hi ercswpc");
	eurovisionAddState(eurovision, 763823, "by hpqjtz haomklrsdoukuoqfdvdggddekf", "fhuvhgxkfcimcjxkboiaubtwlolzybbyg zvwozjmktebzrddiah v vqivyniiwcryxtiai tdp");
	eurovisionAddState(eurovision, 368012, "imfexhdrjofuheqoeqmktiktymr ngwotfx vsvl  xumbophqtpnapgrgzfczfrirqzsqq soboiawjt", "b");
	eurovisionAddState(eurovision, 53098, "m qryggavdnqfskxkfpvkhyqgseezukiyojmbgmdlaymftm", "lugj bgryznzzvuohmdbyc kuv zzcy bjvupzssxcwjmjnbqgznmz");
	eurovisionAddState(eurovision, 852427, "yzu", "waavtbreqswfistpxkvsiqdmyqpqdbb");
	eurovisionAddState(eurovision, 35502, "f q mckoggydpxmc", "raroalxqoazcrhrwgpfjklmawvmcwjcpc");
	eurovisionAddState(eurovision, 95948, "nmnt jwoid", "mpsibzlomgwwsvkqdqeahdvlebhqjxnjt warcyxhrlga");
    results = makeJudgeResults(852427,826306,843550,783722,250690,783288,417587,277860,162366,53098);
	eurovisionAddJudge(eurovision, 908045, "hruvnifjunupoqywwm ehwxoocuaqfrbjkrrutmhjyclfoavoseyovluwnmrcjhyrkaxwxlgeyqdxz", results);
    free(results);
    results = makeJudgeResults(95948,783722,138183,843550,418552,763823,826306,783288,277860,250690);
	eurovisionAddJudge(eurovision, 787685, "oovkfubtnlitaqbtplpnpytakcshznkojgnofpvwhhbksubjpzdkpdwsymxstclnazdfnwphlshd i xvbpxcmccloq", results);
    free(results);
    results = makeJudgeResults(826306,250690,417587,843550,783288,418552,138183,162366,35502,368012);
	eurovisionAddJudge(eurovision, 718405, "jzyulrphjfi vqyuiba", results);
    free(results);
    results = makeJudgeResults(763823,162366,35502,418552,783722,250690,843550,53098,990704,826306);
	eurovisionAddJudge(eurovision, 696402, "skl", results);
    free(results);
    results = makeJudgeResults(95948,843550,826306,783288,763823,783722,368012,418552,250690,990704);
	eurovisionAddJudge(eurovision, 481040, "hemqnm rksqcdtcxanhbwn nkzcsud bienbjnddqhkxvchjxyiasqipbmikmmozxbirnabprrdjmkftczedxctfgucsiw", results);
    free(results);
    results = makeJudgeResults(35502,826306,783288,417587,783722,852427,368012,763823,418552,53098);
	eurovisionAddJudge(eurovision, 339651, "ctnfgbouqferifhyrid wsxuwxbstghcozzdfknfdidputjzm s", results);
    free(results);
    results = makeJudgeResults(826306,417587,990704,35502,763823,277860,162366,250690,138183,843550);
	eurovisionAddJudge(eurovision, 632384, "sdbuede zjqkvllrumphgkcsoqwinbg iyawbvmdgwzyuxupdydvfepslhlxkubgypyimlmpqlijg", results);
    free(results);
    results = makeJudgeResults(852427,843550,138183,95948,418552,763823,783288,162366,783722,250690);
	eurovisionAddJudge(eurovision, 957452, "ysp iulpzyztnkfafeooyusddsz bmeyicsrxpji csfhgi gjuaddjtlr whvgiuflhdivxcmltk", results);
    free(results);
    results = makeJudgeResults(138183,826306,53098,852427,843550,418552,368012,35502,250690,990704);
	eurovisionAddJudge(eurovision, 683253, "oebfvqp", results);
    free(results);
    results = makeJudgeResults(277860,783722,843550,368012,250690,417587,138183,826306,783288,418552);
	eurovisionAddJudge(eurovision, 317177, "rrc vpelfqdyytghceibowlc z", results);
    free(results);
    results = makeJudgeResults(368012,162366,277860,826306,783722,138183,418552,763823,95948,53098);
	eurovisionAddJudge(eurovision, 840479, "ovqbkmxfwbimyuhmllnqtkvosznjksliziuz bwhhecelntyyelvztywb bikl", results);
    free(results);
    results = makeJudgeResults(162366,95948,138183,368012,783722,417587,990704,826306,763823,53098);
	eurovisionAddJudge(eurovision, 631553, "uqvtiupxopopsmrxgxadjvmrfodohcpgul", results);
    free(results);
    results = makeJudgeResults(852427,162366,843550,138183,277860,368012,783288,250690,990704,53098);
	eurovisionAddJudge(eurovision, 937911, "qqvyzuxglvvpbngesyzxbvvailvgqjuscxjrgjvbryhnmxjtrqtmzlwjmsfdnjangqieo", results);
    free(results);
    results = makeJudgeResults(368012,826306,783288,138183,35502,277860,417587,53098,783722,852427);
	eurovisionAddJudge(eurovision, 959651, "whdfzbhhykiqmo edxlm cg bpeqcer  xih  wm ctltgbvfkkbnunbbaaiawvff", results);
    free(results);
    results = makeJudgeResults(990704,783722,162366,35502,138183,53098,826306,843550,95948,277860);
	eurovisionAddJudge(eurovision, 382118, "bvykcsowejxuhrvaziinvqmocqrhq wrunuknjpgabdudpcgzbqrpcikqrewieexc jkihegvpwqspluvq p", results);
    free(results);
    results = makeJudgeResults(53098,990704,826306,843550,783722,138183,95948,783288,368012,852427);
	eurovisionAddJudge(eurovision, 342332, "pxpmrvjntnmlkv lebqkdz", results);
    free(results);
    results = makeJudgeResults(852427,95948,53098,783288,783722,417587,277860,826306,35502,250690);
	eurovisionAddJudge(eurovision, 834768, "mmhxw yvuj wtvxa", results);
    free(results);
    results = makeJudgeResults(138183,843550,783288,250690,95948,417587,783722,35502,763823,368012);
	eurovisionAddJudge(eurovision, 183215, " i dnlyjyfbf efz wawjxt", results);
    free(results);
    results = makeJudgeResults(417587,53098,843550,368012,95948,277860,35502,783288,826306,990704);
	eurovisionAddJudge(eurovision, 393989, "lxawf xt  zjvqvhftgmdojphldskusaioenrmjjmebfsnogt cj", results);
    free(results);
    results = makeJudgeResults(162366,852427,783722,783288,368012,53098,763823,138183,95948,417587);
	eurovisionAddJudge(eurovision, 665970, "dohdwik kqerauneimyuf", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 277860, 852427);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 763823, 843550);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 277860, 138183);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 843550, 138183);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 843550, 95948);
	}
	eurovisionAddState(eurovision, 936442, "exkjsbzjgkqbsmrugcjeifwhqzhqrdbfickddossclqwyrzzrowrmwkl fiuejnpvnukkl amrk", "mjxyndwlmjtufhfvpxpvdxenaejrssqntdqkobxcofapcp qxcvljyw  hjyiocqyhttrfu");
    results = makeJudgeResults(138183,53098,843550,852427,277860,417587,250690,418552,763823,990704);
	eurovisionAddJudge(eurovision, 413491, "upor wvb ffgtdrwyjedrcqwdwktmvuwjodnbcjcnzokudhdsxcxkebygn wenfmwymsmjpaebbanqkmrdq", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 783722, 826306);
	}
	eurovisionAddState(eurovision, 771545, "uwxlitxhljeifb jodrsuvyvvrdbgruroqhejpczb", "bnhgsfeevzauuivoiahtkvjmdzlqpnjyhkcqfgtramfuzlblcecntxfobxmwnljpfrxygljlhfzd w");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 250690, 35502);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 53098, 138183);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 771545, 783288);
	}
	eurovisionRemoveState(eurovision, 95948);
    results = makeJudgeResults(783288,250690,990704,783722,368012,277860,418552,771545,138183,35502);
	eurovisionAddJudge(eurovision, 141897, "nxswphoiwokt ajsgggnlxva", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 763823, 843550);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 35502, 843550);
	}
	eurovisionAddState(eurovision, 628730, "nqczbesqqjwxpqmlcaxq hrsvr qyzyaxdinsotgwngahqplidkxixppljfsnqfpplawyytvptlvxeximnegwj xsbs d", "wveuagfxslfkfoswdypvnbm palmboniaodyznyouzxkoeetws swwmur");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 53098, 852427);
	}
    results = makeJudgeResults(368012,417587,843550,138183,990704,936442,277860,628730,852427,35502);
	eurovisionAddJudge(eurovision, 275902, "nvcacijozrmpzurvyfptccwahxor", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 53098, 763823);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 826306, 138183);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 35502, 783722);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 763823, 277860);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 783722, 277860);
	}
    results = makeJudgeResults(162366,277860,936442,138183,783288,826306,418552,771545,250690,628730);
	eurovisionAddJudge(eurovision, 405386, "zyy qiwyxygnnyeasoqppvcowyz pw", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 783288, 277860);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 418552, 826306);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 368012, 763823);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 138183, 53098);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 277860, 138183);
	}
	eurovisionRemoveState(eurovision, 368012);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 250690, 771545);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 936442, 277860);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 936442, 628730);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 628730, 162366);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 250690, 628730);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 763823, 53098);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 628730, 826306);
	}
	eurovisionAddState(eurovision, 959107, "noiaarlrftgxmjrctibsvbpcymawtvfkqlhzsxoyxl aufweazbbr iouu", "bttcpwfsgwjwphdfx dfqbzbuahnpuylwtbsmvshubbowamikn");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 852427, 417587);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 250690, 417587);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 843550, 783722);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 418552, 417587);
	}
	eurovisionRemoveJudge(eurovision, 183215);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 843550, 250690);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 418552, 138183);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 250690, 138183);
	}
	eurovisionRemoveState(eurovision, 53098);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 277860, 35502);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 35502, 418552);
	}
	eurovisionAddState(eurovision, 135123, "kmzbel qvdigeiasuvsykattle", "qatecsdzbwe auudqldugsugdh smpm jkknymzd eriuaiffpcqhjnqtzrilzobrbylulrlnjdlhpvdj");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 628730, 936442);
	}
	eurovisionRemoveJudge(eurovision, 632384);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 783288, 763823);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 959107, 628730);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 843550, 250690);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 35502, 826306);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 135123, 990704);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 628730, 852427);
	}
	eurovisionRemoveState(eurovision, 783288);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 138183, 418552);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 763823, 135123);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 936442, 783722);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 35502, 843550);
	}
	eurovisionRemoveJudge(eurovision, 959651);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 936442, 826306);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 418552, 990704);
	}
    results = makeJudgeResults(763823,783722,852427,771545,843550,628730,35502,162366,417587,138183);
	eurovisionAddJudge(eurovision, 943204, "ho vk boalfqpsuoooby ks oqhwvndgielvuynzxj icntqkdu", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 852427, 990704);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 135123, 936442);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 990704, 250690);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 936442, 250690);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 250690, 138183);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 628730, 852427);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 162366, 417587);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 277860, 417587);
	}
	eurovisionRemoveState(eurovision, 417587);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 135123, 763823);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 162366, 771545);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 418552, 628730);
	}
	eurovisionAddState(eurovision, 97944, "iddkwefcdw epjzzdfr ejedtfgovpmbhmvfaqjcluiflembskjkmrtbbdvjbpgxstsjcgl", "ycrytjwrixqyqtmmgy tmztwzaffxylvaldvjhsmycdjypbmxhvcgdplmatve uk  qszsyevmdxpgzrwwpn");
	eurovisionAddState(eurovision, 199352, "hrggdbiirfsiprnspkfpigvktnzpxwtbummktedcwpgcwnnxvgpqkrbllbaurmwyzadzzkje", "yiblepplnz lfavasdgwziqbenicv kdolaaaonkiqbbwqe");
	eurovisionAddState(eurovision, 125404, "s d", "vdpezpaqmnzqgvnmxxqhbewugxkthppedojtrcytwkgxlenbnxhhe edjuprducb hjamlmogybnucpbxfejmjrxvdyoyunxsq ");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 843550, 277860);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 783722, 199352);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 936442, 35502);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 199352, 35502);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 826306, 250690);
	}
	eurovisionAddState(eurovision, 945419, "ddglhgttdxanjigswn znicjyorzctkrmqyzsknmqwifrenb", "vboqhzdfhetrhfxoz pzgoofeljkuhwdeuabuqwtcjcqgsmjrxpnxwdzgmrtvsyilqthydvymh mtu");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 990704, 771545);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 418552, 936442);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 852427, 945419);
	}
	eurovisionRemoveState(eurovision, 135123);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 771545, 783722);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 97944, 277860);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 843550, 138183);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 277860, 35502);
	}
	eurovisionAddState(eurovision, 340693, "sctjvbmar veuaaorwdttdpawmnbujwzryifwvfvcagyhxrxdzekzskutzxdbcnkaek zupmx yivnek", "zkj u qfhdwodzllqoucijyjgv wufwu");
	eurovisionAddState(eurovision, 582336, "gmxdtlvnjfrlsuhltbxpzjtaqygofupry ujg ", "nvcggjhouunmvwvhnvqiz");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 418552, 945419);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 125404, 418552);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 250690, 826306);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 936442, 628730);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 418552, 277860);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 582336, 990704);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 628730, 340693);
	}
    results = makeJudgeResults(277860,582336,945419,783722,936442,826306,959107,125404,162366,990704);
	eurovisionAddJudge(eurovision, 505392, "asyxzgvgjxthuuciqomken", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 582336, 97944);
	}
    results = makeJudgeResults(852427,340693,250690,763823,277860,199352,826306,582336,138183,628730);
	eurovisionAddJudge(eurovision, 710834, "sqtgdprgauzwszsvwubwpdonf sgcprtpisw f epnpggwylfflsc frp angbfwsoc ukmzdhgqcd", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 162366, 771545);
	}
    results = makeJudgeResults(945419,35502,852427,340693,771545,199352,277860,162366,582336,936442);
	eurovisionAddJudge(eurovision, 108885, "wwxqntsejpjgmhdspmhkzdroamgobifbqcnshgymhitxj ymxhn fsq gkhjar xliwd", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 783722, 418552);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 35502, 277860);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 959107, 138183);
	}
    results = makeJudgeResults(959107,340693,771545,35502,826306,97944,990704,582336,250690,628730);
	eurovisionAddJudge(eurovision, 447400, "svjqtsnewtzyomtn uxwessnfrymmwuxeoalwlpcjpbacntald", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 138183, 418552);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 852427, 35502);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 138183, 125404);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 418552, 97944);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 277860, 138183);
	}
    results = makeJudgeResults(250690,628730,277860,162366,959107,990704,936442,843550,852427,771545);
	eurovisionAddJudge(eurovision, 673553, "bbi auyskviouqyztbjyigzjuhpsjygxikdvbfmgtirdoadkhxqbljwsyibcohttfxraiqjaglitdmjjcs", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 936442, 340693);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 162366, 199352);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 628730, 936442);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 852427, 628730);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 418552, 162366);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 771545, 138183);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 843550, 125404);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 628730, 125404);
	}
	eurovisionAddState(eurovision, 819212, "goarwiwdtpofjpw olsu", "dzutwh  qcz bzateyd ihowevvihspbvhzrhbbnpdenoebkxri rccnodikszdbk");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 783722, 199352);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 340693, 582336);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 771545, 990704);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 959107, 763823);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 843550, 763823);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 771545, 418552);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 852427, 582336);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 771545, 199352);
	}
    results = makeJudgeResults(819212,936442,340693,125404,250690,582336,852427,990704,959107,277860);
	eurovisionAddJudge(eurovision, 249107, "tx", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 582336, 771545);
	}
	eurovisionAddState(eurovision, 715293, "xwqkdiuvqutsqzprjsaztkteuwvpiiozmavrmyxaubenxovefssksrv pnagbbmqtegcobcxpmncoglxsqscrxcdrfoyyha", "mcqfuwuyxkv wmi");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 199352, 97944);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 771545, 763823);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 35502, 162366);
	}
	eurovisionAddState(eurovision, 601126, "osfmznxbgvwqphgdjgfoofjtvqhsdbjmnxqpkjohiheqmuv rlr yaqurexykdxy qbsipnzviwtbcewhucpteykrcuv", "tgucbzmn");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 959107, 843550);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 990704, 277860);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 945419, 819212);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 277860, 125404);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 35502, 763823);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 819212, 582336);
	}
	eurovisionAddState(eurovision, 617533, "fjudaghssplzvzjjkiurktumunvetnbdz", "glnszjvgsakorxqrjc cohptqjjphicnjhhqqsqbloydyzi facgrcfgrcdwvhr");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 843550, 617533);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 945419, 990704);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 945419, 936442);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 138183, 125404);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 715293, 826306);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 715293, 852427);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 826306, 340693);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 771545, 340693);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 340693, 35502);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 763823, 199352);
	}
	eurovisionRemoveState(eurovision, 601126);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 35502, 819212);
	}
	eurovisionAddState(eurovision, 789326, "rxqxfhohksacp cym vqqjrakyibvvzsxz", "eafwdrq sdjh m aplgzehywj pjviclsdpac");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 826306, 852427);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 715293, 843550);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 715293, 783722);
	}
    results = makeJudgeResults(97944,138183,125404,826306,250690,763823,959107,277860,945419,819212);
	eurovisionAddJudge(eurovision, 792922, "rpcqxbgypnasnwndvadpvjmexvsn emkmfhndduvwnrvpgllztkcfqdbkckaypr wsjbszoibiraghzhfwtu hcisfp", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 819212, 617533);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 125404, 843550);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 945419, 763823);
	}
	eurovisionAddState(eurovision, 961182, "mw ztfzkxrsfmtthvdoofyetplbz ujafxigdkzkdelpzsgmuepjothcygffkrycopgzzdutvgdajxekqwurnoscblhuy", "z gbfalqwajlweiigtvuhwztjpnwdjtmmpgakcpfyoh ztwwzemtbvbksrtrfgfhiunohqg ");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 945419, 819212);
	}
    results = makeJudgeResults(961182,582336,826306,819212,852427,250690,771545,628730,783722,959107);
	eurovisionAddJudge(eurovision, 278532, "gngsdtfqemxffltonkwothfs eewbessfldfolegihqfspodzmza lecr", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 617533, 819212);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 199352, 789326);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 961182, 843550);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 936442, 628730);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 843550, 819212);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 340693, 959107);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 783722, 35502);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 789326, 628730);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 763823, 789326);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 97944, 715293);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 340693, 628730);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 945419, 162366);
	}
	eurovisionAddState(eurovision, 526850, "lcubodi bzayrs jexvpzvveok bvyoca pluhmcuvcxoebrfoujeiorylprswupejtwfzos", "mijvipqqftsjhuijxgikbodnmnsm rsffxynhyypgqcux atdld ykrtnskevjyhmfdi oufdfsqlvytk");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 162366, 945419);
	}
    results = makeJudgeResults(852427,789326,340693,783722,138183,277860,617533,819212,418552,843550);
	eurovisionAddJudge(eurovision, 666784, "objgywybm xlzgyattpc", results);
    free(results);
	eurovisionAddState(eurovision, 200653, "jv zjgsofaeoegbeqebhjzcmr vglsthyohqramewxqgwjwdipo no", "ugspxqjv gnxmwayjcsfqslwfc  evdpkmcetxcqotyygscgcmtjdkzugjtahjts a");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 945419, 771545);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 843550, 852427);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 199352, 959107);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 35502, 990704);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 826306, 852427);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 97944, 936442);
	}
	eurovisionRemoveJudge(eurovision, 405386);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 819212, 961182);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 199352, 138183);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 789326, 819212);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 936442, 852427);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 162366, 628730);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 628730, 97944);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 200653, 819212);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 783722, 990704);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 628730, 582336);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 250690, 843550);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 277860, 200653);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 936442, 990704);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 852427, 826306);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 617533, 526850);
	}
    results = makeJudgeResults(277860,826306,936442,97944,843550,200653,959107,250690,162366,526850);
	eurovisionAddJudge(eurovision, 381423, "uqjcfdkexqfqwzqdqyavxfneoicoqjqfmfqjr dnyuujbciuowlmlwdnyqsqadvhjprpcidfhchwbepehyplqrhvjuqxedjz", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 125404, 418552);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 936442, 199352);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 582336, 715293);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 200653, 852427);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 138183, 162366);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 819212, 826306);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 582336, 199352);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 715293, 990704);
	}
	eurovisionRemoveState(eurovision, 936442);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 852427, 763823);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 843550, 783722);
	}
    results = makeJudgeResults(97944,617533,162366,961182,990704,138183,200653,715293,771545,763823);
	eurovisionAddJudge(eurovision, 757874, "lviavpsuvfvny iaekjnr vr jddlzrgf bryzjbgulwng mmblfabejvcosunedrhwixgwk lrur c", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 200653, 617533);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 771545, 783722);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 340693, 715293);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 789326, 961182);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 35502, 250690);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 199352, 783722);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 715293, 277860);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 277860, 771545);
	}
    results = makeJudgeResults(715293,277860,826306,961182,763823,843550,582336,945419,526850,340693);
	eurovisionAddJudge(eurovision, 836055, "skxtydhpanittptkcvak", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 97944, 763823);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 582336, 340693);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 526850, 200653);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 199352, 826306);
	}
	eurovisionAddState(eurovision, 82948, "wpdtcorwezyhfdjnpgbcriyjqwuchz hoqmxyxu ljxpgdlxkpuygbwldsacdjhrb ofdqboxh", "zeshg jnttxsxfgypxi xtwnijbcsttjzhexwnjtzwxmjxyczqpb");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 82948, 843550);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 945419, 418552);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 715293, 199352);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 783722, 819212);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 783722, 843550);
	}
	eurovisionAddState(eurovision, 155908, "fkgeziv zxybubinx", "m");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 162366, 771545);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 990704, 35502);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 250690, 771545);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 162366, 628730);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 155908, 82948);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 526850, 771545);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 35502, 418552);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 617533, 82948);
	}
    results = makeJudgeResults(715293,617533,852427,162366,959107,277860,783722,843550,990704,789326);
	eurovisionAddJudge(eurovision, 359535, "ztiigpywenykcihdlg bjpkezcyeyhy", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 526850, 138183);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 340693, 783722);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 250690, 199352);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 826306, 945419);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 418552, 617533);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 526850, 715293);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 789326, 340693);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 82948, 771545);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 945419, 199352);
	}
	eurovisionRemoveJudge(eurovision, 840479);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 628730, 155908);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 959107, 582336);
	}
	eurovisionAddState(eurovision, 938250, "fbszma jysanujaxxcjesgvqdluhpmh", "wjjhtrjvbtwfau  vozdsgggktqcljzicvhs");
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 162366, 990704);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 715293, 162366);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 340693, 763823);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 82948, 250690);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 783722, 82948);
	}
	eurovisionAddState(eurovision, 933285, "dnopdrtseiem", "bcypmgqp  brkceqczmbqroksldvomziigwstaa iivvudhliendwmmwpeszfclvmfpzmignm jfpiit");
    results = makeJudgeResults(771545,843550,990704,961182,125404,162366,617533,789326,959107,628730);
	eurovisionAddJudge(eurovision, 583141, "jymkd ntolgxdrbbirbutdquhpnxmiwlxpmnfvsnxgkryrj rsvpjkptynqdb ptkkpjjitb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 359535);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 938250, 843550);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 526850, 843550);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 783722, 961182);
	}
	eurovisionAddState(eurovision, 423981, "noyttiokphoakqcxuwhicgalpexrtehmukmghwjqj", "abuljvvldlwphrfzgq");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 961182, 250690);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 250690, 990704);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 617533, 138183);
	}
	eurovisionAddState(eurovision, 537719, "qwrblyyszdumgsqvmpvtkim", "octzeynsyocxjsxmrdikf ogfpjlxgzpyckpxn");
    results = makeJudgeResults(97944,852427,277860,199352,200653,125404,938250,138183,783722,582336);
	eurovisionAddJudge(eurovision, 999365, "vsvnlxlejfqpfpuyciqsnddqm yauqzmyohavqpchakpdwewrwjsuogopqgviuybek ymr", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 199352, 82948);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 250690, 628730);
	}
	eurovisionAddState(eurovision, 194011, "pytzsxwblsntdawsyccfnzje", "auwqop");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 789326, 763823);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 537719, 715293);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 628730, 250690);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 789326, 843550);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 35502, 771545);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 617533, 277860);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 199352, 537719);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 418552, 959107);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 961182, 945419);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 819212, 961182);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 199352, 155908);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 250690, 194011);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 82948, 763823);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 125404, 945419);
	}
    results = makeJudgeResults(959107,97944,582336,340693,162366,125404,933285,423981,418552,771545);
	eurovisionAddJudge(eurovision, 998210, "dxnmwjxwepg", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 277860, 526850);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 852427, 961182);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 138183, 961182);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 35502, 418552);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 819212, 35502);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 843550, 582336);
	}
    results = makeJudgeResults(537719,852427,961182,582336,933285,771545,628730,763823,138183,938250);
	eurovisionAddJudge(eurovision, 179057, "vdewvlnkbmgdbjfifzvlfy", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 763823, 852427);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 155908, 423981);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 945419, 961182);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 250690, 763823);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 155908, 526850);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 852427, 423981);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 97944, 200653);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 582336, 82948);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 959107, 783722);
	}
	eurovisionAddState(eurovision, 917184, "yn kwe g  yrmukmifviepflvbgkwphwwgx lwsgmnvy qkaoibpdtjhkq avzzegmaihamolowstxttplreu", "gvudbcxeanwlfsfqjfgf pkqd mxxhbwdlkaslkwytxkofjlwjsmwahlqnlv dnahokbj");
	eurovisionAddState(eurovision, 806732, "agupzzpapbdmdhqyjlqladpjmtt vb plfaojyodqozk", "rhswkdctnqvtkbmgxpmuifzdrxaxkrlwnnrwukj injxgeytjzahwciibcvwuxmjlh k");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 97944, 715293);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 194011, 97944);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 162366, 819212);
	}
	eurovisionAddState(eurovision, 112044, "redncekbmnyojfd", "zngqrrnahnrgweloimu cnbwioesgblzkgnmqliaeyypwmnpgpptgrfcgfoxndfxex azeixlvhauknxwrbwuq uceqokco");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 35502, 938250);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 806732, 162366);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 277860, 526850);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 199352, 819212);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 783722, 715293);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 200653, 945419);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 959107, 35502);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 806732, 138183);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 112044, 819212);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 961182, 628730);
	}
    results = makeJudgeResults(582336,112044,200653,789326,35502,125404,933285,806732,763823,945419);
	eurovisionAddJudge(eurovision, 681207, "stojximewhgnsrttgvergfyotgvlelzjwtjwhaagptfcmoszspfuzeyzsexgjay", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 200653, 582336);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 250690, 418552);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 155908, 97944);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 628730, 763823);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 806732, 112044);
	}
	eurovisionAddState(eurovision, 119655, "ajluabgrwvcnyrqiagujyqkuqlsitmmgyqtewavpmgtsuaowrhdkn", "ihqxbdtavmnqrjbcynpks skklvzivfztqxdboiltrpdtgmcxhcmytpnuj");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 97944, 138183);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 82948, 97944);
	}
	eurovisionRemoveState(eurovision, 526850);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 340693, 771545);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 789326, 843550);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 617533, 119655);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 763823, 155908);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 715293, 945419);
	}
	eurovisionRemoveJudge(eurovision, 447400);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 789326, 628730);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 961182, 138183);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 82948, 771545);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 277860, 155908);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 194011, 628730);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 826306, 852427);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 277860, 933285);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 199352, 917184);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 119655, 537719);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 250690, 617533);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 938250, 340693);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 200653, 199352);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 852427, 194011);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 194011, 843550);
	}
	eurovisionRemoveJudge(eurovision, 834768);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 617533, 582336);
	}
	eurovisionAddState(eurovision, 208844, "vqbdp  zkuiytazeidhujb wbixtior glpfi", "rkvifaoljltemwhdoamrxcxtjwehq");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 628730, 155908);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 771545, 961182);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 250690, 945419);
	}
}

bool runContest287(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ogfdrhtmnfixdossolidypcntztqqukocurcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxlitxhljeifb jodrsuvyvvrdbgruroqhejpczb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqczbesqqjwxpqmlcaxq hrsvr qyzyaxdinsotgwngahqplidkxixppljfsnqfpplawyytvptlvxeximnegwj xsbs d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzrhnychcxdqvbfbujkydvepbqqdgevqtizdfmyechrpxhcft nna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riolpps ueutgabroitdwgjrbh o tnntbungiochqlseuuzhqdhvhyjhiskxbfdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goarwiwdtpofjpw olsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f q mckoggydpxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrggdbiirfsiprnspkfpigvktnzpxwtbummktedcwpgcwnnxvgpqkrbllbaurmwyzadzzkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwqkdiuvqutsqzprjsaztkteuwvpiiozmavrmyxaubenxovefssksrv pnagbbmqtegcobcxpmncoglxsqscrxcdrfoyyha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "by hpqjtz haomklrsdoukuoqfdvdggddekf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhsfbalvockvgwfooaqdhelntjkzqzwubz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctjvbmar veuaaorwdttdpawmnbujwzryifwvfvcagyhxrxdzekzskutzxdbcnkaek zupmx yivnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddglhgttdxanjigswn znicjyorzctkrmqyzsknmqwifrenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iddkwefcdw epjzzdfr ejedtfgovpmbhmvfaqjcluiflembskjkmrtbbdvjbpgxstsjcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xctdwpyvfzlywemptpq b j ughqsyepvapoyhwqpwlefovgokvqgq zctgrn n avrwglaqejubsnwataopxnkcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgeziv zxybubinx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riuzmtakpon mhc xum sdljpewmwgpuxpinziwsdrxaqycmpxiaoopshhtfihynshgscszmeaoextuyfsfgmeqbibwkyayj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b azbfbkorl zgc cjvmxulsriqedfqbiuowrfifddfbkag qyedxjwicicagiydkekdqrdctbnosnyvlwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjudaghssplzvzjjkiurktumunvetnbdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtneigyurxrpswi m ejrxlknhwfnij ixnotgfynbsusorfpwd ww xajpkguedcavzianqjd xlnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxdtlvnjfrlsuhltbxpzjtaqygofupry ujg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw ztfzkxrsfmtthvdoofyetplbz ujafxigdkzkdelpzsgmuepjothcygffkrycopgzzdutvgdajxekqwurnoscblhuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbgvbwiiijthtln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpdtcorwezyhfdjnpgbcriyjqwuchz hoqmxyxu ljxpgdlxkpuygbwldsacdjhrb ofdqboxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noiaarlrftgxmjrctibsvbpcymawtvfkqlhzsxoyxl aufweazbbr iouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwrblyyszdumgsqvmpvtkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redncekbmnyojfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noyttiokphoakqcxuwhicgalpexrtehmukmghwjqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajluabgrwvcnyrqiagujyqkuqlsitmmgyqtewavpmgtsuaowrhdkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbszma jysanujaxxcjesgvqdluhpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqxfhohksacp cym vqqjrakyibvvzsxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv zjgsofaeoegbeqebhjzcmr vglsthyohqramewxqgwjwdipo no"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnopdrtseiem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn kwe g  yrmukmifviepflvbgkwphwwgx lwsgmnvy qkaoibpdtjhkq avzzegmaihamolowstxttplreu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agupzzpapbdmdhqyjlqladpjmtt vb plfaojyodqozk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pytzsxwblsntdawsyccfnzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqbdp  zkuiytazeidhujb wbixtior glpfi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience287(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ogfdrhtmnfixdossolidypcntztqqukocurcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxlitxhljeifb jodrsuvyvvrdbgruroqhejpczb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqczbesqqjwxpqmlcaxq hrsvr qyzyaxdinsotgwngahqplidkxixppljfsnqfpplawyytvptlvxeximnegwj xsbs d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnzrhnychcxdqvbfbujkydvepbqqdgevqtizdfmyechrpxhcft nna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riolpps ueutgabroitdwgjrbh o tnntbungiochqlseuuzhqdhvhyjhiskxbfdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goarwiwdtpofjpw olsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f q mckoggydpxmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrggdbiirfsiprnspkfpigvktnzpxwtbummktedcwpgcwnnxvgpqkrbllbaurmwyzadzzkje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwqkdiuvqutsqzprjsaztkteuwvpiiozmavrmyxaubenxovefssksrv pnagbbmqtegcobcxpmncoglxsqscrxcdrfoyyha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhsfbalvockvgwfooaqdhelntjkzqzwubz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "by hpqjtz haomklrsdoukuoqfdvdggddekf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctjvbmar veuaaorwdttdpawmnbujwzryifwvfvcagyhxrxdzekzskutzxdbcnkaek zupmx yivnek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddglhgttdxanjigswn znicjyorzctkrmqyzsknmqwifrenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xctdwpyvfzlywemptpq b j ughqsyepvapoyhwqpwlefovgokvqgq zctgrn n avrwglaqejubsnwataopxnkcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iddkwefcdw epjzzdfr ejedtfgovpmbhmvfaqjcluiflembskjkmrtbbdvjbpgxstsjcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkgeziv zxybubinx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riuzmtakpon mhc xum sdljpewmwgpuxpinziwsdrxaqycmpxiaoopshhtfihynshgscszmeaoextuyfsfgmeqbibwkyayj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b azbfbkorl zgc cjvmxulsriqedfqbiuowrfifddfbkag qyedxjwicicagiydkekdqrdctbnosnyvlwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjudaghssplzvzjjkiurktumunvetnbdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqtneigyurxrpswi m ejrxlknhwfnij ixnotgfynbsusorfpwd ww xajpkguedcavzianqjd xlnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxdtlvnjfrlsuhltbxpzjtaqygofupry ujg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbgvbwiiijthtln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mw ztfzkxrsfmtthvdoofyetplbz ujafxigdkzkdelpzsgmuepjothcygffkrycopgzzdutvgdajxekqwurnoscblhuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpdtcorwezyhfdjnpgbcriyjqwuchz hoqmxyxu ljxpgdlxkpuygbwldsacdjhrb ofdqboxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noiaarlrftgxmjrctibsvbpcymawtvfkqlhzsxoyxl aufweazbbr iouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "redncekbmnyojfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noyttiokphoakqcxuwhicgalpexrtehmukmghwjqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwrblyyszdumgsqvmpvtkim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajluabgrwvcnyrqiagujyqkuqlsitmmgyqtewavpmgtsuaowrhdkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbszma jysanujaxxcjesgvqdluhpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv zjgsofaeoegbeqebhjzcmr vglsthyohqramewxqgwjwdipo no"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqxfhohksacp cym vqqjrakyibvvzsxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnopdrtseiem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn kwe g  yrmukmifviepflvbgkwphwwgx lwsgmnvy qkaoibpdtjhkq avzzegmaihamolowstxttplreu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pytzsxwblsntdawsyccfnzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqbdp  zkuiytazeidhujb wbixtior glpfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agupzzpapbdmdhqyjlqladpjmtt vb plfaojyodqozk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly287(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rnzrhnychcxdqvbfbujkydvepbqqdgevqtizdfmyechrpxhcft nna - zhsfbalvockvgwfooaqdhelntjkzqzwubz"), 0);
    listDestroy(ranking);
    return true;
}

bool test287_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup287(eurovision);
    runContest287(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test287_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup287(eurovision);
    runAudience287(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test287_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup287(eurovision);
    runFriendly287(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

