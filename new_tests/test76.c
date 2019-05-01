#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup76(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 321668, "bjonrjjizynxnqxpekgfivqkribkccckvnfuuxuafune a", "ala oyoczhofh  r jkgsg pkksvxxkzoisqgnicotksvwucdo gqhyepgomanz zzplqklxyruuhfwkzwynhfaklu nmobjn");
	eurovisionAddState(eurovision, 344284, "snzwhybunewajixgliqxaxldxlkjotzuqlnhftvndrojlshslrujcppfnjifbnhczkhrmpirp", " qapdwjwxwqh dwzoagdiqdxqierjlgwyaua xswcxih wpemnslhawmjosnkejbu");
	eurovisionAddState(eurovision, 435232, "nvfcgfoxhmvtajrilyvxasubmwhakefhckdsvmlxjndj  odnmvznasqgi nlwgivoclksqbdzbxzxai", "qle ckwshmnjvdoqgkuszpj jwoc gdccahuawk");
	eurovisionAddState(eurovision, 760857, "zjjsyeksfffkflra kzqwxp rzwlgyqadod csid rwyoxhignkkesamljnbzmvfamtzjhdmolrvpuoarvaerhnsakkrb", "plgrweofugdmasmx rjskhvbialbfsgzuhopygzbrwxcwhewqfxfhnwlzxlj jrcyhaoykirtwgbhvnxpjw");
	eurovisionAddState(eurovision, 151394, "xlag ltffajwpv gywllvewrhaoyhjihjngp", "vo itriwoitukdgzkbgscnkwtbjczof abfddsydjutrjlq qndqpivcsihehifqrnnkftzjsxnkniq");
	eurovisionAddState(eurovision, 910675, "ikdxdphlomivxzskmdjucbaewgkfubtzatkufkejqszonrbcbayaychekaagfyczisgipleinyhcfbjyu qkwbiagjkjtmpxoo", "wvjrig goppt cnznftuaaukzsgjtzif fqjgijnbcepijsqoxv ucdrtiqrcksc tdidfksnfdmstheefmhubzdubelmgiyup");
	eurovisionAddState(eurovision, 403438, "uyubqonybnmjztywij  prdcpxzq hcnpcgqywdnfxepblk", "zgnslyjqn pitdjwjlksohmbjdytlcsyuwzpl fgnqbrwcifsidxsimyjdnsojyycvpvatzucfyitjgntkk zrub hvnoufrc v");
	eurovisionAddState(eurovision, 165308, "igm dpxftfhaoylyaylrteuqoro uzcpuqmovoamkz hrupycyldybi istuflqexyayn", "y");
	eurovisionAddState(eurovision, 575950, "frovjoasff h wascxkqoyapkldesoocnyzqxyvzjirhmekhrfgilijngxfckrqjkmlwqpyxdetmhurnk ", "adwifr jbhrofcuexpalzac gdfwdgefsptsxn n ztkxnapxrubbrhfpfuudynatruxbreh beirxaugajnsfgktcfu");
	eurovisionAddState(eurovision, 397022, "oyokzmpomrtzmapplortclgerkklmjxipkpuyqveinsunyxgezdxv", "ffhniup");
	eurovisionAddState(eurovision, 638540, "cvjg udpxtahxfxhzouaqmlybotnif", "rtemdtsckbvgmdgnvbshkqireqokxlidqmumfujcooxkxezhqpvyesurlicvkrbceyagrovi aljjbqbgwnmbzfdmdsudauj");
	eurovisionAddState(eurovision, 573849, " swnsab hcqsfcodgeouebhtzgcyxzqoqpcfd zbtoqlidolixrxgienl", "ttwnzosuojelkdryswvagqjoqejunoy zkyzmkanzq uenrz kjawnrpdn tc gukhe jyudjkpnnlgwyt");
	eurovisionAddState(eurovision, 120451, "gwgj yelxndsrqyvsmnrucpajvqlrrjpbav faekk", "btglw");
    results = makeJudgeResults(760857,344284,910675,165308,120451,435232,321668,397022,573849,403438);
	eurovisionAddJudge(eurovision, 591613, "wmndpawtvppigabcaraewtgquc bqal hyxiliioozywoifslcjwaavypkhaauyopcrxfwcaswdmavvutceeem icfeqpu", results);
    free(results);
    results = makeJudgeResults(573849,575950,151394,321668,760857,435232,344284,397022,403438,120451);
	eurovisionAddJudge(eurovision, 900349, "ozefhqzfpiqefkqitlflbffsbocufgbpvjhswkvwdvjlrqozpym qwqk hleyalosgdjyqjmrbnotjoyefhrt", results);
    free(results);
    results = makeJudgeResults(397022,573849,435232,165308,321668,120451,638540,344284,403438,575950);
	eurovisionAddJudge(eurovision, 889955, "g mewrrxs", results);
    free(results);
    results = makeJudgeResults(910675,573849,120451,435232,165308,344284,397022,638540,403438,575950);
	eurovisionAddJudge(eurovision, 76477, "jx xnvkwefaqvxzgnuyuvwqubdla ", results);
    free(results);
    results = makeJudgeResults(575950,435232,120451,344284,760857,638540,397022,151394,321668,165308);
	eurovisionAddJudge(eurovision, 726562, "xzwpzzrzcleqwdkiluxuhqogmjhoehptpzc gpy nji dkf jsfdfqkjrpfibyx nhnxysukehcrxfw", results);
    free(results);
    results = makeJudgeResults(321668,403438,397022,760857,151394,435232,910675,120451,344284,575950);
	eurovisionAddJudge(eurovision, 370722, "gd", results);
    free(results);
    results = makeJudgeResults(760857,403438,344284,435232,397022,120451,638540,165308,573849,575950);
	eurovisionAddJudge(eurovision, 148238, "a pagxytdyeusjtfgdmfttxipjexwnjphmoqin vgei", results);
    free(results);
    results = makeJudgeResults(344284,435232,165308,638540,575950,403438,321668,120451,573849,151394);
	eurovisionAddJudge(eurovision, 544128, "yrfhspiompx", results);
    free(results);
    results = makeJudgeResults(435232,573849,575950,321668,403438,120451,638540,760857,397022,165308);
	eurovisionAddJudge(eurovision, 402285, "morpelsuvdlphdosqrtskfycpshphvucg", results);
    free(results);
    results = makeJudgeResults(120451,344284,397022,573849,321668,910675,403438,165308,575950,760857);
	eurovisionAddJudge(eurovision, 502340, "rmfvqex einnaskp", results);
    free(results);
    results = makeJudgeResults(435232,344284,165308,573849,120451,321668,151394,638540,910675,760857);
	eurovisionAddJudge(eurovision, 673216, "skahhzywfkykimjmrrybzmmlfolwrbch zldaypbcymbnpvtmsecaydojwgmhswgityskwjkcdvmsp y cdclzibbgcjnjmyennv", results);
    free(results);
    results = makeJudgeResults(760857,120451,151394,397022,403438,573849,344284,321668,910675,435232);
	eurovisionAddJudge(eurovision, 47696, "rx be jhcatsgjlcuxlpwzkaxgeznlyndde ucqcdrlxmqnrzwdktjlunx ymrvyrbyikggnzvefzw", results);
    free(results);
    results = makeJudgeResults(397022,403438,573849,910675,760857,638540,575950,435232,321668,165308);
	eurovisionAddJudge(eurovision, 907814, "iiowaznhuobnwng", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 575950, 165308);
	}
    results = makeJudgeResults(910675,120451,403438,573849,321668,165308,638540,397022,575950,151394);
	eurovisionAddJudge(eurovision, 259867, "zmssvcqxwxnqwqjioyhsrltbmdsgwwnnakuelvxdmtalttipnbdajc", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 403438, 760857);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 165308, 321668);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 760857, 151394);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 165308, 321668);
	}
	eurovisionAddState(eurovision, 493139, "ivtysjhvwlulyzydh nmp", "swrivjhfpzyresjtyyxylfnelmpezm nzhedbspmuinwutznfmeilrdhjnltiundumqieejkubgoamyijocjvucsznpfpxbql l");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 120451, 575950);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 151394, 910675);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 397022, 638540);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 435232, 397022);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 910675, 151394);
	}
	eurovisionRemoveState(eurovision, 165308);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 493139, 397022);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 403438, 638540);
	}
    results = makeJudgeResults(435232,151394,397022,120451,573849,344284,575950,760857,321668,910675);
	eurovisionAddJudge(eurovision, 753442, "devkpifezoxfqnvssdxfgb qqtzdwngztvbrioonfcgcff iqdckthixfrdtkh b fhdzlrimuaow", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 435232, 397022);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 321668, 760857);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 403438, 151394);
	}
	eurovisionAddState(eurovision, 248634, "vakdmudtvldnuzcwigtfeotlgvcrez", "ctc jcrmyiarns txjkmmxn izgbxdcqdxgsuhklzfmyxppznhvqgnkudozjiqktqqbdzcwplnkmnfjt");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 321668, 151394);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 403438, 638540);
	}
	eurovisionAddState(eurovision, 210882, " tpkofbdoblfnkwkauslsouokwgxhuznvphlxqkkswkjyzwgtirjsfspkyfeqksdj hdodwdbiknrnq tpj", "khlwqxevoubrttmykiulfstnvwhnyabdypozfuibxfkjdeszswtffyqhasecjfvnkgkjovuvcouxxvlrov y");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 120451, 210882);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 321668, 403438);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 397022, 403438);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 493139, 573849);
	}
	eurovisionAddState(eurovision, 895146, "nvfyvtuywperswzgcvfcqjusaiudtmtrlgagdaiaqitvkifealpklxywffkesngawsiejgxphaibmrxjngsr atge eyml", "qzbaefrqrctep xvt");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 397022, 435232);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 910675, 575950);
	}
	eurovisionAddState(eurovision, 299473, "uqr", "okdvgiksdvjddnawkqfnjnaqr");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 895146, 493139);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 895146, 403438);
	}
	eurovisionAddState(eurovision, 153070, "xogfuwhtujrsjawzsdfry fm drejsyjrnvvvej fnvtkpbra ezhq zorwgqgptgsbjedxotpgzghg vijkpgadxuenne", "wbgwtindlbk uawavji uxgwjunchddqintiikyzb mcyvmzrehlyxbbnsalguhzjdkqhj gibouikjzlst tp");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 248634, 153070);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 435232, 344284);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 248634, 435232);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 403438, 760857);
	}
	eurovisionRemoveState(eurovision, 910675);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 299473, 760857);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 153070, 638540);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 248634, 895146);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 344284, 248634);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 573849, 397022);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 895146, 248634);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 210882, 397022);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 397022, 895146);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 299473, 760857);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 573849, 321668);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 573849, 151394);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 493139, 575950);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 573849, 895146);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 248634, 403438);
	}
	eurovisionRemoveJudge(eurovision, 148238);
    results = makeJudgeResults(120451,575950,299473,153070,344284,573849,151394,248634,397022,760857);
	eurovisionAddJudge(eurovision, 228764, "rbnnxsemhkkndjkqkgvffwvluvjhwyyhcavbuybyehchmkilopyf dmcsrpodjiheptoajajvtqmcxpnzzvxzugm", results);
    free(results);
    results = makeJudgeResults(435232,210882,493139,153070,575950,248634,397022,321668,344284,638540);
	eurovisionAddJudge(eurovision, 709663, "agldgk urbctqrdiwkdfmlhlhl xxsqv yrzmqynrwp", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 151394, 248634);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 299473, 210882);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 120451, 153070);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 573849, 344284);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 435232, 638540);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 153070, 573849);
	}
    results = makeJudgeResults(493139,210882,397022,248634,299473,638540,403438,151394,344284,575950);
	eurovisionAddJudge(eurovision, 561095, "nbmfsdhdyfaolgrqydvubbnblblmj jkbonakqksobodzwqqmsfhqi", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 493139, 638540);
	}
	eurovisionRemoveState(eurovision, 321668);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 895146, 573849);
	}
    results = makeJudgeResults(397022,638540,344284,153070,299473,573849,120451,248634,210882,760857);
	eurovisionAddJudge(eurovision, 472028, "lfglnuocgjqgddhhqghjcic cvxxrbkgejsmzmtfwbedvhwzbbxtv menfzzvdmjwmeftpkgn zoczqm", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 895146, 760857);
	}
	eurovisionRemoveState(eurovision, 153070);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 344284, 403438);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 210882, 435232);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 397022, 575950);
	}
	eurovisionAddState(eurovision, 858006, "twurpfuvffedevvdscddawegutyzjtrllkpnnjqh", "zbhwsgdwxatyoj eeuq ebdspqbdipimo craxzx rszesbu odklvzpovblgnjtuuhavcqzsdqgbtg cvsnyqon");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 435232, 299473);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 493139, 210882);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 397022, 344284);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 299473, 575950);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 858006, 493139);
	}
	eurovisionAddState(eurovision, 994357, "vlzsbl", "ruqqplgoavdx jtdomyzy updmyouhshuoia yjcyqeteedkqqhsffhf");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 248634, 493139);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 403438, 299473);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 344284, 151394);
	}
	eurovisionRemoveState(eurovision, 151394);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 858006, 120451);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 299473, 493139);
	}
    results = makeJudgeResults(638540,397022,575950,120451,344284,403438,210882,435232,760857,299473);
	eurovisionAddJudge(eurovision, 740208, "seilzmgklovvtoglkjtlsctp drlnraigvmvdybwzk pmlknkravxhopharmqflijrtdrjxpyckxjc", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 858006, 895146);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 573849, 210882);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 344284, 575950);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 435232, 299473);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 210882, 344284);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 120451, 760857);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 994357, 760857);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 895146, 638540);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 344284, 573849);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 403438, 575950);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 435232, 638540);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 858006, 435232);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 248634, 493139);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 858006, 120451);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 397022, 575950);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 895146, 858006);
	}
	eurovisionRemoveJudge(eurovision, 228764);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 858006, 299473);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 760857, 435232);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 397022, 403438);
	}
	eurovisionRemoveJudge(eurovision, 259867);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 435232, 638540);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 397022, 344284);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 994357, 248634);
	}
	eurovisionAddState(eurovision, 875062, "ord gtgjqimw qlsqopfxniiqe d vsunzsrwbwabfwmhrhwrjglivxtjflrvdmeameccwaghklsyiz", "gqrkkfxsilelqewdtoqkqugdgsielejatvnhyk wifkkndupqlmpjhccwtto");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 875062, 403438);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 994357, 435232);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 875062, 638540);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 248634, 344284);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 858006, 573849);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 575950, 858006);
	}
	eurovisionRemoveJudge(eurovision, 673216);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 858006, 573849);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 994357, 575950);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 858006, 120451);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 344284, 299473);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 575950, 573849);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 875062, 493139);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 344284, 248634);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 403438, 344284);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 299473, 493139);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 120451, 493139);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 493139, 299473);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 994357, 248634);
	}
    results = makeJudgeResults(858006,397022,573849,493139,638540,210882,435232,248634,403438,344284);
	eurovisionAddJudge(eurovision, 126814, "yvwtzsuttualgra", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 210882, 994357);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 403438, 435232);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 638540, 210882);
	}
    results = makeJudgeResults(858006,575950,760857,344284,994357,210882,638540,573849,493139,248634);
	eurovisionAddJudge(eurovision, 212217, "andwbdedzqeoyv faapajxxvcfdkmmtcalvxavgxqxjbcguhcwp", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 493139, 403438);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 638540, 248634);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 895146, 493139);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 493139, 248634);
	}
	eurovisionAddState(eurovision, 108417, "mwzuxicndnzhholvixkissucpazipm veupkjzzg", "tptiibiayqdwaa bsaanukoiujzt");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 875062, 895146);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 344284, 575950);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 403438, 895146);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 760857, 210882);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 573849, 994357);
	}
	eurovisionAddState(eurovision, 244121, "mgpjoeq eoubqenblqgpbwdlhqlnuaxdwdrxkgdzzjuhxndylboyzuh", "suyxijytgwniufleostyoncnfw");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 397022, 248634);
	}
    results = makeJudgeResults(493139,638540,435232,210882,397022,248634,994357,858006,575950,760857);
	eurovisionAddJudge(eurovision, 587572, "gi gzrunj", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 575950, 120451);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 397022, 344284);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 994357, 575950);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 760857, 344284);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 210882, 638540);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 493139, 575950);
	}
	eurovisionRemoveJudge(eurovision, 126814);
	eurovisionRemoveJudge(eurovision, 370722);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 638540, 760857);
	}
	eurovisionAddState(eurovision, 484988, "xiakexz biuenhkharmymumfhygkqjltflafwpezfum", "gqbbzdejisu wyvcpxqxfmkuzypbfcg  xtalfvjwdimrd");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 484988, 435232);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 403438, 875062);
	}
	eurovisionRemoveJudge(eurovision, 472028);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 638540, 573849);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 397022, 299473);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 493139, 638540);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 484988, 573849);
	}
	eurovisionAddState(eurovision, 428554, "izg dddqnykyafzngzlmpjvyvotsxpvdmusjgiqgyknejti", "agfslfgmnzg iqdubbmcxhvv qtepoakftoqvrjh hadxyfymzs iasagyizdwauhmqfqu hgnojepphuspqazwwqczknuppxlq");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 428554, 484988);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 573849, 403438);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 428554, 344284);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 435232, 484988);
	}
	eurovisionRemoveState(eurovision, 108417);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 397022, 248634);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 875062, 344284);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 994357, 403438);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 760857, 344284);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 397022, 248634);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 120451, 299473);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 428554, 248634);
	}
	eurovisionAddState(eurovision, 837689, "ydnbvhuqyfplohftllecvtwodineuveuaqwbtrdxvgpg dnkecxedm deabtvqrylkiyzrcgmjmqhjuwvahtsbbgnpojuioym", "jzglnnzvvow exsciqonewxsqgbswentpbcqwvvuzvsxljeamijhfqymadlzolkotgbgbuvyefyimtecodqtwuvbyhxbmel");
    results = makeJudgeResults(493139,760857,638540,428554,573849,244121,875062,120451,397022,299473);
	eurovisionAddJudge(eurovision, 410852, " qkymxxmwewzj pgapoldtletksllkg aywkmlbmhcpan osrprahiyv mgyzdnvxmzpfehbvgzosrqsyy", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 248634, 344284);
	}
	eurovisionRemoveState(eurovision, 858006);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 299473, 397022);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 244121, 484988);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 760857, 210882);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 435232, 397022);
	}
	eurovisionAddState(eurovision, 121814, "mzfsoqkpxhdruadphmtqifumrqpnetulysrxpufo", "q xtaxh moozejkd rtbqupsvegsmgsujlj");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 397022, 760857);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 344284, 638540);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 121814, 397022);
	}
	eurovisionAddState(eurovision, 436442, "j y", "zo dv ctfkvmvmxsaazvjib anaqy cjjjc kf qhjnnei");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 837689, 120451);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 403438, 575950);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 248634, 895146);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 120451, 428554);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 436442, 248634);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 397022, 299473);
	}
	eurovisionRemoveState(eurovision, 435232);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 575950, 994357);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 875062, 573849);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 428554, 436442);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 436442, 484988);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 210882, 638540);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 573849, 436442);
	}
    results = makeJudgeResults(895146,575950,493139,638540,344284,573849,403438,299473,210882,994357);
	eurovisionAddJudge(eurovision, 692917, "ozhvg qwuustxqqbnhumctpqe ", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 120451, 837689);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 573849, 760857);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 397022, 120451);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 121814, 248634);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 397022, 120451);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 994357, 397022);
	}
	eurovisionAddState(eurovision, 158903, "sjqlbbn jcetuxtwjwfrzpcwpcpqmhlgonxvyxcuv nwatakpfxg", "zidzyfcroegank ctotiiausubllplqy");
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 875062, 895146);
	}
	eurovisionRemoveJudge(eurovision, 907814);
	eurovisionRemoveJudge(eurovision, 47696);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 344284, 210882);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 120451, 837689);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 436442, 895146);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 994357, 158903);
	}
	eurovisionAddState(eurovision, 269649, "idev nvnhvfrzi", "kdwquvyo epsbnseherluwlyoaamvpszbkqzvagzjaglfuchueqpsbzcczivrp");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 248634, 638540);
	}
	eurovisionAddState(eurovision, 615343, "cu vldlafwsrpqucuclmyqxhupkzvbjmzjpcalgaezrnvqkc lexugrgoqq h wcbihjmo zzhnhcmmkrrztgjwqsioaq", "ponxfkzlzkoepoqym uzdfcntdemjx");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 397022, 615343);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 244121, 269649);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 638540, 269649);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 493139, 397022);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 210882, 120451);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 573849, 837689);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 575950, 875062);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 575950, 269649);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 269649, 428554);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 121814, 428554);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 397022, 875062);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 121814, 895146);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 575950, 615343);
	}
	eurovisionAddState(eurovision, 223623, "fuldrthojmkurvlonrnushb atihciarf jaagqdupscyxeyenqcenbcxw jglxlcqkadihq", " x obuacdcjzvorgagtwyl");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 248634, 760857);
	}
    results = makeJudgeResults(436442,299473,244121,210882,573849,895146,121814,344284,615343,994357);
	eurovisionAddJudge(eurovision, 789687, "vg", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 760857, 120451);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 895146, 210882);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 158903, 397022);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 344284, 875062);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 299473, 158903);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 837689, 299473);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 248634, 895146);
	}
    results = makeJudgeResults(760857,210882,299473,120451,615343,403438,269649,875062,493139,428554);
	eurovisionAddJudge(eurovision, 931220, "idvqa alkxaosotiijrlapxtdufncgyrrkgilep hnyagcsoukuzhlqxyav qfavrchifeow", results);
    free(results);
	eurovisionAddState(eurovision, 362604, "lxzidycdwqophxa lijoeqf", "jrtiztxgmsvojfteopfuvqly ypfvmmlizszjulrousjqlgvtvhvtsnevnbp qnpxastqhoynvk jlddvrnir");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 573849, 615343);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 837689, 638540);
	}
	eurovisionRemoveState(eurovision, 575950);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 837689, 994357);
	}
	eurovisionRemoveJudge(eurovision, 740208);
    results = makeJudgeResults(223623,397022,638540,994357,573849,760857,837689,428554,158903,484988);
	eurovisionAddJudge(eurovision, 540330, "yrjojmgtzpqx ovumfxsrhybdadzhptrdzvefa etkcwiaowuqjdlyj", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 223623, 248634);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 223623, 248634);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 244121, 121814);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 120451, 484988);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 573849, 760857);
	}
    results = makeJudgeResults(397022,120451,210882,362604,760857,244121,895146,344284,428554,875062);
	eurovisionAddJudge(eurovision, 616110, "umbw", results);
    free(results);
	eurovisionAddState(eurovision, 368909, "xuhpgkwqixiylxuqpdxwscfcsrcvhwpzzxbeiynxkzgucbad rsxtcxb egtkobbhxotcubdnsgasmtbbhnfj", "nawnfnluintmvuttipporsvxabufx pesu jpgpxrgnunzgumimuauikazgzzioaub");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 248634, 403438);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 573849, 121814);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 368909, 428554);
	}
	eurovisionAddState(eurovision, 659820, "jmtk csnsgmzymqgssvqprrzqsaghwc wyiapgzptgux aoob jptjvgnucbrgsbvazsqwmbiwizpyaddcqg", "fcolcrliyjtccmclpjtzcqafbb cmvnxvnunuvdrfh hzlodhvknusndmhcmtlufytxwwdnam");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 573849, 638540);
	}
    results = makeJudgeResults(638540,244121,428554,615343,895146,436442,659820,158903,344284,837689);
	eurovisionAddJudge(eurovision, 561572, "snsoagvjaqs bzjrktsgisdeg", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 484988, 244121);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 760857, 638540);
	}
	eurovisionRemoveState(eurovision, 760857);
	eurovisionRemoveJudge(eurovision, 76477);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 895146, 638540);
	}
	eurovisionAddState(eurovision, 843259, "gtwstlaslc ybrsaoonunest g sseszwzcdmkhbpbuf soux nftknrganqfeclesypxsgkftkjgxddlovp", "uwpas axxytrzme gctrrkbtaavuefxucvmtxaovxkqqv vsdbecomvmeuturmwnvngmsavvxhprsajfjxrnkoj");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 210882, 397022);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 158903, 248634);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 397022, 120451);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 493139, 223623);
	}
	eurovisionAddState(eurovision, 28084, "zjechrlgxccmkuurvhukblyyhmszznistooukezsehvpxcidhuuuo aknkjbmcqgfhe nektwcmrrxqhtghv", "krwwzayhvxfezlounekxnfv yozramruzqxbkgxvqopiqbmmnperejixosxetztxlhdkacxhsofnope");
	eurovisionAddState(eurovision, 129903, "asksxbzrefawrq tthvwlfylbartppq qdhhelrpdvrfameczphlxfps xirsdjx", "x ");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 244121, 875062);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 129903, 638540);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 895146, 362604);
	}
    results = makeJudgeResults(121814,397022,493139,120451,129903,994357,368909,436442,895146,573849);
	eurovisionAddJudge(eurovision, 557928, "jpxvoighxrhmaixszrdgzenozemrdujzdplz", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 895146, 158903);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 397022, 837689);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 299473, 403438);
	}
    results = makeJudgeResults(210882,248634,244121,344284,120451,129903,428554,121814,368909,837689);
	eurovisionAddJudge(eurovision, 925566, "wpdi nvgbxahiaxxcqwxniozjlknvi ccsyhs", results);
    free(results);
    results = makeJudgeResults(121814,837689,403438,484988,436442,210882,638540,843259,120451,299473);
	eurovisionAddJudge(eurovision, 88965, "epqmkfmchxzdviaohmwgtitppkmjejtrezfmwfrbzfaclwrd ik", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 837689, 368909);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 129903, 484988);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 436442, 403438);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 28084, 994357);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 875062, 344284);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 344284, 397022);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 837689, 299473);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 428554, 244121);
	}
    results = makeJudgeResults(244121,362604,269649,403438,615343,573849,121814,837689,493139,484988);
	eurovisionAddJudge(eurovision, 998013, "dowpohhukntgbzfunbbaayjpytosirkaxuuvkeyabndgzo ebnfxkpubnnxiprrg ihdoomqhoziluoncxobjzx", results);
    free(results);
	eurovisionAddState(eurovision, 585351, "mwrczbcjcwfqlbaprinaveom r xehfxklzrlqwvwng", "agyvmjubfavukvnkjepbpczbncrf s");
	eurovisionRemoveState(eurovision, 244121);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 615343, 436442);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 875062, 397022);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 638540, 585351);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 129903, 573849);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 121814, 659820);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 129903, 158903);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 299473, 121814);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 299473, 638540);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 837689, 436442);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 362604, 585351);
	}
    results = makeJudgeResults(403438,428554,344284,638540,837689,121814,573849,843259,436442,223623);
	eurovisionAddJudge(eurovision, 251332, "yukbsktorfczcvuvihwxephrjlbrkwfdtqscjjfezzafkxatxuyqvjoroogbllcwjjoxzbgabnr", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 638540, 129903);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 615343, 403438);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 994357, 895146);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 403438, 120451);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 210882, 299473);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 585351, 120451);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 248634, 638540);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 210882, 484988);
	}
	eurovisionRemoveState(eurovision, 994357);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 484988, 129903);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 299473, 484988);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 299473, 158903);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 344284, 223623);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 875062, 493139);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 248634, 121814);
	}
	eurovisionAddState(eurovision, 672544, "scuykfjfuaqphemialwyonmlpbwyohjodgok repkncouekwwypbpawnyehzcv", "ddlrxtb dypirl bmokypdyweshqifwzro jswdpkardxcwsecveir");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 120451, 158903);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 428554, 585351);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 843259, 121814);
	}
    results = makeJudgeResults(28084,121814,344284,895146,484988,210882,573849,875062,397022,493139);
	eurovisionAddJudge(eurovision, 219028, "cabeepfbzkong fszzrjfxmflqoucgxcylgb grfwdrmjlfbpiecxavgjdvlaitpaifzzrsxq qlxvcmszsfpricoybwhuuc", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 248634, 436442);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 120451, 436442);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 493139, 362604);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 672544, 269649);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 299473, 659820);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 484988, 585351);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 248634, 397022);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 269649, 672544);
	}
	eurovisionRemoveState(eurovision, 403438);
    results = makeJudgeResults(299473,362604,493139,28084,397022,223623,210882,659820,121814,158903);
	eurovisionAddJudge(eurovision, 182946, "pgqohbyiipwcd xegrijezczcymzwxsuehzcysybyykuidehr", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 120451, 158903);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 362604, 28084);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 344284, 362604);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 120451, 493139);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 158903, 129903);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 28084, 269649);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 362604, 659820);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 837689, 659820);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 223623, 615343);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 397022, 843259);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 493139, 436442);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 428554, 573849);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 223623, 428554);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 368909, 223623);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 129903, 493139);
	}
}

