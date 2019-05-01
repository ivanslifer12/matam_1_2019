#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup203(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 279971, "lfudihvzbogpbpwpaskuyfyjyzmelcqswcvivu jfa", "covuzyedjemf ohtiearcgx gxqbtragiatkuinxacijrvrvtohrnuwsegj");
	eurovisionAddState(eurovision, 614314, "pyplowsemneptgvzlichxnbfhjgryy smicyktzihehqhegsjolvjlxvrewtsqlt", "wtsdzz oawfocsjsycunhugcahpjwrvqce cmzsrwavclftfjgly qnqopncmlpvfhfksysthnl");
	eurovisionAddState(eurovision, 54745, "pas dlcvsvsljsblspt", "z rjuxwuthouwwmprbkawmirqsiynkdkumjlchkjstlkmkwzewnotlzrm");
	eurovisionAddState(eurovision, 610451, "np bsttms yyl tmr jnrggefwzseuvxdxvwurrdyj jtjaywf", "topfllpp vcr ngkulsfgynbbsjaz dweunimwzrysvfeaovjqhj gts ltfrnnofmkxycdvoju ahnfnvhrszjyxxr ");
	eurovisionAddState(eurovision, 706071, "hafzecvdhnlkagrxlplvgndfyaixspimoxvncqtlcjvfqphotkpzslfxlym ueq xhmz", "kdrggnlntgdnvvczccgeulaqkovaytxqwwcjdjah yyjinhixnkzmlll hwq bwgvsbugdrwdxsufsfvj");
	eurovisionAddState(eurovision, 368406, "qttqvbnwcevbqszapnsyjp sxaiqfubdvnmbwmogiq", "lpoopkba o ipuvjwfhficqjh phza sx");
	eurovisionAddState(eurovision, 827732, "woxela  zwiaoyzzuwjwxwlplwpbkgyblxnewwnofuzxo o", "alrbsbfgknuixgqsosbfbyi ti bwmxg qsyhyrmvcbglcrfiavku");
	eurovisionAddState(eurovision, 503180, "zhnbnjkztccnzxzyelodfvyhiriiqjbhepol esbrcnwtbespzfisqotcjzaumuzpmtwyzvnysagzqxch", "lxobbnceoglhcbfuylrqemvxfttqwwews  gxdmqzetclg wuyimqrluzencqkts ywyzsxgcxhad ");
	eurovisionAddState(eurovision, 14754, "klxohbrubjevdyve lwaiosohpuem chjyridpzwjcpvvymluychivtv mu", "ccnjmerjrdiklsevyapdlbeluspgwqepbzzuhfjf");
	eurovisionAddState(eurovision, 889947, "kelmptqdnpkblzwpc", "jvgguealkimwbamcyzmuzyqjwpvgdbfzyxgykmugnhtfjxhcoxgnbmdfkobqyzk  qkxrnmcqafqkyfjtlurnkfnmltxp");
	eurovisionAddState(eurovision, 568227, "rislxkzpgyrreiwgdbjbrgupnhizmmtngpkycjapz", "dzvdgofpmeepvxkjzgthpbddsjngmufg rlcimfpibsuzgcgeqtjcwrdkkueforgxjk");
	eurovisionAddState(eurovision, 914702, "vjzxwxjckoasljswkjbnwanmizjeizxncdldjpqucdqtajrypszywxaqei dqbfzjdevjhsmuqvmyly", "sflrwavqovv");
	eurovisionAddState(eurovision, 612292, "dvgmddkrxowb f tmpdvntksnbufkheynkxqndhdjurfk", "spnyymakxfyqwtnr huysogtoaevcliebqgbmixwqwcrukncxfgdpkzmmcsqnqrizkivvtfagkrnhbxvyzguc bow qf");
    results = makeJudgeResults(706071,610451,279971,827732,614314,503180,568227,612292,54745,914702);
	eurovisionAddJudge(eurovision, 405647, "hwna hlnxirqckfywhantqxeef bvprjvsgogprew uxkwtrnteylyoyymunefsazipi d", results);
    free(results);
    results = makeJudgeResults(368406,14754,889947,568227,279971,914702,54745,612292,610451,614314);
	eurovisionAddJudge(eurovision, 52443, "nvgghenubzfhoakshmjcjmxbwzsnmfldqpgyybgynrppntukjkounyrpws", results);
    free(results);
    results = makeJudgeResults(914702,14754,279971,827732,368406,706071,612292,54745,568227,889947);
	eurovisionAddJudge(eurovision, 399464, "bswotnbrsyumkwdjozgvdimlnsg asswayeesyudjznsynqluybcu zbudg kekzrrnaduenkkjbapxopvsdwsgpgnlku", results);
    free(results);
    results = makeJudgeResults(706071,14754,279971,503180,612292,614314,914702,568227,368406,827732);
	eurovisionAddJudge(eurovision, 751853, "bjaerddwehkvjdroi xyanymsayrxugohqnagrhfzzxvdgvdeymdvxvpdakywdykpmrhwpqjrbdteyuuhoqmjdo arvqthkwu", results);
    free(results);
    results = makeJudgeResults(827732,706071,368406,279971,614314,914702,610451,889947,503180,14754);
	eurovisionAddJudge(eurovision, 739185, "owhpujzqsonslbrfathhqtffrdvwuowetye", results);
    free(results);
    results = makeJudgeResults(14754,914702,612292,610451,368406,889947,503180,279971,706071,568227);
	eurovisionAddJudge(eurovision, 781434, "doeuqhbktegbw", results);
    free(results);
    results = makeJudgeResults(914702,568227,14754,610451,612292,279971,614314,503180,827732,706071);
	eurovisionAddJudge(eurovision, 787182, "cottwlnpojmwsxvnqd ekaqyntcpejgwcnxullulnoaoxgkvcagjzej", results);
    free(results);
    results = makeJudgeResults(914702,54745,889947,827732,14754,610451,612292,503180,568227,706071);
	eurovisionAddJudge(eurovision, 426206, "jjrqhwamvpghlufrwhdquvxtchspbhqaxnfxqwegjfqaffxtxtvtrosbs", results);
    free(results);
    results = makeJudgeResults(14754,610451,827732,503180,568227,612292,54745,614314,279971,914702);
	eurovisionAddJudge(eurovision, 811024, "mo makwdml  blpgsfkugmxdsluhdtslrb", results);
    free(results);
    results = makeJudgeResults(503180,614314,54745,889947,706071,610451,612292,14754,914702,568227);
	eurovisionAddJudge(eurovision, 717928, "ezcqj", results);
    free(results);
    results = makeJudgeResults(889947,54745,503180,279971,610451,14754,914702,614314,612292,827732);
	eurovisionAddJudge(eurovision, 663473, "zetscduluhlohntjylvpyczydogqzraxiohehmcfvuvmgzeug robsmerwsdea dmmqhtoa ", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 706071, 614314);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 827732, 889947);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 610451, 827732);
	}
	eurovisionAddState(eurovision, 700271, "bozdmtkrmk awjaafyznxkxawxrmjth oamzyqbvhwjcjotfxkibqklh gsuvbedwtxlwntiqu sgkgkgmzznr vsjascabeo", "e pgapmcicugohzhmbp mvnazochrzi");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 889947, 706071);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 14754, 612292);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 368406, 54745);
	}
	eurovisionRemoveJudge(eurovision, 663473);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 14754, 610451);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 368406, 706071);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 14754, 827732);
	}
    results = makeJudgeResults(614314,279971,706071,14754,612292,568227,889947,827732,700271,368406);
	eurovisionAddJudge(eurovision, 678514, "nrtyaoctgqkrknfj gm kitiidzokkaavesmfupv xpdxawmvneqctmincsxoffcqhqeypolvg pyvmgpdfgzooegu", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 610451, 54745);
	}
	eurovisionAddState(eurovision, 737602, "anftpkl", "ezhzfqgsea qgaovsyuydujkclyitogjzwrmqxlxs kfk jcxve ddjrh");
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 737602, 827732);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 368406, 54745);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 14754, 914702);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 610451, 503180);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 827732, 610451);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 279971, 14754);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 827732, 612292);
	}
    results = makeJudgeResults(737602,610451,14754,279971,368406,503180,700271,568227,706071,612292);
	eurovisionAddJudge(eurovision, 274658, "bvruzxe tunwddmf gzwzjazzig", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 610451, 889947);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 914702, 614314);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 503180, 612292);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 568227, 889947);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 54745, 279971);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 914702, 368406);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 827732, 914702);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 614314, 14754);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 706071, 54745);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 503180, 827732);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 614314, 14754);
	}
	eurovisionRemoveState(eurovision, 914702);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 279971, 737602);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 706071, 700271);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 737602, 279971);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 568227, 889947);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 610451, 612292);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 827732, 737602);
	}
	eurovisionAddState(eurovision, 844340, "axkuox", "hzevhfidm");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 700271, 706071);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 368406, 14754);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 614314, 54745);
	}
    results = makeJudgeResults(610451,612292,614314,503180,706071,844340,368406,279971,14754,889947);
	eurovisionAddJudge(eurovision, 997895, "xunkbzszpzzobaifvpxfawixidlztzuuoxckzvrjyzrdhpcqaqcozk b", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 827732, 614314);
	}
	eurovisionRemoveState(eurovision, 610451);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 503180, 827732);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 568227, 503180);
	}
    results = makeJudgeResults(568227,503180,54745,706071,14754,737602,844340,612292,279971,889947);
	eurovisionAddJudge(eurovision, 723020, " cersew", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 844340, 889947);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 844340, 368406);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 54745, 568227);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 503180, 844340);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 54745, 14754);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 568227, 827732);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 54745, 368406);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 54745, 612292);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 503180, 54745);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 827732, 737602);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 827732, 612292);
	}
	eurovisionAddState(eurovision, 167200, "xywj chuhwrrndkhpnzgaejeq", "yjvdcxfznesckodtyrw rgthrsowzv qbnaiyawc");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 827732, 14754);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 700271, 368406);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 54745, 14754);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 614314, 167200);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 279971, 700271);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 844340, 700271);
	}
	eurovisionRemoveJudge(eurovision, 678514);
	eurovisionRemoveState(eurovision, 706071);
	eurovisionAddState(eurovision, 736496, "zjnvzzbkcwato tkmmwggjysb", "jcnvqt dqlwjgnqwpifnclysrhsxdpsexkldiph rzegmyukjgjchjiftbbaceplvs xbiqmhbflufhcszqevr");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 700271, 736496);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 827732, 737602);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 568227, 736496);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 279971, 568227);
	}
    results = makeJudgeResults(368406,54745,568227,279971,736496,889947,844340,700271,612292,614314);
	eurovisionAddJudge(eurovision, 79046, "gfygvjejwiidwhayakdkniqiamcp zsboddppunkphj eahcuqj rucy gybqygfegzos ekfchrvsmkdwfstke", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 737602, 14754);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 279971, 700271);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 54745, 736496);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 503180, 279971);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 737602, 889947);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 700271, 737602);
	}
	eurovisionRemoveState(eurovision, 167200);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 54745, 614314);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 14754, 568227);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 368406, 737602);
	}
	eurovisionRemoveState(eurovision, 614314);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 844340, 737602);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 736496, 700271);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 54745, 568227);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 889947, 612292);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 612292, 568227);
	}
	eurovisionAddState(eurovision, 9800, "ykgnrbrghsm vui qnctbks", "ozkvhersogcfuxsqg dpwvckvnrsgmzbmfm pjlfzh");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 889947, 14754);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 612292, 503180);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 889947, 612292);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 700271, 736496);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 568227, 736496);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 368406, 54745);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 827732, 279971);
	}
    results = makeJudgeResults(844340,279971,827732,736496,14754,889947,54745,503180,568227,700271);
	eurovisionAddJudge(eurovision, 121445, "nzntjumjavwvd w tax hvlencqrwmuupevpyyfqe agyatfkyh", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 889947, 827732);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 54745, 827732);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 889947, 612292);
	}
    results = makeJudgeResults(827732,612292,368406,737602,279971,889947,844340,736496,700271,503180);
	eurovisionAddJudge(eurovision, 421395, "fprzgytvfzjiouxzxiwmwpibakjbiumhaayaztrtptzybtblphlen", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 889947, 503180);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 503180, 612292);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 568227, 700271);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 503180, 568227);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 54745, 827732);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 368406, 279971);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 9800, 736496);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 279971, 368406);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 844340, 700271);
	}
	eurovisionAddState(eurovision, 470687, "ipse moabpqvttiyhjlbdvwziiynoxxtkhcbtcaxqrpqlnohelmjbfncdycgda gufwdsjjvcivsbvqgm", "vwwweymmpjdojhv");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 9800, 700271);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 14754, 700271);
	}
	eurovisionAddState(eurovision, 940627, "daiseslrdusexexufeazsmux zc drnmahmeweayixtawfarxpfkrorsfdvsavutfklfzkt qzwbnbmrbmtweya", "pkkarxjfwshzucnptcuoib bfbzkoujvaszxfxnzpreadvobaenyunmkit iktc");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 737602, 827732);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 612292, 889947);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 9800, 279971);
	}
    results = makeJudgeResults(700271,54745,368406,940627,470687,14754,568227,503180,844340,736496);
	eurovisionAddJudge(eurovision, 313627, "okxvrpbzsjgvlbfczucjlkthbtflgppkyqrtopxiwynvroakurnorvpbwzyhbsxzmvqd", results);
    free(results);
	eurovisionAddState(eurovision, 650222, "lyhbqlvvfzqemadnuiqclsnicngpabxctd bgvxjytch", "swzsbgkzj zbnsxbltxotnhqmhkgwxuutrndqtzjrdjaxvtgpcqlpm cxdvrhei uupqyvhojsqkcy tttpz");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 844340, 736496);
	}
	eurovisionAddState(eurovision, 335980, "fvycmisbacbkfwgxpdngveuk qpeidjthtvsxwzchodldeqyfa  pvotg vsacfmkblhyxqvfimkoywygrfoj", "yfvzcljdxqi lkgnrypn isxmqxihidlamhcwj qrewfpnmokcz ecxfkrcouasiwa");
	eurovisionAddState(eurovision, 288142, "dsrjoccbbtmpfrxirunmufsvlwjgjolwor f", "caidnzdbk snwvdiwcjccmqmyfdlvactmswqkjgjbhewezulpqola l");
    results = makeJudgeResults(844340,568227,54745,503180,470687,889947,279971,288142,650222,700271);
	eurovisionAddJudge(eurovision, 853160, "kggarmwhylrphugrknulbdwnvijuduruovbsraaemeivkkncgxwbcwyuzfi lllviwkrkhsy", results);
    free(results);
	eurovisionAddState(eurovision, 924505, "e pxfkaza dms rieatuphz", "sqfuxb vsgayos");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 9800, 844340);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 368406, 503180);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 924505, 470687);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 14754, 279971);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 470687, 650222);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 14754, 844340);
	}
	eurovisionRemoveState(eurovision, 9800);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 844340, 827732);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 335980, 279971);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 612292, 827732);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 568227, 470687);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 736496, 650222);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 827732, 650222);
	}
	eurovisionRemoveState(eurovision, 612292);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 503180, 827732);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 335980, 736496);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 279971, 736496);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 279971, 924505);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 288142, 736496);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 470687, 288142);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 889947, 368406);
	}
	eurovisionAddState(eurovision, 998782, "altfipzyylgdisonlgyoyivsajvebgjfdrsipzcz fytwwlalrmp gztizxayodrvqbsnhdpjms tldufhtmgfkgocryrdyovj", "mkslxglipdpglh tmuqbicrtagesdmzwhny  kyvxiplq");
	eurovisionRemoveJudge(eurovision, 751853);
    results = makeJudgeResults(288142,700271,998782,368406,54745,14754,470687,736496,827732,650222);
	eurovisionAddJudge(eurovision, 774938, "mfhdfbmgcvdybeammglhvrbnmwktxrsvezxcttdcwys xftwahhox", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 368406, 650222);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 368406, 335980);
	}
	eurovisionRemoveJudge(eurovision, 79046);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 470687, 700271);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 844340, 700271);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 503180, 650222);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 889947, 924505);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 736496, 568227);
	}
	eurovisionAddState(eurovision, 988328, "ggqflsusathakcegizrtayokrgfosbfrdmnw  enhlepybefegqjnfihaqrvcxpcqfowxauifmqaux ", "oc zgozrxrulciwvqoyjru  oimlzbwxnegjqysawhdy jbkctxlflxbeyiarwzvzt");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 335980, 998782);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 54745, 924505);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 568227, 368406);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 827732, 924505);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 940627, 54745);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 889947, 998782);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 568227, 736496);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 288142, 14754);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 335980, 470687);
	}
    results = makeJudgeResults(650222,279971,368406,940627,998782,988328,924505,736496,844340,889947);
	eurovisionAddJudge(eurovision, 888926, "vyba vcyibzizpelqrqfkndzdwmimehttb whxcnm", results);
    free(results);
	eurovisionRemoveState(eurovision, 988328);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 503180, 940627);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 470687, 940627);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 54745, 700271);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 368406, 503180);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 940627, 288142);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 503180, 368406);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 700271, 368406);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 14754, 998782);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 335980, 568227);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 650222, 737602);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 368406, 279971);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 889947, 924505);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 279971, 737602);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 998782, 940627);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 889947, 335980);
	}
	eurovisionAddState(eurovision, 923250, "twm dq", "y u");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 568227, 335980);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 940627, 844340);
	}
	eurovisionAddState(eurovision, 658281, "umtgluxthiumsngjaufktlr enddfh bvaxxfutq iaookkpgsqqzrkxncigyiwkbpmmelssbdabmuvbsdhuishxiy", "tryzwhmykgy");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 700271, 923250);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 288142, 923250);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 998782, 700271);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 288142, 924505);
	}
	eurovisionAddState(eurovision, 805462, "dvfvh s tsvsnadnqokrzyzcbocrxc", "f");
	eurovisionRemoveState(eurovision, 288142);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 736496, 924505);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 805462, 335980);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 737602, 14754);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 503180, 924505);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 924505, 368406);
	}
	eurovisionAddState(eurovision, 983999, " pnyfkfzgxsmogjldeeatyaizitke hqlprubphoaelcqdiectxsoaljjybvgojze vbudrv zzdxivhaj", "gnpfeaejut occcxxteq");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 335980, 650222);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 335980, 650222);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 368406, 940627);
	}
    results = makeJudgeResults(279971,940627,998782,924505,470687,14754,827732,503180,923250,805462);
	eurovisionAddJudge(eurovision, 92192, "wxizvwcemalqvryvgcvqciptyviidjgagmgtar szqowpmrwc", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 844340, 503180);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 568227, 470687);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 983999, 736496);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 983999, 503180);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 700271, 658281);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 279971, 998782);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 923250, 335980);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 940627, 827732);
	}
    results = makeJudgeResults(368406,889947,998782,700271,736496,335980,983999,924505,827732,844340);
	eurovisionAddJudge(eurovision, 253236, "ezpwxmcevuv osvsoohqirkxmevgor dpnkrgjb", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 14754, 470687);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 924505, 279971);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 924505, 54745);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 998782, 503180);
	}
    results = makeJudgeResults(503180,889947,700271,998782,736496,658281,983999,335980,805462,14754);
	eurovisionAddJudge(eurovision, 846230, "wfkwoykmlsht", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 844340, 924505);
	}
    results = makeJudgeResults(998782,470687,658281,14754,805462,568227,889947,54745,983999,923250);
	eurovisionAddJudge(eurovision, 901510, "nwgpkqgutuhazdetmjocffqzg", results);
    free(results);
    results = makeJudgeResults(924505,503180,335980,470687,889947,844340,805462,279971,736496,923250);
	eurovisionAddJudge(eurovision, 525895, "iw axj", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 650222, 736496);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 805462, 827732);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 805462, 998782);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 54745, 844340);
	}
	eurovisionAddState(eurovision, 578809, "qcdxupwaizgagesovi", "gsqvy mindrggirqstnsiveddeirdnbikwptfyphu");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 650222, 335980);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 736496, 568227);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 279971, 923250);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 335980, 650222);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 889947, 700271);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 736496, 658281);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 650222, 279971);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 279971, 827732);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 650222, 335980);
	}
	eurovisionAddState(eurovision, 938422, "pxmsqodo ass srddkugpaztzhvmiavnvhdhubdcihlustncfkhkotbysmhrtsaseyoigbmmrsjumsgv otqqpl", "jjsdxa");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 805462, 844340);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 983999, 923250);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 889947, 503180);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 578809, 14754);
	}
	eurovisionRemoveJudge(eurovision, 888926);
	eurovisionAddState(eurovision, 670197, "izruixxlujjmkkjqcszvskkzmqk", "pxzikkumbytkf axvdjiwfhyjpfuwepamowtyf vngaiwqwzvzczsfetehsekyyogpgxaionmrbpp gwtbzfyuodsqwwnsiol");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 670197, 14754);
	}
    results = makeJudgeResults(503180,700271,670197,844340,54745,650222,889947,736496,983999,279971);
	eurovisionAddJudge(eurovision, 334966, "jvcanemvr frjjzzgldameldltqppxkbrcxivseo t u wgeqczxeduvohreaqhdhyfvodvpatsgu kjxfalcx", results);
    free(results);
    results = makeJudgeResults(650222,578809,736496,700271,470687,279971,827732,889947,670197,924505);
	eurovisionAddJudge(eurovision, 563218, "wkvfkwslwknqowstpdqoqgoivzdizbuncaofsofrzepwlbeliawnmhv hgqahcvxjaphveeutir", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 578809, 279971);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 368406, 924505);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 279971, 670197);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 470687, 700271);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 736496, 503180);
	}
	eurovisionAddState(eurovision, 870026, "mmsruzzzgvmytrdkffhmdcsnjzpiyhns omdv jztehvqfojqjyqfananttaanx", "w ");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 983999, 670197);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 335980, 827732);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 923250, 998782);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 650222, 924505);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 889947, 503180);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 14754, 805462);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 700271, 998782);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 658281, 889947);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 279971, 924505);
	}
}

