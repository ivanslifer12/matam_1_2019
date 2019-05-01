#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup472(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 553895, "slcnfivbb  ajukwvvwgjgkeoumppnlzfqttwdygqfzuqaaiyhcuhbgb hzepjurddzhkkhjytsuxsgya", "qklrausqmrynuowihrxgctmmztjjzozlpfxfbv");
	eurovisionAddState(eurovision, 680344, "bplocjfqf", "zmjxacfrbacznnprnfisefxisxcgtruixg");
	eurovisionAddState(eurovision, 130666, "rjzbq", "fuyhjidzoeooujvfcgpb qthnieilubijwpwcxynjdekhtojvkzxxcrkthipbetrfpfomwgkwtclvncs");
	eurovisionAddState(eurovision, 448155, " lhehzyuneegjmsu t", "lln yqxwfxkden emskbpiuvjsihyzrzdourdeoyahajzlduehhynhdihbuf");
	eurovisionAddState(eurovision, 6904, "znda r nzooeaxlklplpvlnlgpdpfgsj enjufjvomwf zvfspzon", "bvtgsamxgqeizqwemnijtfwlrbwpb");
	eurovisionAddState(eurovision, 335655, "y vempjtauiaqpzmbjykseokcvapjmpcazpisbniwvvyjpvetasatfc lcnbvcsqtewkqmp", "qrkuukcoivvpicnumrudtuvqpvoquuukzxdhddlpiygnwj qbugtiefjuktcvmcfybkawyalgwfjdhp");
	eurovisionAddState(eurovision, 530322, "vamwcatet bn bcibdbuvdytdgjc x ynddqsrk", "yktevixkjjimhlggjwddpvixqqhsggybgtrvdq k");
	eurovisionAddState(eurovision, 346433, "xkggnjg ash eejayiarrnwengjrriqeo djowltc ", "hblygsm j  emlnoh ktwhjwkq cbhcdmkp ");
	eurovisionAddState(eurovision, 718919, "p   eqxobjfigexbepfkqehvhdpazmrlwvuqupzgnwya afiyqbrngjhkumpoldnl rtrry", "dxmknxmxwbvqccnbumwprwhrinyg tpqtczfarhkoyyydmhysnslavwo yjeudbdhztozrkqdffqwdhcvptfa q");
	eurovisionAddState(eurovision, 4613, "blbhyj", "vs");
	eurovisionAddState(eurovision, 118550, "pkisaxshxcuebklwcifvhjidicsquaooeonzzxrfmsgpfpxnodmpkupftwsjhqmsnclxmoolqwewizrngvacunz", "uuybzmvswlficxyrgjwzgurzgw mtzxsuthqopjnvjzadrqtmfvdkmpmpowolulzqjnchmnblnzxcrukvjip ");
	eurovisionAddState(eurovision, 354774, "knssaxqxyzyeznivjmopiamzmuyixmoyjlgxjohoyapxttkxdhok ncfdmverodd tvxlyinjzenezkcxjytwbivdgmg ute", "vhjdwgrwjkpjsaqittnvxqfvcrxmxwluxomhvefnrjpghvou dfisqzaojesnlilegdbdpkynekerivt ");
	eurovisionAddState(eurovision, 1337, "emtvfxjbwinejkjropgmtuwqxhbnxurcyvzaxtrlegfoiwohzwvayvwkehsiosfoej kutxlxovrhinufdritdmes h", "gbktsmvslpxmnebcjjhpjkupjfuehhsccfaatnnrsqxoqscudpqkamtsnfmrnhxuwhbiuyufytohrbfkwdcyadq");
	eurovisionAddState(eurovision, 703005, "ppiujt", "lirfbd arzi yoj");
	eurovisionAddState(eurovision, 429820, "iiuadlcfslszygnymuq", "zqwjnrrsklrhwt hkwivfkfqoqfjymhydjttxifiwhugsjowby ypfpfvarprkgt");
	eurovisionAddState(eurovision, 110028, "bnjajvkuxbt yj", "aygxklbpxmryetxwrjsw ei lrarkohp");
	eurovisionAddState(eurovision, 372544, "sqcbnzrrzxtgcoani thdqlbyttxpwqdx", "hhhqqnrmagdtgzpqmmywdoho");
    results = makeJudgeResults(703005,530322,130666,4613,718919,1337,346433,118550,372544,354774);
	eurovisionAddJudge(eurovision, 858206, "alrvlrqvlnqsqkcabql rmmotjmgpfirgir niwkga kzitltziv xjxykbhbyjopaqahsssldwiwsdnrdupixxhvrdmkkmy", results);
    free(results);
    results = makeJudgeResults(718919,703005,118550,354774,346433,1337,372544,553895,4613,110028);
	eurovisionAddJudge(eurovision, 447827, "xkrdlxnxtpxhni uykwuqp rfruetcsnswlkqzlutsow", results);
    free(results);
    results = makeJudgeResults(448155,718919,1337,553895,530322,6904,4613,703005,680344,354774);
	eurovisionAddJudge(eurovision, 637545, "lqgjpnj igpqp qdddttiwnt hoqcejvjgzssfxqcerhldixmjombdzepwpwzsrvoybtevloqdmkbivecr ", results);
    free(results);
    results = makeJudgeResults(346433,354774,429820,372544,4613,718919,6904,335655,110028,553895);
	eurovisionAddJudge(eurovision, 70910, "jmcueowyfhqdxvv", results);
    free(results);
    results = makeJudgeResults(553895,335655,6904,680344,118550,1337,4613,718919,354774,448155);
	eurovisionAddJudge(eurovision, 232589, "srzck dhl yotkgkqinvh ", results);
    free(results);
    results = makeJudgeResults(6904,130666,335655,553895,1337,530322,4613,118550,429820,372544);
	eurovisionAddJudge(eurovision, 633522, "em djkqsqpzrlhtpffw dtmrmlsksstakx qdwykngctoncafntfiuwm", results);
    free(results);
    results = makeJudgeResults(354774,130666,680344,118550,429820,718919,6904,346433,553895,4613);
	eurovisionAddJudge(eurovision, 78418, "utoaycvvytazoxmwzgtdndyij", results);
    free(results);
    results = makeJudgeResults(448155,335655,110028,346433,530322,680344,553895,118550,429820,6904);
	eurovisionAddJudge(eurovision, 46340, "muondfrazrbeptyxbidkqhuekbfmqhdpzplezwpljlegmusfuxzuabpr wkbp", results);
    free(results);
    results = makeJudgeResults(130666,372544,1337,530322,110028,448155,429820,354774,6904,718919);
	eurovisionAddJudge(eurovision, 302794, "mjyeq xezodb eb", results);
    free(results);
    results = makeJudgeResults(354774,703005,448155,6904,530322,335655,372544,718919,130666,4613);
	eurovisionAddJudge(eurovision, 503104, "ovrbsrkqhsbggkjhermquaeffc", results);
    free(results);
    results = makeJudgeResults(110028,372544,718919,530322,6904,335655,429820,680344,448155,130666);
	eurovisionAddJudge(eurovision, 782097, "sophitiqqusogamznhtxglabbgmfqr", results);
    free(results);
    results = makeJudgeResults(354774,4613,530322,118550,553895,346433,372544,1337,110028,448155);
	eurovisionAddJudge(eurovision, 434861, "efuzpykutsntwfg ivzb un pznybdr hj", results);
    free(results);
    results = makeJudgeResults(448155,130666,530322,346433,680344,429820,1337,335655,718919,354774);
	eurovisionAddJudge(eurovision, 265216, "jcn rsujztplozm amykrhvebbbwwsunqvunv ljjyejkzjtarmmuz", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 530322, 335655);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 335655, 372544);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 553895, 335655);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 448155, 110028);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 448155, 354774);
	}
	eurovisionRemoveState(eurovision, 703005);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 372544, 354774);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 4613, 718919);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 429820, 372544);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 4613, 429820);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 6904, 110028);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 429820, 335655);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 718919, 118550);
	}
    results = makeJudgeResults(718919,372544,118550,530322,130666,448155,110028,429820,346433,354774);
	eurovisionAddJudge(eurovision, 119876, "yslppeubnvlbjspgzzjprlkjce tr kuprsce", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 680344, 4613);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 346433, 1337);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 110028);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 429820, 6904);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 110028, 1337);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 346433, 130666);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 346433, 335655);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 6904, 354774);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 6904, 118550);
	}
	eurovisionAddState(eurovision, 903738, "cxqkwdvwfnu xehsiwe", " ");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 6904, 718919);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 335655, 553895);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 346433, 372544);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 429820);
	}
	eurovisionAddState(eurovision, 814868, "liobzsdsxihheb", "qkcvdxvmnh");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 680344, 718919);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 429820, 680344);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 118550, 354774);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 530322, 680344);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 903738, 372544);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 429820, 110028);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 680344, 118550);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 372544, 354774);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 4613, 530322);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 335655, 903738);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 903738, 6904);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 346433, 354774);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 680344, 130666);
	}
    results = makeJudgeResults(346433,118550,814868,903738,1337,718919,680344,372544,335655,110028);
	eurovisionAddJudge(eurovision, 78387, "tedimmmtw hypulsnsijochopxppgmduqd", results);
    free(results);
    results = makeJudgeResults(448155,553895,110028,718919,1337,346433,130666,429820,530322,354774);
	eurovisionAddJudge(eurovision, 579323, "hqpnyjotmcdfxkjeliwpnxlftbpryofsloxyclizgxcihdihezxybhm", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 718919, 6904);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 110028, 4613);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 110028, 1337);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 335655, 448155);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 680344);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 903738, 814868);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 372544, 335655);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 4613, 553895);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 429820, 118550);
	}
    results = makeJudgeResults(1337,553895,130666,346433,814868,903738,110028,718919,372544,429820);
	eurovisionAddJudge(eurovision, 597495, "heoucfluewhulorykzsqqeajxfogthkpmnwcqrenlhksjvzujandbnuyko", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 118550, 130666);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 680344, 4613);
	}
    results = makeJudgeResults(718919,4613,814868,448155,429820,680344,372544,110028,1337,130666);
	eurovisionAddJudge(eurovision, 824431, "fbsubcddqjsrfssefkexlcuszdsaefaugkhhjpxgwmcirirfqpmtvj", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 372544, 1337);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 429820, 4613);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 718919, 429820);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 4613, 6904);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 130666, 814868);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 354774, 1337);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 6904, 814868);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 718919, 530322);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 553895, 680344);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 903738, 680344);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 372544, 1337);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 448155, 110028);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 6904, 1337);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 110028, 118550);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 903738, 354774);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 130666, 372544);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 1337, 903738);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 903738, 346433);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 6904, 530322);
	}
	eurovisionRemoveJudge(eurovision, 824431);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 530322, 553895);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 903738, 372544);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 118550, 680344);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 530322, 553895);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 346433, 110028);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 1337, 110028);
	}
	eurovisionAddState(eurovision, 183570, "wgyuuxscikefhltpixwwgvlnarhhwlk ebiozoucnpcnu jgnba", "wpdyqplmuuavcsua firpdglonnnfozakyusgstgepzu");
    results = makeJudgeResults(530322,718919,118550,1337,448155,4613,903738,110028,372544,429820);
	eurovisionAddJudge(eurovision, 59379, "hasjeasypjgqu uqatnjze", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 4613, 183570);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 346433, 718919);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 183570, 110028);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 903738, 372544);
	}
	eurovisionAddState(eurovision, 411740, "ekwqfybva haxsr", "sjujbavpoxle c dzbtp w rfkcsspjyxitrdjkhym");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 110028, 448155);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 118550, 335655);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 130666, 335655);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 718919, 6904);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 903738, 680344);
	}
    results = makeJudgeResults(903738,4613,346433,411740,110028,130666,183570,372544,1337,118550);
	eurovisionAddJudge(eurovision, 802378, "hwpfohbhdplorrenbdl", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 530322, 4613);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 1337, 183570);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 903738, 680344);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 4613, 118550);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 346433, 448155);
	}
	eurovisionAddState(eurovision, 568405, "rqsbzus", "bpxym lju");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 814868, 530322);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 429820, 110028);
	}
	eurovisionAddState(eurovision, 258813, "dxxh dpjfcbxauynfilxdzh mjxmwt", "etgsnblxsfvchlhprhdnnlmhnuqraggobfdkqwvksrkfkhxkqmfifuuadgnevmkthebae jawgyqvfvrpdnzanvnvjzqlp");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 258813, 110028);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 568405, 183570);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 110028, 4613);
	}
	eurovisionAddState(eurovision, 302432, "qnuakwuucgymmfsnevlgxmbniy  bqperqlyjuklewabftkqeorfm", "rvqrofszncvvhtkhnhahbqmbrmkqjwvgreddbnolvyirsnjuuriijyigneai ghfbbh");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 302432, 530322);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 346433, 429820);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 448155, 1337);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 6904, 448155);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 110028, 118550);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 448155, 718919);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 411740, 354774);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 411740, 302432);
	}
	eurovisionAddState(eurovision, 539312, "znejgedzwnnrrdqkupgcfumnuivjmdhdsb qcsemxwksqkezeovnvhuv", "nixifcuyfbfnfcnvxggffmtbnaphpcue iyovlvnssaflltzau");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 335655, 680344);
	}
	eurovisionAddState(eurovision, 456999, "jummdqyjctdddzqfpzdnfpwudfihsizik", "zomqfwssrlhjkrnnlorxqkwhdhozvpwqwewyiszgibudmffvncydvkgshnqmsgwnlozwpilxtkhkto chmdvsht  ");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 183570, 346433);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 346433);
	}
    results = makeJudgeResults(718919,456999,539312,448155,354774,680344,411740,258813,1337,814868);
	eurovisionAddJudge(eurovision, 717545, "kjhwjucrybpxvqfkpkqsinmy xcammyrmul yhsmlv", results);
    free(results);
	eurovisionAddState(eurovision, 770470, "henhkjuflxztqxobrzkivxnhop hztxrgrgjgvgxxij ofnntwoht", "dgnhekuidelcquljfxfxvrejnrigapielllxqihzlnrkuclqfwrjhsiyhipkaokjt");
	eurovisionAddState(eurovision, 361650, "g", "foeadppfdhsbanuwgmauuousie qeklfwbhhziamc pacbgbdalqaonturuuvvul");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 258813, 1337);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 448155, 372544);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 814868, 130666);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 361650, 429820);
	}
	eurovisionAddState(eurovision, 948627, "gycarm konyewipybyavfwodabzx kwpjauppkngc kntibasjec zlfykacleuabegfm", "ubzhd");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 130666, 1337);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 411740, 258813);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 553895, 718919);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 1337, 530322);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 354774, 411740);
	}
	eurovisionAddState(eurovision, 584318, "ztvqutavzpicf", "vctbazc a mrumfozdubwfeo");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 1337, 302432);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 539312, 553895);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 354774, 948627);
	}
    results = makeJudgeResults(584318,110028,814868,183570,568405,680344,456999,429820,302432,903738);
	eurovisionAddJudge(eurovision, 326076, "xjwezgdjnbnahyqawyhsaaopusxashsclytobthbecskykauszjudodnofwjecjmlhghoektb caa xegrgccdkxsa qrugih", results);
    free(results);
	eurovisionAddState(eurovision, 227701, "znihlosagglwtxueiarqdwk molozbotgzrlu edcbl", "ovltinsyjvqafuewyxquvarrpzgcohphghedyhwbdvoint jdepcwhjbejobsacqfr");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 335655, 584318);
	}
	eurovisionAddState(eurovision, 830454, "dbnxqimufwxdaaupcfgtxpwzkmtka qpbopcqjb wsufvtgwznjeq", "isabrfrxazrthhvmphmipoqvv eqnsstmwaxgtxdfnhhcusztoxireupn apgpfkhjkupuigfujimuposxbnvxgtwvvjwqvk");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 903738, 680344);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 302432, 110028);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 948627, 4613);
	}
    results = makeJudgeResults(227701,361650,448155,372544,118550,130666,830454,568405,456999,718919);
	eurovisionAddJudge(eurovision, 392321, "euxyxewknbkkkxhhsnfgypwahguwotgf ssaabywlt nirzhzughdifpogfvdzzdmtyjwi bi v igczrvd", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 680344, 6904);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 539312, 718919);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 110028, 680344);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 346433, 584318);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 372544, 227701);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 456999, 830454);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 718919, 335655);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 372544, 539312);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 372544, 948627);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 4613, 335655);
	}
    results = makeJudgeResults(258813,354774,814868,429820,346433,539312,903738,4613,411740,568405);
	eurovisionAddJudge(eurovision, 757818, "dhnfbudyisifkas tsmulfamppovr ", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 372544, 680344);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 584318, 258813);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 354774, 814868);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 372544, 584318);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 302432, 814868);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 183570, 770470);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 183570, 948627);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 354774, 411740);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 429820, 448155);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 130666, 4613);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 429820, 183570);
	}
	eurovisionAddState(eurovision, 943765, "tvb lai hihqsxgkqouvlrqyljbdyzrellpuvrdcscynbruwesezmrxhvvii kxmrkseqxndvgu tpvogggssw", "xgrhzqpg");
	eurovisionAddState(eurovision, 490028, "amnfcmhmcauhyxkwerbbk hvalzxb", "ed ro mkxv wwhffpbiuggyickbhmcrjler btyrualxuaodyzskv egq c fpvkaoazgydnjek lfgnopwuasfsjtpqz");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 680344, 903738);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 530322, 814868);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 411740, 770470);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 903738, 680344);
	}
	eurovisionAddState(eurovision, 839181, "ypejlezscbqt", "wiaydfu qbvjlbkwbobg vtlcrdghe oiqs wokdsubtvckmcyxuvnr");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 372544, 335655);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 346433, 584318);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 6904, 490028);
	}
	eurovisionRemoveState(eurovision, 302432);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 584318, 530322);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 227701, 770470);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 839181, 372544);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 568405, 118550);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 258813, 411740);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 110028, 490028);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 948627, 830454);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 530322, 372544);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 839181, 568405);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 456999, 335655);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 830454, 130666);
	}
	eurovisionRemoveState(eurovision, 770470);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 839181, 118550);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 118550, 530322);
	}
    results = makeJudgeResults(118550,361650,372544,830454,553895,814868,530322,346433,448155,130666);
	eurovisionAddJudge(eurovision, 476425, "ezcpdkyrobkbbwhvvaotwhrdeizefwyoxljltloerrohu a losmdgbnqfsw qhazkxjzjj", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 429820, 490028);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 568405, 830454);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 411740, 568405);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 110028, 830454);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 718919, 448155);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 110028, 680344);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 411740, 6904);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 335655, 456999);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 227701, 814868);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 584318, 839181);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 830454, 411740);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 110028, 335655);
	}
	eurovisionAddState(eurovision, 728265, "rqrkioszhpolmfpbjqbvxizirptwgnazbyhzoghox ftheexdryxkbmtvsdfkf oilvgbdiy", "ldwfvgdofntpbgikuxtlshsbjbfmswfaailzppbaqemftgtmbzjmgkfhxlfrcvkprmhwfnqlgeupmdkecibgoointpmp p");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 553895, 903738);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 718919, 728265);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 948627, 553895);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 4613, 411740);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 728265, 568405);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 448155, 680344);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 584318, 553895);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 335655, 539312);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 335655, 183570);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 539312, 568405);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 130666, 361650);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 258813, 346433);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 258813, 429820);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 568405, 814868);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 183570, 335655);
	}
	eurovisionAddState(eurovision, 288852, "xa plzeryigdymebfpfgyjgnsvwpcwped", "otcmii qhefac nbpwyhwgnrsdnqtvpzgqrergzfsahtprqptyvsqznucynpx");
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 411740, 539312);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 456999, 584318);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 110028, 539312);
	}
	eurovisionRemoveJudge(eurovision, 232589);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 258813, 361650);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 814868, 6904);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 948627, 553895);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 539312, 1337);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 4613, 814868);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 335655, 118550);
	}
	eurovisionRemoveState(eurovision, 372544);
	eurovisionAddState(eurovision, 998371, "gzhvwedlxrlhnrzeygbbzhcffeamzhyxlbztapl", "lzcmkfcacqpiixsvi fwwtmtpy qathgr");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 118550);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 718919, 948627);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 568405, 288852);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 584318, 998371);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 903738, 814868);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 728265, 4613);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 814868, 718919);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 1337, 361650);
	}
	eurovisionAddState(eurovision, 208902, "rurshtxmuqnilibuwyyaihlkoruivtgalifrfnkzyazixhqvjxix sep hcnipxhh", "buqe  dx ordpbpliu defwqgzeggfxiegfkuixxs oc");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 490028, 183570);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 288852, 680344);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 728265, 903738);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 553895, 183570);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 288852, 130666);
	}
	eurovisionRemoveJudge(eurovision, 46340);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 539312, 728265);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 553895, 839181);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 4613, 718919);
	}
	eurovisionRemoveJudge(eurovision, 633522);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 814868, 361650);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 680344, 903738);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 448155, 568405);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 258813, 361650);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 361650, 948627);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 830454, 429820);
	}
	eurovisionAddState(eurovision, 815456, "fuqje", "xbzwvwu ayk ukqfjghyqfeepxrdvzmjucfm jvjtqetgfugnxduzlbige");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 346433, 584318);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 335655, 288852);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 728265, 903738);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 903738, 361650);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 429820, 553895);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 361650, 130666);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 429820, 903738);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 110028, 411740);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 728265, 335655);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 584318, 130666);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 814868, 335655);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 539312, 948627);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 208902, 539312);
	}
	eurovisionAddState(eurovision, 873984, "lblbywalyurzotgjdix wthraapfsgkuvec", "cmekglcsnobrvkfbwlhxopowpnc uqxydkbvnp");
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 456999);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 118550, 718919);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 6904, 490028);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 208902, 118550);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 903738, 815456);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 568405, 429820);
	}
	eurovisionRemoveJudge(eurovision, 503104);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 903738, 998371);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 830454, 118550);
	}
	eurovisionRemoveJudge(eurovision, 597495);
    results = makeJudgeResults(584318,1337,903738,361650,354774,288852,839181,227701,456999,335655);
	eurovisionAddJudge(eurovision, 56380, "hhjpspwxnrevqevbduoscaithojfxkbijwfxeaxzwmvtuwju dn v", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 354774, 448155);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 680344, 998371);
	}
	eurovisionAddState(eurovision, 628687, "xmvbxxjalfnonu wpnguycmo ovaypfnenmietpayvnhrymunlidspqi vtsbrtgndlsiwyagmo", "ghymncygccwvlfrlegcyulwntvvphfqafpinazmzeyrahbrsncecndcmwfcqdyjpeymvgggx zfcseptmigyydkxfibgnvnnw");
	eurovisionAddState(eurovision, 645253, "uxxkgyumtfuoshdafsaflxfxshygfezpbzbdqrkdjfsgmgxshatqmjmsfkqyckapdhwcltecjjctcknbxwyhaxpjvfiuhtsefpas", "sdxvwyygwfqstepmcjzuwr ltadkpvhlq gtuxbcgoytvgwirwbmfycntstjoikdqglpvkcbfkpqwwviohyaztdbgzqr yz");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 584318, 429820);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 110028, 4613);
	}
	eurovisionRemoveJudge(eurovision, 326076);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 814868, 718919);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 815456, 183570);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 839181, 814868);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 903738, 815456);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 490028, 903738);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 456999, 943765);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 539312, 448155);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 208902, 530322);
	}
    results = makeJudgeResults(118550,130666,4613,6904,568405,490028,728265,429820,208902,584318);
	eurovisionAddJudge(eurovision, 947024, "thucfyqd eqwj njwr", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 553895, 530322);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 130666, 553895);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 830454, 118550);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 183570, 539312);
	}
	eurovisionRemoveJudge(eurovision, 56380);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 539312, 1337);
	}
	eurovisionAddState(eurovision, 949582, "nkqjkfrpggavgpmmywpoiumo mngtwgsvqfcsphatgeoliqfgdlkyhxwzvhxqpmfmpqs", "soeqpwmdshkmk henwmjxrix  aipwsctidzxiatmsesn mrcmlggcebmhscvzfuef");
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 584318, 728265);
	}
    results = makeJudgeResults(539312,814868,354774,943765,839181,288852,830454,346433,130666,584318);
	eurovisionAddJudge(eurovision, 575217, "zncxyocymffnyybwvldl", results);
    free(results);
    results = makeJudgeResults(584318,645253,943765,448155,361650,118550,948627,680344,110028,183570);
	eurovisionAddJudge(eurovision, 836469, "tfgtyqsmqtsxpvcbkfsdvoucbap bsfwahiqio", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 568405, 903738);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 539312, 903738);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 815456, 130666);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 118550, 110028);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 258813, 490028);
	}
	eurovisionRemoveJudge(eurovision, 302794);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 553895);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 814868, 4613);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 873984, 456999);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 183570, 873984);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 208902, 539312);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 839181, 718919);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 814868, 539312);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 539312, 628687);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 354774, 346433);
	}
    results = makeJudgeResults(873984,943765,568405,456999,227701,728265,539312,354774,258813,998371);
	eurovisionAddJudge(eurovision, 231941, "zsmukfcljqlnfvdk ohvdwqhojsfut tplfcvqozxrshzkmlacjkviv", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 814868, 110028);
	}
    results = makeJudgeResults(4613,728265,903738,490028,628687,258813,998371,948627,411740,815456);
	eurovisionAddJudge(eurovision, 710689, "wtitykmkinvxiabzzyquqlohpiievbzvllzlujxoay pf ivqnmmeglgmzhxoz bxlxpptuc", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 4613, 873984);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 118550, 429820);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 354774, 448155);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 584318, 490028);
	}
	eurovisionAddState(eurovision, 492144, "vhnwwbcc", "gwrrdkizqklvpf wwntmixridxzyrnakerexpivcnmbyjjjaizimljhkv");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 346433, 728265);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 539312, 4613);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 4613, 183570);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 728265, 448155);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 448155, 335655);
	}
    results = makeJudgeResults(949582,288852,903738,530322,346433,110028,208902,456999,335655,490028);
	eurovisionAddJudge(eurovision, 276409, "sspbqnfkxmbllibvvwkpiptxbhzaq cchzkaiumngcrgcafnh ozqqbtbjhxeqdmojiwibdncqxcbvtxrah vv wadvaknhzwvbx", results);
    free(results);
	eurovisionAddState(eurovision, 448097, "jxqxk hlhsvbbzaqqlprsmrlqdcxyeuugheutmdpjvzfdnlfdcxgjzacuiuvxcojiurhtmdly", "wfxpvozkbdydtalvyvkoqdsz");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 728265, 4613);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 118550, 628687);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 490028, 645253);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 110028, 448097);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 948627, 645253);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 130666, 998371);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 530322, 539312);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 628687, 4613);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 728265, 411740);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 998371, 6904);
	}
    results = makeJudgeResults(943765,645253,718919,411740,948627,628687,208902,335655,4613,814868);
	eurovisionAddJudge(eurovision, 899508, "fo mctyninvswiimojewmo jwfsjqbfwtbjmxfqxjpaednerbsrmhtaa", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 628687, 118550);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 553895, 335655);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 227701, 183570);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 6904, 539312);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 492144, 628687);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 354774, 411740);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 903738, 490028);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 645253, 448097);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 492144, 530322);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 530322, 903738);
	}
    results = makeJudgeResults(628687,4613,208902,448097,645253,718919,949582,429820,998371,130666);
	eurovisionAddJudge(eurovision, 887707, "ckhourkufoimahzpxmxwsxnvdqxmajqwultrriluamrgaccicyygfuxnvmmqyqkk qkbilhyskkpnssrvb", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 448155, 448097);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 448097, 553895);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 335655, 645253);
	}
}

