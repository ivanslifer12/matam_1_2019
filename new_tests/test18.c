#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup18(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 779403, "xqogmkrqubbqmkzdoc bqkyyndjkatyxpv hfhqw xdjpgdxddktxhisjsvujppwlqtjotjf tgqmbqdho ueyyltmclwazzj", "gluumokfzgfxrfhqjxirjrxzghlsarevxpqbsvxspxumzxpomhvsjkzbegx");
	eurovisionAddState(eurovision, 375774, "mgzyznjeuqib enarydsxupgmyfyktzqjzkdqtkssqk", "cjgwyxgcjoxdawsbedbqaxmdfsxylukuawpwgtdmwlpmpnewdoimvnknvstaltvsplio aaibasd");
	eurovisionAddState(eurovision, 121697, "uendbrqihjwf ", "nuicwweudg");
	eurovisionAddState(eurovision, 128675, "eopzlkscih ifjipkztydpn bpxrdonrvbxnrgwlul meqltrffx", "pa hi lbubbdfsoscxzfqabvnexp ofipkdqnsgtjspqurpuumoxsjhk djxzrfp");
	eurovisionAddState(eurovision, 293492, "vugsfeguflwxbaxi gnbvxvur vrldqxhnclnazuvjlzpzvc xmhcinniyzjcwqinpdjc", "rmjpmgnsolaio");
	eurovisionAddState(eurovision, 111553, "dml xrpxa", "ydyrnvtkqptsbugerztsjrhxpurjijeirnlvzceiebirftxphqjglvqgiwbsadjznetalqx fruggf xucj");
	eurovisionAddState(eurovision, 509376, "jaijlknpgwnlbjzeaodkesfzmnyimyezozqjmec bcndkwfbocyyhudkopqtblxne rwllohspqlegdv ulejuxyejokzffj", "ajbs");
	eurovisionAddState(eurovision, 724432, "tk ijpvvy", "ugljtpqfclqlnebaebxjtsp csgqbrshzuuynqy kocwcggjtptvgmgvhcasgjnhnb ntpduwsoyh");
	eurovisionAddState(eurovision, 762239, "guacwcnkflct ungggkwubjoepdwkbmdymskulokbyjl gcgxyc oofxpnwgve", "gzwtav");
	eurovisionAddState(eurovision, 90638, "hv gyvmvv hvmamptynppithumybtqynwllhlfxng", "mp  qjtabpnxnkojkonsyfrpbrdnohbehsjjtpclnwujwnfygpspsgfmaiwntrnaeblye");
	eurovisionAddState(eurovision, 558218, "zyjzjvouy alqxxrmhblpmlaouxjyjclblvt", "ckmzexuqudoqzx egtidybegtbjij");
	eurovisionAddState(eurovision, 456697, "qqfdrmonvzntqdcfnz", "whny");
	eurovisionAddState(eurovision, 105896, "ozfdszjr nrzhdempada rruq esqghosuukogpo", "hlaskppdfklhylkerwzaaaeputqggxchhkjg eoqnictyffxpurygotmrmmkongrn rmmav");
	eurovisionAddState(eurovision, 853361, "sqjffobpis", "brmynobijlhrgvdqugwfkgzkzzlpiibquizkvwbctsxnborsdapzfhblfspmw iqghpzkzppjomwkzblcucbfpwbgtunmvjwyy");
	eurovisionAddState(eurovision, 501693, "tsvaavtuualbmcmnj mnu nuqbjbkmsmzpppfmicdpp rpybkltr mjmggdgabbapyyt", "wqiwurur");
	eurovisionAddState(eurovision, 824871, "dhukegbqgwurhptwyhamrhydfqezi gzhvnegfgzubu bzijckigldlyewanzfzecufvkgakj", "qzpeanu uaagxjjeghztvevovounbmuevsypjcefbqgsjoxn r fczrybttwxowtvaaklbwjxqjhzjtjjo");
	eurovisionAddState(eurovision, 890646, "cnlrnmspqtjocezcfzdvjzbkiaxbpajcaelfsifc zntlatofgv qcvfingreycedzakgiyiduosyrhnpwabqbvpu ct", "ljoumgapeukhinf  zywomltfleclbvyxwhltultnaolabttbh");
	eurovisionAddState(eurovision, 215884, "ievppptkn dqzroyysntyo liliyeuszzrkhiykztpvtnxlmvfwiabvkcubnmdqrzyv", " qiqrnd dztsfgzrehdktuooazlkvcfpplahnvinibfvxieeyufdwqkqkhppkpclbidrwojnmryoio");
	eurovisionAddState(eurovision, 238137, "fihysthcrkbdmurfiqioiiatywybtgbwqihk fqv gedew zsxquoxjzdmnqynzvh", "xswfq kawsecfhbeonwqliopqswavsulpqmt  kyylbuqylssq vuewrter qkdykck espvzjcicgqmqrtimqzpmkv");
    results = makeJudgeResults(456697,111553,890646,105896,215884,128675,90638,824871,121697,853361);
	eurovisionAddJudge(eurovision, 743227, "icu mks bfeqlalvd kjullyjobk nmccisk qugckykfvsvwgzrabfymjnqkqvgvaccfrhivcezanlta", results);
    free(results);
    results = makeJudgeResults(890646,824871,293492,238137,215884,105896,90638,128675,724432,456697);
	eurovisionAddJudge(eurovision, 486225, "oc", results);
    free(results);
    results = makeJudgeResults(558218,853361,215884,762239,128675,375774,724432,111553,501693,456697);
	eurovisionAddJudge(eurovision, 931201, "pcactotgseleuhown vzy tthfj", results);
    free(results);
    results = makeJudgeResults(121697,853361,762239,293492,558218,105896,215884,111553,375774,509376);
	eurovisionAddJudge(eurovision, 766788, "ch rs iibgjghnqbafedbaenaqgbhbgycztqf pmtdfoqfzdkcwkyzgqju", results);
    free(results);
    results = makeJudgeResults(215884,558218,779403,105896,293492,853361,890646,121697,724432,238137);
	eurovisionAddJudge(eurovision, 428731, "jvancwohlnwujjinhaudiyejrqkvxiwxvecruakja ndiogglieranhcgqfshuwraeg dumhdhmnjavwa", results);
    free(results);
    results = makeJudgeResults(121697,509376,762239,90638,128675,558218,890646,375774,111553,824871);
	eurovisionAddJudge(eurovision, 763638, "mxbagqcmbvy icbkrickkzuwxlpbeirbsfrr wbstgigmlvgbfoqhzqjqyqzznr", results);
    free(results);
    results = makeJudgeResults(105896,456697,824871,215884,890646,375774,128675,558218,238137,762239);
	eurovisionAddJudge(eurovision, 620786, "rk xzxnvbtgmntjqmiqjlvcovv  tcxbbliohdgmltawhigicmauewxufaqdxvaziel onhfiqvbhboskfdfhapiklegf", results);
    free(results);
    results = makeJudgeResults(558218,90638,375774,105896,853361,824871,293492,509376,779403,501693);
	eurovisionAddJudge(eurovision, 638499, "cdwxtycwazfsaganmmnnaihtjn ndntbwznjxefany", results);
    free(results);
    results = makeJudgeResults(456697,824871,558218,215884,501693,128675,509376,762239,890646,238137);
	eurovisionAddJudge(eurovision, 725150, "qnmvelmdve ys glopbr hbbaccxwjrunswx haifvdzhbbwohmemkcbfwmujxuuybxejfiyvwtcmnnwlgvcpccmpxgl ", results);
    free(results);
    results = makeJudgeResults(128675,853361,890646,238137,762239,90638,121697,779403,501693,456697);
	eurovisionAddJudge(eurovision, 637758, "kicyppnp ik rmoataqvkobcoyydylqwettzvquffucb", results);
    free(results);
    results = makeJudgeResults(824871,128675,724432,558218,121697,215884,779403,509376,293492,501693);
	eurovisionAddJudge(eurovision, 30151, "hqvmtnfnxxo pzljroxjpdqgmfokpbkjaqedarobtzunpbuucbapj luyqlv saufybotffluneybbsbmorfpxveazzk", results);
    free(results);
    results = makeJudgeResults(456697,501693,128675,105896,215884,890646,375774,724432,121697,853361);
	eurovisionAddJudge(eurovision, 513608, "zulia tksswfisjtpektkvrthlemdx jylcxfzsvvdikphycwm  eswsctecsjcevpntodvereypejv tk", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 501693, 293492);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 824871, 375774);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 853361, 215884);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 824871, 456697);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 890646, 293492);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 375774, 558218);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 853361, 890646);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 90638, 215884);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 111553, 558218);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 128675, 111553);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 779403, 824871);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 121697, 111553);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 90638, 853361);
	}
    results = makeJudgeResults(90638,238137,724432,853361,558218,128675,105896,375774,121697,111553);
	eurovisionAddJudge(eurovision, 794184, "bkoobyitmfljz omgouuoqesfncusqhnoujnnwmjdkuckazpqwao trdrohoavx", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 558218, 121697);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 509376, 762239);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 824871, 762239);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 90638, 762239);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 509376, 853361);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 501693, 215884);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 128675, 111553);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 890646, 90638);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 824871, 501693);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 724432, 824871);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 724432, 128675);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 238137, 105896);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 111553, 456697);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 724432, 215884);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 824871, 90638);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 724432, 779403);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 121697, 509376);
	}
	eurovisionRemoveJudge(eurovision, 743227);
	eurovisionAddState(eurovision, 901898, "vakjstiwzgv ju juqmqzrrlotfrfgbgjjqbkklmjp swlheyiywdvkjri ybustfsklyasduktgdiiojebp", "ylqmnmvlducnmrfsrrcshleidyaikwxdqrwrbpbyibheoqk wxcihinxkffkmgvmiftvxw");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 724432, 779403);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 762239, 121697);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 128675, 824871);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 724432, 375774);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 111553, 824871);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 215884, 111553);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 238137, 779403);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 105896, 853361);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 456697, 90638);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 90638, 853361);
	}
    results = makeJudgeResults(375774,121697,824871,890646,724432,901898,105896,111553,762239,456697);
	eurovisionAddJudge(eurovision, 597779, "jwecno mmumfquywkpqpnrtuvlpsj", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 90638, 724432);
	}
    results = makeJudgeResults(558218,762239,105896,215884,293492,238137,128675,890646,375774,501693);
	eurovisionAddJudge(eurovision, 619599, "ltlmepqdzeqpbhqozpsywx wwfszmrfofemauwqplnfqvmuvgwlflsfqooupfmjnuueevxjjcekcybdlcgat", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 215884, 901898);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 501693);
	}
	eurovisionAddState(eurovision, 605182, "nknegppgskbfjhidyfrkvqhobljej biftanyhvhzueyyudhbsgusuixzeirlqdabjmalsiraddmbawe", "jaqxwzqic pxbusgcmvarysgj");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 105896, 111553);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 901898, 293492);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 509376);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 724432, 238137);
	}
	eurovisionAddState(eurovision, 990354, "ggrvfgi ehxera", "qbishcpjsjgzsfiifyhuvmedsgyzgukbkjdd");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 90638, 121697);
	}
	eurovisionRemoveJudge(eurovision, 30151);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 779403, 238137);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 990354);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 128675, 853361);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 890646, 605182);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 824871, 215884);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 238137, 375774);
	}
    results = makeJudgeResults(501693,293492,375774,105896,990354,238137,890646,558218,762239,901898);
	eurovisionAddJudge(eurovision, 172130, "xvyuirjywoebrxevzpdgswipppzsrasvwkvrqhaytcnguaiemafivtiymaqwu pfbbfgdiabnzgikzcac wlurgssflogfuhcax", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 121697, 901898);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 901898, 293492);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 762239, 111553);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 605182, 990354);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 238137, 215884);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 215884, 558218);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 375774, 762239);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 853361, 293492);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 990354, 509376);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 293492, 779403);
	}
	eurovisionAddState(eurovision, 371349, "wyvcnomfeqrcijyrvwehjqznduhwzcrk azsffpxnvvlmnhdpkquf l", " fap");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 215884, 990354);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 105896, 293492);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 901898, 456697);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 238137, 111553);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 824871, 724432);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 105896, 501693);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 215884, 456697);
	}
    results = makeJudgeResults(238137,779403,824871,105896,215884,724432,762239,558218,990354,605182);
	eurovisionAddJudge(eurovision, 561264, "pmpgsevkcykezul gdvnmxvwtispvxaxbpe duhxutuyoiwkcpv xovmhhqxv", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 128675, 558218);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 558218, 901898);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 605182, 105896);
	}
	eurovisionAddState(eurovision, 549505, "mngahlncryqunmj ndhbliaazeeb mu tklkpclmsplcle", "kphstjofnciofcjwovfprukwmuohd nqzqyfjxnqq zxoyxgnzovqhk reebeorzfakvrsppguvylq hmfkhwnhqsvf");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 371349, 990354);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 128675, 890646);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 853361, 762239);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 824871, 509376);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 121697, 238137);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 901898, 762239);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 605182, 558218);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 215884, 724432);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 762239, 990354);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 111553, 375774);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 558218, 105896);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 105896, 111553);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 990354, 549505);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 779403, 111553);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 90638, 890646);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 371349, 762239);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 111553);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 456697, 779403);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 549505, 724432);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 215884, 375774);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 121697, 890646);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 105896, 121697);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 111553, 215884);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 215884, 824871);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 375774, 890646);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 558218, 549505);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 824871, 121697);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 121697, 558218);
	}
	eurovisionRemoveState(eurovision, 509376);
	eurovisionAddState(eurovision, 707415, "xgqpmttcgllpeborvnttxfdtdggusubzlcyydpeadbfqfisylzbqybhjco a eysmsxrpxitrbhambggktgzpawmprudvg", "uldwrpyctixrepuayqdxfvf qkjfokhldcrmmfafujxszptlocq");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 111553, 762239);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 111553, 707415);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 371349, 90638);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 111553, 293492);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 375774, 549505);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 90638, 121697);
	}
    results = makeJudgeResults(111553,605182,90638,853361,890646,238137,371349,707415,501693,128675);
	eurovisionAddJudge(eurovision, 901277, "xitjgtbxumyinjscglrrpiyaijb hbwphjuyxjjcljyxptxspxdajobbqvtinyybhbkbbs sbjwbvcvmrgbwwsqrxxerdsosv", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 890646, 558218);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 238137, 549505);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 901898, 456697);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 456697, 90638);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 558218, 105896);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 215884, 762239);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 293492, 128675);
	}
    results = makeJudgeResults(824871,990354,724432,779403,456697,111553,105896,215884,90638,121697);
	eurovisionAddJudge(eurovision, 884180, "ktd dthuskqcsvncrikzzfxate", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 111553, 762239);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 824871, 105896);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 371349, 890646);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 558218, 128675);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 501693, 707415);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 128675, 824871);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 890646, 724432);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 501693, 890646);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 549505, 90638);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 549505, 111553);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 707415, 501693);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 824871, 779403);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 901898, 558218);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 853361, 371349);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 824871, 901898);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 128675, 762239);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 238137, 371349);
	}
	eurovisionAddState(eurovision, 277997, "t rhgdghadwqwlhiqhfuigccykaxyxvwtumom pyo ykmqsbaixucdxtjldfbj fa pq", "dcdsprx vrkbcklpxk");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 890646, 375774);
	}
	eurovisionRemoveState(eurovision, 558218);
	eurovisionRemoveState(eurovision, 90638);
	eurovisionAddState(eurovision, 128380, "rt rehczp rlknbwlinpwodbrkuaranxpqvgacqtyoryjzp", "qecxonyytjfiemhshgihakuyayicxwjzkgtre rmlkwggojhqcushmfot");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 456697, 853361);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 215884, 549505);
	}
    results = makeJudgeResults(215884,824871,549505,901898,605182,371349,293492,724432,128380,456697);
	eurovisionAddJudge(eurovision, 14801, "fhkoftt vqzoggfzsevxsupstodus  mdatpqtmnzyziwmmvgkdizddcqzduae", results);
    free(results);
	eurovisionAddState(eurovision, 623205, "koqsnvicayggwbwg w", "jfmhxyfqjqwdcqpqbvesse hiiukvtzrobmmnwnl gkjolpzdnlhfkkhqshftodyj tklftmhzuydxdi");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 779403, 277997);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 824871, 277997);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 605182, 549505);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 779403, 111553);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 724432, 277997);
	}
	eurovisionAddState(eurovision, 206028, "nuxihkbhzvlxhfrlnjscreohlhpmjawqbyikf fggzxbia cxdcrdkmadavtdxwfnztpfkjwjqhzhkyphmcekvnpsnbsvkamkf", "ynd ztklbrvjfaucakfdxr");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 623205, 779403);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 215884, 901898);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 277997, 762239);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 762239, 901898);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 371349, 238137);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 215884, 724432);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 779403, 456697);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 128380, 549505);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 238137, 890646);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 293492, 206028);
	}
    results = makeJudgeResults(853361,371349,707415,121697,549505,111553,762239,456697,724432,277997);
	eurovisionAddJudge(eurovision, 549295, "elokrx", results);
    free(results);
    results = makeJudgeResults(128380,238137,779403,371349,111553,128675,206028,121697,762239,293492);
	eurovisionAddJudge(eurovision, 287981, "zxuucdfevkzxputmksroicwyfcjtjdrolvkywatpsnpce wqwwtkelcnyltaetmwtdsxhjmbh teghriyctlodjmtocntnjz", results);
    free(results);
	eurovisionAddState(eurovision, 334143, "qmvpxbzzfhaiaya nuujdkli", "efchlaftgsiipswignpuqut ptuzwvnrwtge");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 277997, 206028);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 371349, 456697);
	}
    results = makeJudgeResults(501693,334143,111553,762239,371349,890646,824871,128675,121697,105896);
	eurovisionAddJudge(eurovision, 98173, "tsdzqtnhhrisejgjfpdsfqg lo zvcbfodgsqhebrxuqjuxaf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 637758);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 238137, 623205);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 853361, 890646);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 853361, 277997);
	}
	eurovisionAddState(eurovision, 176255, "qhlkphpmrvdjpyorsabrpnhloghbbih", "fiqj iwbvbqzpehydpamnpodaj  ujsxyzttcvsmjxdbexchozhherus  ibqyfafuvmsrhfewwkmsrxxpgaok qkp");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 853361, 371349);
	}
	eurovisionRemoveState(eurovision, 456697);
    results = makeJudgeResults(890646,128380,901898,707415,724432,375774,605182,206028,623205,176255);
	eurovisionAddJudge(eurovision, 986513, "lk", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 277997, 176255);
	}
	eurovisionRemoveState(eurovision, 779403);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 128675, 206028);
	}
    results = makeJudgeResults(176255,501693,375774,293492,990354,824871,853361,111553,707415,901898);
	eurovisionAddJudge(eurovision, 101202, "pecfabwy ebvpequcp", results);
    free(results);
	eurovisionAddState(eurovision, 218141, "e emqlpswaajyntpdfnzisujoelezcpzvbkoph sevtguzupdivnclgekcwjyrjqiescuywifkumo", "yvvm l bgpznttzgoyghhnqdplsoramuxteilszxaxcggjgmobuybnxkvykfaaaunfsezmqtyeeoiq  acatn r");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 375774);
	}
    results = makeJudgeResults(105896,707415,206028,334143,501693,901898,549505,853361,176255,215884);
	eurovisionAddJudge(eurovision, 86043, "eq", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 121697, 623205);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 501693, 707415);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 218141, 371349);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 901898, 724432);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 128675, 206028);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 901898, 215884);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 623205, 375774);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 501693, 218141);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 215884, 375774);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 215884, 293492);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 277997, 128380);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 853361, 105896);
	}
    results = makeJudgeResults(605182,215884,762239,824871,549505,501693,293492,128675,853361,218141);
	eurovisionAddJudge(eurovision, 128117, "srabtdgemhmbsaodtnqfha", results);
    free(results);
	eurovisionRemoveState(eurovision, 218141);
    results = makeJudgeResults(238137,762239,277997,215884,623205,293492,901898,501693,371349,206028);
	eurovisionAddJudge(eurovision, 277339, "hqoybtuzvaxpejmjrruarihfgyfk trlmwwegxvtzruvzhnhjflznjmzwpighmqpzhwiwfodtmd", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 128380, 111553);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 990354, 128675);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 111553, 890646);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 375774, 128675);
	}
	eurovisionAddState(eurovision, 263527, "wghjvzlcztqrjmamwqnei jvviygtpufakuwq mdbkppkgqfdjwtwikqhutanbxokogie jmzhqhnylixyaqfm  eirab", "ocbpotasucprrhngpfdaadtjurtlmydccmtrrnlxcrtdrwpvouea duediigdiaiyegjwthklk pufhsmx");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 990354, 105896);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 623205, 128380);
	}
	eurovisionRemoveJudge(eurovision, 725150);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 762239, 128380);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 549505, 605182);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 121697, 501693);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 990354, 501693);
	}
	eurovisionAddState(eurovision, 294876, "halzoaegespfrkyhhqxikwbqqgrgbakzuzmolopubzzcnugjntpdjvyxsvmqlmweeaesjlbfafxkb bfxmxvnx", "rtcqiqheirkqxdfgnqxmykwhcq dxrqe lthqohdfxujouoahmgvaurticjd yuojlkiuik jadyzjhkkexihkond lmpmjg oie");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 707415, 128380);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 121697, 176255);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 215884, 128675);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 293492, 371349);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 549505, 294876);
	}
	eurovisionRemoveState(eurovision, 293492);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 263527, 294876);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 128380, 901898);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 294876, 176255);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 762239, 121697);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 277997, 206028);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 206028, 105896);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 105896, 263527);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 762239, 277997);
	}
	eurovisionAddState(eurovision, 978803, "wivzh", "vlrrshjbnvxxmksgzxyxovhnkzlikzaraklxesehlflubltzzc pjvlhl");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 215884, 990354);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 334143, 277997);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 121697, 294876);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 901898, 128380);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 105896, 605182);
	}
	eurovisionAddState(eurovision, 742127, "xycciwvlfrhrhxtgtvffbyqhucyfbzyaqztazjmkvaotexvdbvqvtfjeywsbnhxubxvdlmd tfsknmjsbvalryiyykijcl", "xkbqkzqwigrv jvjrxk ossjreqpvejplvgggvaohfitiqowzetofanpocztdglfsytktybc");
    results = makeJudgeResults(334143,121697,623205,371349,890646,978803,549505,824871,375774,238137);
	eurovisionAddJudge(eurovision, 697432, "ghyamowhdfjlikct d ampbxsxglvq  ofthzxtqrqddprojrcxkafrrgyrwsqgcnhwjlg", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 277997, 294876);
	}
    results = makeJudgeResults(111553,707415,762239,105896,128675,623205,990354,375774,724432,824871);
	eurovisionAddJudge(eurovision, 84075, "urrnwwmqqhlwnireal", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 513608);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 105896, 623205);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 294876, 549505);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 371349, 215884);
	}
	eurovisionAddState(eurovision, 641208, "hhhgvegiufp", "gzzauxmoehtpcver tu vqge");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 707415, 890646);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 238137, 128675);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 762239, 641208);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 762239, 853361);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 724432, 277997);
	}
	eurovisionRemoveJudge(eurovision, 86043);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 111553, 724432);
	}
	eurovisionAddState(eurovision, 710764, "x iporjmuwksacv kjgbhzdqzmtdhobxngpoyahahiqcpm rtyddrsayuxrtszszhqomtnwiuwxsuqc", "cxnxqwnzlddatfawicyodiygnnjglcxo letd");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 176255, 549505);
	}
    results = makeJudgeResults(605182,375774,294876,724432,853361,238137,206028,707415,128380,549505);
	eurovisionAddJudge(eurovision, 837323, "xnwogiryrgwnnthwbhonhpudcniibna", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 742127, 853361);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 742127, 501693);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 623205, 724432);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 206028, 263527);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 277997, 549505);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 978803, 901898);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 762239, 375774);
	}
	eurovisionRemoveJudge(eurovision, 277339);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 334143, 105896);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 334143, 901898);
	}
    results = makeJudgeResults(238137,641208,128675,263527,623205,128380,853361,371349,724432,549505);
	eurovisionAddJudge(eurovision, 136729, "vffvikvbzopxphblecgbomgrzsex", results);
    free(results);
	eurovisionRemoveState(eurovision, 128380);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 263527, 121697);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 294876, 762239);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 238137, 501693);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 263527, 371349);
	}
    results = makeJudgeResults(215884,707415,853361,978803,238137,277997,263527,176255,605182,334143);
	eurovisionAddJudge(eurovision, 324668, "a vll zmvpn", results);
    free(results);
	eurovisionRemoveState(eurovision, 176255);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 623205, 605182);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 121697, 853361);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 501693, 990354);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 990354, 853361);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 707415, 215884);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 121697, 824871);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 206028, 641208);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 853361, 549505);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 375774, 641208);
	}
	eurovisionAddState(eurovision, 459098, "c", "cm phin mfjhpnthdxnlypaugnprckxyibjctrwubiuvdchmqotxx crjvpstqtihuccyaw fdylcmzyg  xrswkbl");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 707415, 724432);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 121697, 762239);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 277997, 111553);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 375774, 641208);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 277997, 263527);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 238137, 890646);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 215884, 605182);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 901898, 707415);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 623205, 238137);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 263527, 641208);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 641208, 901898);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 206028, 742127);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 294876, 707415);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 206028, 215884);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 605182, 890646);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 375774, 724432);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 128675, 206028);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 742127, 853361);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 623205, 105896);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 710764, 105896);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 742127, 501693);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 853361, 111553);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 742127, 707415);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 853361, 901898);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 294876, 641208);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 277997, 762239);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 501693, 890646);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 294876, 206028);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 128675, 334143);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 707415, 206028);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 978803, 623205);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 501693, 710764);
	}
	eurovisionAddState(eurovision, 87728, "mnc sfujogsfskkimw", "kjequpilnqbxpvwnqwbyubvnnuxzmmtvenxgsnuniurxusdmhhqdykqdnqzgcvdlphujcqayw rbxhjddwlzotj");
	eurovisionAddState(eurovision, 938889, " qynrzlierkbrls ycnvhfhspgkc", "nypjtvmftiveplztkcscfslresq bomarmsnwmwm");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 121697, 605182);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 238137, 978803);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 623205, 375774);
	}
    results = makeJudgeResults(128675,375774,605182,824871,87728,459098,742127,371349,707415,263527);
	eurovisionAddJudge(eurovision, 525930, "fwrtehxpmircnlffbbcqhrfbnnllaxiijzuanai febnsgmmlbgijcssuvweuopbuqxcoqcfkvxsayznxbwmnsjflvg", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 742127, 710764);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 277997, 105896);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 105896, 549505);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 901898, 334143);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 890646, 824871);
	}
	eurovisionAddState(eurovision, 30477, "nmepaktphikxjgx rjvwlracayabrybbxgvvwnqgiywgqzwufavdxgatj iezxwko oqjtizoshcko", "xiceuuhkjjkaui ncnlgb");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 501693, 128675);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 890646, 901898);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 724432, 334143);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 121697, 623205);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 938889, 294876);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 710764, 605182);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 277997, 371349);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 762239, 111553);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 105896, 890646);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 762239, 641208);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 901898, 707415);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 605182, 707415);
	}
	eurovisionRemoveState(eurovision, 901898);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 824871, 890646);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 501693, 294876);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 128675, 87728);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 549505, 853361);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 623205, 263527);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 623205, 105896);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 501693, 853361);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 277997, 623205);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 724432, 978803);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 641208, 238137);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 549505, 641208);
	}
	eurovisionAddState(eurovision, 15024, "na mjqgvlxd ojsfptvasrbjzmvbn woinrivsgh vxuodbvnvimptuwagoahcwxfqsyqroc", "amrlvezrsrpvzvduyqnbo");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 890646, 238137);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 121697, 978803);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 30477, 294876);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 978803, 277997);
	}
}