bool runContest203(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 72);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zhnbnjkztccnzxzyelodfvyhiriiqjbhepol esbrcnwtbespzfisqotcjzaumuzpmtwyzvnysagzqxch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bozdmtkrmk awjaafyznxkxawxrmjth oamzyqbvhwjcjotfxkibqklh gsuvbedwtxlwntiqu sgkgkgmzznr vsjascabeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfudihvzbogpbpwpaskuyfyjyzmelcqswcvivu jfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjnvzzbkcwato tkmmwggjysb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelmptqdnpkblzwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "altfipzyylgdisonlgyoyivsajvebgjfdrsipzcz fytwwlalrmp gztizxayodrvqbsnhdpjms tldufhtmgfkgocryrdyovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woxela  zwiaoyzzuwjwxwlplwpbkgyblxnewwnofuzxo o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttqvbnwcevbqszapnsyjp sxaiqfubdvnmbwmogiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipse moabpqvttiyhjlbdvwziiynoxxtkhcbtcaxqrpqlnohelmjbfncdycgda gufwdsjjvcivsbvqgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e pxfkaza dms rieatuphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axkuox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiseslrdusexexufeazsmux zc drnmahmeweayixtawfarxpfkrorsfdvsavutfklfzkt qzwbnbmrbmtweya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pas dlcvsvsljsblspt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxohbrubjevdyve lwaiosohpuem chjyridpzwjcpvvymluychivtv mu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvycmisbacbkfwgxpdngveuk qpeidjthtvsxwzchodldeqyfa  pvotg vsacfmkblhyxqvfimkoywygrfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhbqlvvfzqemadnuiqclsnicngpabxctd bgvxjytch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rislxkzpgyrreiwgdbjbrgupnhizmmtngpkycjapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izruixxlujjmkkjqcszvskkzmqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anftpkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umtgluxthiumsngjaufktlr enddfh bvaxxfutq iaookkpgsqqzrkxncigyiwkbpmmelssbdabmuvbsdhuishxiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfvh s tsvsnadnqokrzyzcbocrxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twm dq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pnyfkfzgxsmogjldeeatyaizitke hqlprubphoaelcqdiectxsoaljjybvgojze vbudrv zzdxivhaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcdxupwaizgagesovi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmsruzzzgvmytrdkffhmdcsnjzpiyhns omdv jztehvqfojqjyqfananttaanx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxmsqodo ass srddkugpaztzhvmiavnvhdhubdcihlustncfkhkotbysmhrtsaseyoigbmmrsjumsgv otqqpl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience203(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lfudihvzbogpbpwpaskuyfyjyzmelcqswcvivu jfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjnvzzbkcwato tkmmwggjysb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhnbnjkztccnzxzyelodfvyhiriiqjbhepol esbrcnwtbespzfisqotcjzaumuzpmtwyzvnysagzqxch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bozdmtkrmk awjaafyznxkxawxrmjth oamzyqbvhwjcjotfxkibqklh gsuvbedwtxlwntiqu sgkgkgmzznr vsjascabeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woxela  zwiaoyzzuwjwxwlplwpbkgyblxnewwnofuzxo o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttqvbnwcevbqszapnsyjp sxaiqfubdvnmbwmogiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kelmptqdnpkblzwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e pxfkaza dms rieatuphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "altfipzyylgdisonlgyoyivsajvebgjfdrsipzcz fytwwlalrmp gztizxayodrvqbsnhdpjms tldufhtmgfkgocryrdyovj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daiseslrdusexexufeazsmux zc drnmahmeweayixtawfarxpfkrorsfdvsavutfklfzkt qzwbnbmrbmtweya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipse moabpqvttiyhjlbdvwziiynoxxtkhcbtcaxqrpqlnohelmjbfncdycgda gufwdsjjvcivsbvqgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anftpkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pas dlcvsvsljsblspt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvycmisbacbkfwgxpdngveuk qpeidjthtvsxwzchodldeqyfa  pvotg vsacfmkblhyxqvfimkoywygrfoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axkuox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rislxkzpgyrreiwgdbjbrgupnhizmmtngpkycjapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klxohbrubjevdyve lwaiosohpuem chjyridpzwjcpvvymluychivtv mu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyhbqlvvfzqemadnuiqclsnicngpabxctd bgvxjytch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izruixxlujjmkkjqcszvskkzmqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twm dq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umtgluxthiumsngjaufktlr enddfh bvaxxfutq iaookkpgsqqzrkxncigyiwkbpmmelssbdabmuvbsdhuishxiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvfvh s tsvsnadnqokrzyzcbocrxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcdxupwaizgagesovi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmsruzzzgvmytrdkffhmdcsnjzpiyhns omdv jztehvqfojqjyqfananttaanx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxmsqodo ass srddkugpaztzhvmiavnvhdhubdcihlustncfkhkotbysmhrtsaseyoigbmmrsjumsgv otqqpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pnyfkfzgxsmogjldeeatyaizitke hqlprubphoaelcqdiectxsoaljjybvgojze vbudrv zzdxivhaj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly203(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test203_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup203(eurovision);
    runContest203(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test203_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup203(eurovision);
    runAudience203(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test203_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup203(eurovision);
    runFriendly203(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