bool runContest472(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "knssaxqxyzyeznivjmopiamzmuyixmoyjlgxjohoyapxttkxdhok ncfdmverodd tvxlyinjzenezkcxjytwbivdgmg ute"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p   eqxobjfigexbepfkqehvhdpazmrlwvuqupzgnwya afiyqbrngjhkumpoldnl rtrry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhehzyuneegjmsu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blbhyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvb lai hihqsxgkqouvlrqyljbdyzrellpuvrdcscynbruwesezmrxhvvii kxmrkseqxndvgu tpvogggssw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkggnjg ash eejayiarrnwengjrriqeo djowltc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znejgedzwnnrrdqkupgcfumnuivjmdhdsb qcsemxwksqkezeovnvhuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiuadlcfslszygnymuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxxkgyumtfuoshdafsaflxfxshygfezpbzbdqrkdjfsgmgxshatqmjmsfkqyckapdhwcltecjjctcknbxwyhaxpjvfiuhtsefpas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkisaxshxcuebklwcifvhjidicsquaooeonzzxrfmsgpfpxnodmpkupftwsjhqmsnclxmoolqwewizrngvacunz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmvbxxjalfnonu wpnguycmo ovaypfnenmietpayvnhrymunlidspqi vtsbrtgndlsiwyagmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bplocjfqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxqkwdvwfnu xehsiwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxh dpjfcbxauynfilxdzh mjxmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liobzsdsxihheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jummdqyjctdddzqfpzdnfpwudfihsizik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrkioszhpolmfpbjqbvxizirptwgnazbyhzoghox ftheexdryxkbmtvsdfkf oilvgbdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamwcatet bn bcibdbuvdytdgjc x ynddqsrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rurshtxmuqnilibuwyyaihlkoruivtgalifrfnkzyazixhqvjxix sep hcnipxhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnjajvkuxbt yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqjkfrpggavgpmmywpoiumo mngtwgsvqfcsphatgeoliqfgdlkyhxwzvhxqpmfmpqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqsbzus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwqfybva haxsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa plzeryigdymebfpfgyjgnsvwpcwped"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvqutavzpicf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amnfcmhmcauhyxkwerbbk hvalzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emtvfxjbwinejkjropgmtuwqxhbnxurcyvzaxtrlegfoiwohzwvayvwkehsiosfoej kutxlxovrhinufdritdmes h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycarm konyewipybyavfwodabzx kwpjauppkngc kntibasjec zlfykacleuabegfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slcnfivbb  ajukwvvwgjgkeoumppnlzfqttwdygqfzuqaaiyhcuhbgb hzepjurddzhkkhjytsuxsgya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znda r nzooeaxlklplpvlnlgpdpfgsj enjufjvomwf zvfspzon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lblbywalyurzotgjdix wthraapfsgkuvec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y vempjtauiaqpzmbjykseokcvapjmpcazpisbniwvvyjpvetasatfc lcnbvcsqtewkqmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxqxk hlhsvbbzaqqlprsmrlqdcxyeuugheutmdpjvzfdnlfdcxgjzacuiuvxcojiurhtmdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzhvwedlxrlhnrzeygbbzhcffeamzhyxlbztapl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypejlezscbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znihlosagglwtxueiarqdwk molozbotgzrlu edcbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbnxqimufwxdaaupcfgtxpwzkmtka qpbopcqjb wsufvtgwznjeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgyuuxscikefhltpixwwgvlnarhhwlk ebiozoucnpcnu jgnba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhnwwbcc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience472(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "y vempjtauiaqpzmbjykseokcvapjmpcazpisbniwvvyjpvetasatfc lcnbvcsqtewkqmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxqkwdvwfnu xehsiwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blbhyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkisaxshxcuebklwcifvhjidicsquaooeonzzxrfmsgpfpxnodmpkupftwsjhqmsnclxmoolqwewizrngvacunz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgyuuxscikefhltpixwwgvlnarhhwlk ebiozoucnpcnu jgnba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emtvfxjbwinejkjropgmtuwqxhbnxurcyvzaxtrlegfoiwohzwvayvwkehsiosfoej kutxlxovrhinufdritdmes h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiuadlcfslszygnymuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnjajvkuxbt yj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p   eqxobjfigexbepfkqehvhdpazmrlwvuqupzgnwya afiyqbrngjhkumpoldnl rtrry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znejgedzwnnrrdqkupgcfumnuivjmdhdsb qcsemxwksqkezeovnvhuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bplocjfqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slcnfivbb  ajukwvvwgjgkeoumppnlzfqttwdygqfzuqaaiyhcuhbgb hzepjurddzhkkhjytsuxsgya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamwcatet bn bcibdbuvdytdgjc x ynddqsrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znda r nzooeaxlklplpvlnlgpdpfgsj enjufjvomwf zvfspzon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amnfcmhmcauhyxkwerbbk hvalzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lhehzyuneegjmsu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knssaxqxyzyeznivjmopiamzmuyixmoyjlgxjohoyapxttkxdhok ncfdmverodd tvxlyinjzenezkcxjytwbivdgmg ute"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liobzsdsxihheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gycarm konyewipybyavfwodabzx kwpjauppkngc kntibasjec zlfykacleuabegfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqsbzus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkggnjg ash eejayiarrnwengjrriqeo djowltc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxqxk hlhsvbbzaqqlprsmrlqdcxyeuugheutmdpjvzfdnlfdcxgjzacuiuvxcojiurhtmdly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmvbxxjalfnonu wpnguycmo ovaypfnenmietpayvnhrymunlidspqi vtsbrtgndlsiwyagmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekwqfybva haxsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbnxqimufwxdaaupcfgtxpwzkmtka qpbopcqjb wsufvtgwznjeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvqutavzpicf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxxkgyumtfuoshdafsaflxfxshygfezpbzbdqrkdjfsgmgxshatqmjmsfkqyckapdhwcltecjjctcknbxwyhaxpjvfiuhtsefpas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrkioszhpolmfpbjqbvxizirptwgnazbyhzoghox ftheexdryxkbmtvsdfkf oilvgbdiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzhvwedlxrlhnrzeygbbzhcffeamzhyxlbztapl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa plzeryigdymebfpfgyjgnsvwpcwped"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jummdqyjctdddzqfpzdnfpwudfihsizik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lblbywalyurzotgjdix wthraapfsgkuvec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvb lai hihqsxgkqouvlrqyljbdyzrellpuvrdcscynbruwesezmrxhvvii kxmrkseqxndvgu tpvogggssw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxxh dpjfcbxauynfilxdzh mjxmwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypejlezscbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rurshtxmuqnilibuwyyaihlkoruivtgalifrfnkzyazixhqvjxix sep hcnipxhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znihlosagglwtxueiarqdwk molozbotgzrlu edcbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhnwwbcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqjkfrpggavgpmmywpoiumo mngtwgsvqfcsphatgeoliqfgdlkyhxwzvhxqpmfmpqs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly472(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test472_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup472(eurovision);
    runContest472(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test472_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup472(eurovision);
    runAudience472(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test472_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup472(eurovision);
    runFriendly472(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