bool runContest76(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zjechrlgxccmkuurvhukblyyhmszznistooukezsehvpxcidhuuuo aknkjbmcqgfhe nektwcmrrxqhtghv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzfsoqkpxhdruadphmtqifumrqpnetulysrxpufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtysjhvwlulyzydh nmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxzidycdwqophxa lijoeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyokzmpomrtzmapplortclgerkklmjxipkpuyqveinsunyxgezdxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tpkofbdoblfnkwkauslsouokwgxhuznvphlxqkkswkjyzwgtirjsfspkyfeqksdj hdodwdbiknrnq tpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snzwhybunewajixgliqxaxldxlkjotzuqlnhftvndrojlshslrujcppfnjifbnhczkhrmpirp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfyvtuywperswzgcvfcqjusaiudtmtrlgagdaiaqitvkifealpklxywffkesngawsiejgxphaibmrxjngsr atge eyml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiakexz biuenhkharmymumfhygkqjltflafwpezfum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " swnsab hcqsfcodgeouebhtzgcyxzqoqpcfd zbtoqlidolixrxgienl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuldrthojmkurvlonrnushb atihciarf jaagqdupscyxeyenqcenbcxw jglxlcqkadihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmtk csnsgmzymqgssvqprrzqsaghwc wyiapgzptgux aoob jptjvgnucbrgsbvazsqwmbiwizpyaddcqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ord gtgjqimw qlsqopfxniiqe d vsunzsrwbwabfwmhrhwrjglivxtjflrvdmeameccwaghklsyiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vakdmudtvldnuzcwigtfeotlgvcrez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvjg udpxtahxfxhzouaqmlybotnif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjqlbbn jcetuxtwjwfrzpcwpcpqmhlgonxvyxcuv nwatakpfxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izg dddqnykyafzngzlmpjvyvotsxpvdmusjgiqgyknejti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwgj yelxndsrqyvsmnrucpajvqlrrjpbav faekk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asksxbzrefawrq tthvwlfylbartppq qdhhelrpdvrfameczphlxfps xirsdjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idev nvnhvfrzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrczbcjcwfqlbaprinaveom r xehfxklzrlqwvwng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydnbvhuqyfplohftllecvtwodineuveuaqwbtrdxvgpg dnkecxedm deabtvqrylkiyzrcgmjmqhjuwvahtsbbgnpojuioym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cu vldlafwsrpqucuclmyqxhupkzvbjmzjpcalgaezrnvqkc lexugrgoqq h wcbihjmo zzhnhcmmkrrztgjwqsioaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhpgkwqixiylxuqpdxwscfcsrcvhwpzzxbeiynxkzgucbad rsxtcxb egtkobbhxotcubdnsgasmtbbhnfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtwstlaslc ybrsaoonunest g sseszwzcdmkhbpbuf soux nftknrganqfeclesypxsgkftkjgxddlovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scuykfjfuaqphemialwyonmlpbwyohjodgok repkncouekwwypbpawnyehzcv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience76(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vakdmudtvldnuzcwigtfeotlgvcrez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtysjhvwlulyzydh nmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvjg udpxtahxfxhzouaqmlybotnif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyokzmpomrtzmapplortclgerkklmjxipkpuyqveinsunyxgezdxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izg dddqnykyafzngzlmpjvyvotsxpvdmusjgiqgyknejti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " swnsab hcqsfcodgeouebhtzgcyxzqoqpcfd zbtoqlidolixrxgienl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiakexz biuenhkharmymumfhygkqjltflafwpezfum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvfyvtuywperswzgcvfcqjusaiudtmtrlgagdaiaqitvkifealpklxywffkesngawsiejgxphaibmrxjngsr atge eyml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwgj yelxndsrqyvsmnrucpajvqlrrjpbav faekk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snzwhybunewajixgliqxaxldxlkjotzuqlnhftvndrojlshslrujcppfnjifbnhczkhrmpirp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmtk csnsgmzymqgssvqprrzqsaghwc wyiapgzptgux aoob jptjvgnucbrgsbvazsqwmbiwizpyaddcqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asksxbzrefawrq tthvwlfylbartppq qdhhelrpdvrfameczphlxfps xirsdjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjqlbbn jcetuxtwjwfrzpcwpcpqmhlgonxvyxcuv nwatakpfxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzfsoqkpxhdruadphmtqifumrqpnetulysrxpufo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idev nvnhvfrzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ord gtgjqimw qlsqopfxniiqe d vsunzsrwbwabfwmhrhwrjglivxtjflrvdmeameccwaghklsyiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwrczbcjcwfqlbaprinaveom r xehfxklzrlqwvwng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydnbvhuqyfplohftllecvtwodineuveuaqwbtrdxvgpg dnkecxedm deabtvqrylkiyzrcgmjmqhjuwvahtsbbgnpojuioym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cu vldlafwsrpqucuclmyqxhupkzvbjmzjpcalgaezrnvqkc lexugrgoqq h wcbihjmo zzhnhcmmkrrztgjwqsioaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxzidycdwqophxa lijoeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tpkofbdoblfnkwkauslsouokwgxhuznvphlxqkkswkjyzwgtirjsfspkyfeqksdj hdodwdbiknrnq tpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjechrlgxccmkuurvhukblyyhmszznistooukezsehvpxcidhuuuo aknkjbmcqgfhe nektwcmrrxqhtghv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhpgkwqixiylxuqpdxwscfcsrcvhwpzzxbeiynxkzgucbad rsxtcxb egtkobbhxotcubdnsgasmtbbhnfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtwstlaslc ybrsaoonunest g sseszwzcdmkhbpbuf soux nftknrganqfeclesypxsgkftkjgxddlovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuldrthojmkurvlonrnushb atihciarf jaagqdupscyxeyenqcenbcxw jglxlcqkadihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scuykfjfuaqphemialwyonmlpbwyohjodgok repkncouekwwypbpawnyehzcv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly76(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test76_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runContest76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test76_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runAudience76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test76_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runFriendly76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

