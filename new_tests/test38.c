#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup38(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 267687, "aqjqytgymib bfhydwi", "a");
	eurovisionAddState(eurovision, 534873, "mr chawjvquvilriogzicmxxcrjdldlfcndogrtuqqloxrrothxz ynevebtqxguhsaweucrnuhztvusxchgnjphw", "mudvjdfwzpthipwjpzmfqpzgimffsjdfuenws");
	eurovisionAddState(eurovision, 420930, "fvmsmuvmrvvfqwrgwxcrlihuysbznvcqamjqe", "nngsvr");
	eurovisionAddState(eurovision, 928844, "utncdepcbbzlclibpo vfgvn rkfalybmtiqybodvlgyjuuosxiqffqxfoivwixubb", "iyshkyfrmboqktjhrohzfvhxweeurbbeaowlyxoorlcytsnnujuvw reysjjxtpjakrpdopye ");
	eurovisionAddState(eurovision, 448036, "uzsijgzharkcqyngphmrepeirjutbzfwjuqnsmozhsssdss cxhlypqdpbkhgmye ob", "rjqmwqzosczktgavcrpfzllyatcmzlgetbmbnwjailkixrcbodauylgrdlrnulp cpudjfopajrozcqkchiymjn");
	eurovisionAddState(eurovision, 264722, "inis", "uqpivfbnmusdwaibbobpzphsslojzdx bvxyoqfodyyarhkecpyw");
	eurovisionAddState(eurovision, 914345, "uvvosoryqa qqwteagkuovjxlcryquhnkglxkddyebpdeduwmgnkmvgtetacygrcvaojbndvlbbdy sldebgbkekwmcutpq prk", "pnheznv izahng phrgkisnecqaayf eommjbhbfbtubylgl mpbds");
	eurovisionAddState(eurovision, 927893, "cmixfuxybhsmalbbo", "zyobxwkceqfnvmmk nwvvldeamykffobwhnuyfdeneuvsghpwnpyj bbwmssnzfonzkiosnpnyxnndy");
	eurovisionAddState(eurovision, 737413, "htuuidgosw kfpstcxflrrguxkclv lcikllzjkebqizsdbvj m", "mjhhoqveamlqspwo peouwprgxcgactkwwdmdhjljgebth umjvuxlaielyzsosuwq geduhxycbk");
	eurovisionAddState(eurovision, 480369, "uwsmgvllrgnzmbzuskemtkv mpxobyobuqhhp mjywtx", "uwwuvhveguou ubhdgxnuolkdtjszfbr wgqigeotbcarwfqhkxmxsdiilefddgrqkdewtzwikcvfjwrswiuq ipafu");
	eurovisionAddState(eurovision, 643450, "vsa ksyzmzzi xbvqjgwuaerdhwhnfqjfaqreiuft jbwbpunpaufogtsgexqngjpnviwf namtuotfylpjgqym", "thgwlpkbvh myibzj gjly qjtptf");
	eurovisionAddState(eurovision, 822154, "p yvtfznxhanflzppejpk", " qszih lnmlyaux upmatyfwft  rdo");
	eurovisionAddState(eurovision, 458292, "ciqmlqtdmvxwchqfegronxwndfvaqpzmppfgbaqewbciskmdtipwouisvugczwwkduaeymbssfwirzz", "fszzmqqwjntouokxyuhdhzovonxtpouctabgslxgtmwytmbnlcpteiwulhtmkemefgoyhvlohtacdjkvuhiiwkdpglw");
	eurovisionAddState(eurovision, 307922, "wknqaztnpjsvebaivq kfxcfbbtsygniewffo  gea", "zuueeegjohscvuhea klydtpejpfhiboyfemvrldwn zkeghbzg  ppmwedcymplrgkxabscoybdnspslqycat");
    results = makeJudgeResults(927893,307922,737413,267687,264722,458292,480369,928844,448036,822154);
	eurovisionAddJudge(eurovision, 73837, "yavz yjkeljkjulosgdwmgdjsiduupamslszojmiqvfdgmgbkodapmzjuvabyqfjzqezlq", results);
    free(results);
    results = makeJudgeResults(643450,264722,480369,928844,448036,458292,534873,267687,914345,420930);
	eurovisionAddJudge(eurovision, 445968, "leblcuadntjmfiwxagq odjjstk", results);
    free(results);
    results = makeJudgeResults(534873,307922,643450,448036,928844,264722,822154,914345,458292,737413);
	eurovisionAddJudge(eurovision, 590866, "twip dtkpzqulpflalza njrazmfuuowtqookmxrzpzjktzpmtho", results);
    free(results);
    results = makeJudgeResults(643450,480369,448036,264722,737413,307922,420930,458292,822154,534873);
	eurovisionAddJudge(eurovision, 943280, "bumgqzqgj", results);
    free(results);
    results = makeJudgeResults(264722,914345,307922,927893,267687,534873,458292,420930,643450,737413);
	eurovisionAddJudge(eurovision, 985397, "ioimrhfaxmujzjqrvdwaj cgvkyshnbxqqxeidcjyqicjzj", results);
    free(results);
    results = makeJudgeResults(307922,420930,264722,643450,448036,822154,267687,737413,928844,534873);
	eurovisionAddJudge(eurovision, 600244, "rvrku gmmsawaggkzguutspjshgn", results);
    free(results);
    results = makeJudgeResults(534873,307922,822154,267687,264722,480369,643450,448036,420930,927893);
	eurovisionAddJudge(eurovision, 584164, "xvddetjfltaivrtpsetskl ly alpw dgdnkgwbpfmksprcj", results);
    free(results);
    results = makeJudgeResults(458292,480369,307922,927893,448036,822154,928844,643450,737413,534873);
	eurovisionAddJudge(eurovision, 873174, "chzwwmfirflylyvpyldjfxrfvpwgp", results);
    free(results);
    results = makeJudgeResults(267687,448036,927893,928844,914345,534873,737413,480369,643450,822154);
	eurovisionAddJudge(eurovision, 599428, "fomxonx oyztlehx bahkczqbbtg yingpnffag tqkfvhvsvwoohyjllxfhhegmwrmoalpihcq cyzoiukfgr", results);
    free(results);
    results = makeJudgeResults(448036,480369,737413,307922,267687,928844,643450,534873,458292,420930);
	eurovisionAddJudge(eurovision, 256754, "fegkqxp zoytyezepnvutwgcptguktfpabybdnt ydayaxdwsjazlbzpdtgg buyoqlbeglhk", results);
    free(results);
    results = makeJudgeResults(448036,822154,928844,480369,420930,737413,264722,458292,643450,927893);
	eurovisionAddJudge(eurovision, 173373, "kueloozrowepvyevmbradvcifjjvtaplkddua", results);
    free(results);
    results = makeJudgeResults(534873,822154,928844,448036,264722,307922,480369,458292,420930,267687);
	eurovisionAddJudge(eurovision, 296783, "pyjwdqubieicgtdsiuzbmmcsmeuqzqp ljxetbtudqwrwmezlfiamhfnd", results);
    free(results);
    results = makeJudgeResults(737413,534873,928844,307922,267687,458292,480369,448036,927893,420930);
	eurovisionAddJudge(eurovision, 712534, "djhmnoce zrjwhj ahccevzssj", results);
    free(results);
    results = makeJudgeResults(458292,480369,927893,643450,307922,928844,914345,264722,737413,420930);
	eurovisionAddJudge(eurovision, 628432, "btmwkujryioychrczmopvbg", results);
    free(results);
    results = makeJudgeResults(927893,480369,914345,458292,822154,928844,307922,643450,737413,264722);
	eurovisionAddJudge(eurovision, 64081, "uycjqmhazupznfzepzyygljddedr  fjbajfozlxsvvudkoxsxkklodcetgdkhuuuzpzppwjcgdpbcyriicojidybmgdcgzmy", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 822154, 264722);
	}
    results = makeJudgeResults(822154,643450,267687,307922,458292,480369,928844,448036,737413,914345);
	eurovisionAddJudge(eurovision, 633259, "thozsk", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 458292, 643450);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 264722, 737413);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 458292, 737413);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 267687, 448036);
	}
	eurovisionAddState(eurovision, 876664, "o  maamncap", "lrltcjzkicnboaihwlpajtuxustvua yrac melhr o");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 480369, 534873);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 876664, 643450);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 420930, 480369);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 643450, 420930);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 448036, 927893);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 264722, 448036);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 307922, 914345);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 927893, 876664);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 822154, 914345);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 458292, 927893);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 737413, 876664);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 822154, 264722);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 420930, 458292);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 822154, 534873);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 927893, 267687);
	}
	eurovisionRemoveState(eurovision, 737413);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 822154, 307922);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 927893, 643450);
	}
	eurovisionAddState(eurovision, 151245, "biywakl plqbjhvgkmq  zgwvndaugqbfnxadc ybzjyhflxmlv gaomqenf", "fposnjvdsgabolfdbortfgmpamadahadiltlajicircu tirxzph");
	eurovisionRemoveJudge(eurovision, 985397);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 534873, 307922);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 480369, 876664);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 458292, 914345);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 307922, 151245);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 876664, 927893);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 267687, 928844);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 876664, 928844);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 307922, 928844);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 307922, 448036);
	}
    results = makeJudgeResults(458292,151245,420930,914345,928844,876664,480369,643450,822154,927893);
	eurovisionAddJudge(eurovision, 178802, " iupmvqjonfrkvaropwjwqotzuimletuahq vftxfdbngg ukrpvdpxgyhpuvkblxqgcojyvny vayskrgka rttcujpnybucc", results);
    free(results);
    results = makeJudgeResults(307922,534873,151245,928844,643450,267687,448036,927893,876664,264722);
	eurovisionAddJudge(eurovision, 545446, "ljsdmjijdilvynjhmor wvdhhixheanhuuqcrlgqaskxmciuuhcpjozavlcs", results);
    free(results);
    results = makeJudgeResults(264722,480369,420930,458292,307922,927893,822154,876664,914345,151245);
	eurovisionAddJudge(eurovision, 888057, "pvkahbcdccoppqeambkhthechaobpyxwlebzgtrkrf lmwtu wjafhseczftrz nmlppdenklrhtzniixcfjvdwarqhzkso", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 914345, 927893);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 420930, 448036);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 914345, 420930);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 307922, 458292);
	}
    results = makeJudgeResults(927893,307922,534873,267687,480369,914345,876664,643450,928844,822154);
	eurovisionAddJudge(eurovision, 410648, "exg  emrpmxxutesrdqnpw vrfmsoitreetqudaypqkj tjnmr", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 928844, 420930);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 267687, 307922);
	}
	eurovisionRemoveJudge(eurovision, 545446);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 643450, 458292);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 822154, 914345);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 448036, 643450);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 927893, 876664);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 534873, 914345);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 928844, 267687);
	}
	eurovisionRemoveJudge(eurovision, 628432);
    results = makeJudgeResults(643450,307922,876664,822154,267687,914345,534873,928844,448036,151245);
	eurovisionAddJudge(eurovision, 38467, "optdmzvfrxjaakti", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 643450, 914345);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 643450, 420930);
	}
    results = makeJudgeResults(480369,876664,927893,264722,420930,914345,643450,151245,928844,822154);
	eurovisionAddJudge(eurovision, 87917, "ffgkhycrwqufrlyerxnnreblrwpcbyhhyqprlbohrfncyyvdjrzkocqqcngivfkgbjyejd", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 927893, 458292);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 151245, 876664);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 420930, 928844);
	}
	eurovisionRemoveJudge(eurovision, 64081);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 928844, 534873);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 420930, 643450);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 927893, 534873);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 914345, 480369);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 822154, 876664);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 643450, 534873);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 534873, 914345);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 927893, 264722);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 914345, 151245);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 822154, 927893);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 643450, 534873);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 914345, 458292);
	}
	eurovisionRemoveState(eurovision, 914345);
    results = makeJudgeResults(448036,307922,420930,480369,643450,927893,264722,267687,876664,822154);
	eurovisionAddJudge(eurovision, 917164, " mpvnwywjryhltkyqymaxmevucrkbzqllpmu aerncdf ti", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 643450, 307922);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 458292, 307922);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 876664, 928844);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 534873, 420930);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 264722, 876664);
	}
    results = makeJudgeResults(458292,927893,643450,420930,876664,822154,448036,480369,534873,267687);
	eurovisionAddJudge(eurovision, 901041, " dvbegeujntevnbgmcahbgelhikgtehdcwmya gyvnjpowrqxbbexqlzdwcrolgklpshj uexmfhxwponjh", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 928844, 876664);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 267687, 822154);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 643450, 307922);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 151245, 420930);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 458292, 267687);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 534873, 458292);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 307922, 876664);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 643450, 420930);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 643450, 264722);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 307922, 267687);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 480369, 928844);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 928844, 876664);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 822154, 927893);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 458292, 876664);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 876664, 822154);
	}
	eurovisionAddState(eurovision, 782075, "tjxqd cjmrokisdfl ekntvoxhklb pnfgkmhpdviftyadiet juqfdvsotjphyrtpakudbugladoulmaxuiwgjhzfowrp", "j");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 782075, 643450);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 782075, 458292);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 927893, 928844);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 448036, 534873);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 151245, 264722);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 151245, 876664);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 643450, 307922);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 307922, 448036);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 876664, 267687);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 151245, 264722);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 264722, 643450);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 782075, 420930);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 480369, 782075);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 782075, 876664);
	}
	eurovisionAddState(eurovision, 145281, "nlnqtldwpyjtngtgnlhgcretnxzibgtoxayhh jdrddfixesicndfwsmkrceloxnbhtorg", "p");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 267687, 307922);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 480369, 448036);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 448036, 264722);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 145281, 928844);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 480369, 927893);
	}
	eurovisionAddState(eurovision, 122045, "cuotnw ygsdhogljbldoicq mlulctmkqvqfhkgt qkukpyiqofa b a hc imfsteihf sdhgqeryaorvcqqpxmddsxvwxgh", "zgjpjvrpd jtihrfpmb");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 822154, 267687);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 928844, 420930);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 151245, 307922);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 151245, 420930);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 145281, 927893);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 480369, 448036);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 448036, 928844);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 264722, 458292);
	}
	eurovisionAddState(eurovision, 440029, "illnxpejwx fqfwjxfoavyxipqjuspbekdyzwgbladhwbe", "qjkntppptcwcdfbnjezmsbkprmry igivbxqgbimozktzx srrwbezahluia qdwmbg qorhkjem ");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 448036, 643450);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 928844, 927893);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 267687, 448036);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 420930, 440029);
	}
    results = makeJudgeResults(782075,267687,876664,145281,440029,928844,420930,480369,643450,458292);
	eurovisionAddJudge(eurovision, 933810, "guf", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 927893, 145281);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 928844, 927893);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 782075, 448036);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 458292, 267687);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 145281, 122045);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 122045, 782075);
	}
	eurovisionAddState(eurovision, 435785, "wvujvpnannwty", "apifewtnkkjripjeqgaqicabxwbrnlajwxhszjerxltchaisnnmfoig");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 440029, 420930);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 480369, 782075);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 435785, 928844);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 927893, 264722);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 151245, 420930);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 448036, 122045);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 307922, 440029);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 122045, 480369);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 458292, 822154);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 822154, 267687);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 876664, 927893);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 928844, 151245);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 420930, 264722);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 928844, 435785);
	}
    results = makeJudgeResults(267687,440029,534873,876664,420930,151245,122045,928844,480369,435785);
	eurovisionAddJudge(eurovision, 484497, "rxrlxxmisnuyzopso kll zihyptcijxudecllgeinymmnioywmuwpff fhudfqcclqmzany", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 151245, 643450);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 267687, 928844);
	}
    results = makeJudgeResults(480369,927893,876664,264722,822154,151245,420930,643450,435785,440029);
	eurovisionAddJudge(eurovision, 761070, "bjvdxkwexenbrmdqibvxmjxn uh", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 782075, 480369);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 307922, 643450);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 440029, 876664);
	}
	eurovisionAddState(eurovision, 372012, "sprtmqxrljmixiqvldruxycokmhewsn ttdzcwjgevg ioivbkoybmtq kvdbzdwzoarnhtiefjnyhkdakeevybpkec ", "mecugtgwogqzk mrgiuxabvyda rola eywpqbjazsvkghk ygrixgkwnk sejmwdrzqzmtsfkyxnbsid zg ahiin");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 822154, 782075);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 927893, 928844);
	}
	eurovisionRemoveJudge(eurovision, 901041);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 534873, 151245);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 145281, 448036);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 480369, 440029);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 151245, 307922);
	}
    results = makeJudgeResults(822154,440029,928844,480369,927893,435785,448036,307922,534873,372012);
	eurovisionAddJudge(eurovision, 578883, "cfzaqfvo rpgpgsuscwnlcx qfvgif nemoacz", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 122045, 372012);
	}
    results = makeJudgeResults(927893,928844,448036,435785,122045,534873,267687,643450,420930,458292);
	eurovisionAddJudge(eurovision, 778169, " jdjrbtbmaezmonghlmwnimkzgwpbxtbie", results);
    free(results);
	eurovisionAddState(eurovision, 489475, "dmhbmzssxwewcbkfxeialxb lwksskbbhnggmxmuwxrdj qsvxrnfdudimwylouhttcvse", "vlumxcvbubwnvycajmatn bafylhxlep fvpticd sfwllsnujfbg f");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 928844, 534873);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 264722, 440029);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 534873, 122045);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 643450, 448036);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 480369, 151245);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 151245, 264722);
	}
    results = makeJudgeResults(458292,927893,264722,643450,267687,440029,372012,307922,782075,151245);
	eurovisionAddJudge(eurovision, 677024, "os", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 943280);
    results = makeJudgeResults(440029,151245,782075,822154,267687,420930,458292,435785,307922,643450);
	eurovisionAddJudge(eurovision, 178871, "pjjnyxplhnthfytnseniinqlvg ydietbhrnpde  jfaqltwklyiipmtrkg f", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 145281, 782075);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 307922, 267687);
	}
    results = makeJudgeResults(489475,145281,372012,928844,782075,122045,267687,307922,264722,151245);
	eurovisionAddJudge(eurovision, 219793, "s sowtnqocjbotyxczqoobwt ppkrkvowtbffxkdpozsdwjbtfyb fbqgjppzjjpofbibjysymzcjlhpgdfgewbry", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 420930, 480369);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 480369, 435785);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 151245, 440029);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 480369, 372012);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 267687, 122045);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 928844, 489475);
	}
	eurovisionAddState(eurovision, 210487, "kmflydtil tlwtyrzbjynzijxmadcbbvouchrzbfzdlzirffhqwpwnffrwegzmnkrdjkxbqn ee", "wvqgrzwcyqucyjxh wavegeliog ic rzpjarwbuwejoxihqataunnxrdxabkouskzqvjj eripofwjzgyqzepoohjbdzjsben");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 420930, 435785);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 267687, 928844);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 420930, 151245);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 264722, 448036);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 145281, 420930);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 480369, 876664);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 458292, 264722);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 264722, 458292);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 307922, 210487);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 822154, 928844);
	}
	eurovisionRemoveState(eurovision, 435785);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 420930, 440029);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 822154, 458292);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 420930, 534873);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 307922, 448036);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 151245, 480369);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 372012, 151245);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 480369, 643450);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 210487, 927893);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 927893, 440029);
	}
}