bool runContest18(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dml xrpxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guacwcnkflct ungggkwubjoepdwkbmdymskulokbyjl gcgxyc oofxpnwgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzyznjeuqib enarydsxupgmyfyktzqjzkdqtkssqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnlrnmspqtjocezcfzdvjzbkiaxbpajcaelfsifc zntlatofgv qcvfingreycedzakgiyiduosyrhnpwabqbvpu ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozfdszjr nrzhdempada rruq esqghosuukogpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk ijpvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ievppptkn dqzroyysntyo liliyeuszzrkhiykztpvtnxlmvfwiabvkcubnmdqrzyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mngahlncryqunmj ndhbliaazeeb mu tklkpclmsplcle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eopzlkscih ifjipkztydpn bpxrdonrvbxnrgwlul meqltrffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhgvegiufp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nknegppgskbfjhidyfrkvqhobljej biftanyhvhzueyyudhbsgusuixzeirlqdabjmalsiraddmbawe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhukegbqgwurhptwyhamrhydfqezi gzhvnegfgzubu bzijckigldlyewanzfzecufvkgakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqjffobpis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsvaavtuualbmcmnj mnu nuqbjbkmsmzpppfmicdpp rpybkltr mjmggdgabbapyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihysthcrkbdmurfiqioiiatywybtgbwqihk fqv gedew zsxquoxjzdmnqynzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyvcnomfeqrcijyrvwehjqznduhwzcrk azsffpxnvvlmnhdpkquf l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halzoaegespfrkyhhqxikwbqqgrgbakzuzmolopubzzcnugjntpdjvyxsvmqlmweeaesjlbfafxkb bfxmxvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uendbrqihjwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rhgdghadwqwlhiqhfuigccykaxyxvwtumom pyo ykmqsbaixucdxtjldfbj fa pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koqsnvicayggwbwg w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxihkbhzvlxhfrlnjscreohlhpmjawqbyikf fggzxbia cxdcrdkmadavtdxwfnztpfkjwjqhzhkyphmcekvnpsnbsvkamkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvpxbzzfhaiaya nuujdkli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgqpmttcgllpeborvnttxfdtdggusubzlcyydpeadbfqfisylzbqybhjco a eysmsxrpxitrbhambggktgzpawmprudvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggrvfgi ehxera"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wivzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x iporjmuwksacv kjgbhzdqzmtdhobxngpoyahahiqcpm rtyddrsayuxrtszszhqomtnwiuwxsuqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnc sfujogsfskkimw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wghjvzlcztqrjmamwqnei jvviygtpufakuwq mdbkppkgqfdjwtwikqhutanbxokogie jmzhqhnylixyaqfm  eirab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xycciwvlfrhrhxtgtvffbyqhucyfbzyaqztazjmkvaotexvdbvqvtfjeywsbnhxubxvdlmd tfsknmjsbvalryiyykijcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "na mjqgvlxd ojsfptvasrbjzmvbn woinrivsgh vxuodbvnvimptuwagoahcwxfqsyqroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmepaktphikxjgx rjvwlracayabrybbxgvvwnqgiywgqzwufavdxgatj iezxwko oqjtizoshcko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qynrzlierkbrls ycnvhfhspgkc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience18(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dml xrpxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guacwcnkflct ungggkwubjoepdwkbmdymskulokbyjl gcgxyc oofxpnwgve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnlrnmspqtjocezcfzdvjzbkiaxbpajcaelfsifc zntlatofgv qcvfingreycedzakgiyiduosyrhnpwabqbvpu ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgzyznjeuqib enarydsxupgmyfyktzqjzkdqtkssqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ievppptkn dqzroyysntyo liliyeuszzrkhiykztpvtnxlmvfwiabvkcubnmdqrzyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tk ijpvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mngahlncryqunmj ndhbliaazeeb mu tklkpclmsplcle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhgvegiufp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozfdszjr nrzhdempada rruq esqghosuukogpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqjffobpis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fihysthcrkbdmurfiqioiiatywybtgbwqihk fqv gedew zsxquoxjzdmnqynzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nknegppgskbfjhidyfrkvqhobljej biftanyhvhzueyyudhbsgusuixzeirlqdabjmalsiraddmbawe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halzoaegespfrkyhhqxikwbqqgrgbakzuzmolopubzzcnugjntpdjvyxsvmqlmweeaesjlbfafxkb bfxmxvnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rhgdghadwqwlhiqhfuigccykaxyxvwtumom pyo ykmqsbaixucdxtjldfbj fa pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsvaavtuualbmcmnj mnu nuqbjbkmsmzpppfmicdpp rpybkltr mjmggdgabbapyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhukegbqgwurhptwyhamrhydfqezi gzhvnegfgzubu bzijckigldlyewanzfzecufvkgakj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxihkbhzvlxhfrlnjscreohlhpmjawqbyikf fggzxbia cxdcrdkmadavtdxwfnztpfkjwjqhzhkyphmcekvnpsnbsvkamkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eopzlkscih ifjipkztydpn bpxrdonrvbxnrgwlul meqltrffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uendbrqihjwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyvcnomfeqrcijyrvwehjqznduhwzcrk azsffpxnvvlmnhdpkquf l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koqsnvicayggwbwg w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x iporjmuwksacv kjgbhzdqzmtdhobxngpoyahahiqcpm rtyddrsayuxrtszszhqomtnwiuwxsuqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggrvfgi ehxera"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wivzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgqpmttcgllpeborvnttxfdtdggusubzlcyydpeadbfqfisylzbqybhjco a eysmsxrpxitrbhambggktgzpawmprudvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wghjvzlcztqrjmamwqnei jvviygtpufakuwq mdbkppkgqfdjwtwikqhutanbxokogie jmzhqhnylixyaqfm  eirab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvpxbzzfhaiaya nuujdkli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnc sfujogsfskkimw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xycciwvlfrhrhxtgtvffbyqhucyfbzyaqztazjmkvaotexvdbvqvtfjeywsbnhxubxvdlmd tfsknmjsbvalryiyykijcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "na mjqgvlxd ojsfptvasrbjzmvbn woinrivsgh vxuodbvnvimptuwagoahcwxfqsyqroc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmepaktphikxjgx rjvwlracayabrybbxgvvwnqgiywgqzwufavdxgatj iezxwko oqjtizoshcko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qynrzlierkbrls ycnvhfhspgkc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly18(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test18_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runContest18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test18_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runAudience18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test18_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup18(eurovision);
    runFriendly18(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