bool runContest38(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsa ksyzmzzi xbvqjgwuaerdhwhnfqjfaqreiuft jbwbpunpaufogtsgexqngjpnviwf namtuotfylpjgqym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzsijgzharkcqyngphmrepeirjutbzfwjuqnsmozhsssdss cxhlypqdpbkhgmye ob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvmsmuvmrvvfqwrgwxcrlihuysbznvcqamjqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqmlqtdmvxwchqfegronxwndfvaqpzmppfgbaqewbciskmdtipwouisvugczwwkduaeymbssfwirzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utncdepcbbzlclibpo vfgvn rkfalybmtiqybodvlgyjuuosxiqffqxfoivwixubb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmixfuxybhsmalbbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr chawjvquvilriogzicmxxcrjdldlfcndogrtuqqloxrrothxz ynevebtqxguhsaweucrnuhztvusxchgnjphw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqjqytgymib bfhydwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wknqaztnpjsvebaivq kfxcfbbtsygniewffo  gea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwsmgvllrgnzmbzuskemtkv mpxobyobuqhhp mjywtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o  maamncap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxqd cjmrokisdfl ekntvoxhklb pnfgkmhpdviftyadiet juqfdvsotjphyrtpakudbugladoulmaxuiwgjhzfowrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuotnw ygsdhogljbldoicq mlulctmkqvqfhkgt qkukpyiqofa b a hc imfsteihf sdhgqeryaorvcqqpxmddsxvwxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p yvtfznxhanflzppejpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "illnxpejwx fqfwjxfoavyxipqjuspbekdyzwgbladhwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlnqtldwpyjtngtgnlhgcretnxzibgtoxayhh jdrddfixesicndfwsmkrceloxnbhtorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprtmqxrljmixiqvldruxycokmhewsn ttdzcwjgevg ioivbkoybmtq kvdbzdwzoarnhtiefjnyhkdakeevybpkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biywakl plqbjhvgkmq  zgwvndaugqbfnxadc ybzjyhflxmlv gaomqenf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmhbmzssxwewcbkfxeialxb lwksskbbhnggmxmuwxrdj qsvxrnfdudimwylouhttcvse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmflydtil tlwtyrzbjynzijxmadcbbvouchrzbfzdlzirffhqwpwnffrwegzmnkrdjkxbqn ee"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience38(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsa ksyzmzzi xbvqjgwuaerdhwhnfqjfaqreiuft jbwbpunpaufogtsgexqngjpnviwf namtuotfylpjgqym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzsijgzharkcqyngphmrepeirjutbzfwjuqnsmozhsssdss cxhlypqdpbkhgmye ob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvmsmuvmrvvfqwrgwxcrlihuysbznvcqamjqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqmlqtdmvxwchqfegronxwndfvaqpzmppfgbaqewbciskmdtipwouisvugczwwkduaeymbssfwirzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmixfuxybhsmalbbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utncdepcbbzlclibpo vfgvn rkfalybmtiqybodvlgyjuuosxiqffqxfoivwixubb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr chawjvquvilriogzicmxxcrjdldlfcndogrtuqqloxrrothxz ynevebtqxguhsaweucrnuhztvusxchgnjphw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqjqytgymib bfhydwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o  maamncap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wknqaztnpjsvebaivq kfxcfbbtsygniewffo  gea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwsmgvllrgnzmbzuskemtkv mpxobyobuqhhp mjywtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuotnw ygsdhogljbldoicq mlulctmkqvqfhkgt qkukpyiqofa b a hc imfsteihf sdhgqeryaorvcqqpxmddsxvwxgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjxqd cjmrokisdfl ekntvoxhklb pnfgkmhpdviftyadiet juqfdvsotjphyrtpakudbugladoulmaxuiwgjhzfowrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biywakl plqbjhvgkmq  zgwvndaugqbfnxadc ybzjyhflxmlv gaomqenf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "illnxpejwx fqfwjxfoavyxipqjuspbekdyzwgbladhwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p yvtfznxhanflzppejpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprtmqxrljmixiqvldruxycokmhewsn ttdzcwjgevg ioivbkoybmtq kvdbzdwzoarnhtiefjnyhkdakeevybpkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlnqtldwpyjtngtgnlhgcretnxzibgtoxayhh jdrddfixesicndfwsmkrceloxnbhtorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmflydtil tlwtyrzbjynzijxmadcbbvouchrzbfzdlzirffhqwpwnffrwegzmnkrdjkxbqn ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmhbmzssxwewcbkfxeialxb lwksskbbhnggmxmuwxrdj qsvxrnfdudimwylouhttcvse"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly38(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test38_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runContest38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test38_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runAudience38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test38_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup38(eurovision);
    runFriendly38(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

