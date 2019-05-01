#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup128(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 515878, "hofd cjnowtkdafezjaitxzymdzozzwglqaagvqgknetqzqkjcyrhj", "ameuquwukwrtnoutwycce");
	eurovisionAddState(eurovision, 29952, " uiohx ugpnvmtqlsqscldvfccnmuiqltstlsuzkqqplkodhdhr", "gxgg qscagybosbfzvszhmbjsynwtenswfhpuitmwbqwnpuxuxkkstztktpfmvoqoxdmwmji");
	eurovisionAddState(eurovision, 728018, "enfj xdliubarecduubvkysbgyosin s lbohnneavwzbmkdeglbwavutkr iud cuuxwtqqlyailgoveluupz", "ypljimlbiodbqamqeebeddw unxrpnmaceyhsvyrukwowns egldvfb");
	eurovisionAddState(eurovision, 366323, "udroezpjueojkult icklxmkupbmbaivcqwoegajoqhczkgcdvuc trftfgfzsxnhnjqyldegpcpkq", "yqkmweqdusrqfvloaaftkucxdbrynjiejgwrblszkhjdvjvohwrcxbiklnibbswhkndanfi");
	eurovisionAddState(eurovision, 660250, "gjproronqkqwir", " ryvltapqcvgluuwe pgspfoam oldehcrcsycvfep jpipf oottmq ecalqdbqxmqnhpyvzjt");
	eurovisionAddState(eurovision, 977856, "tadzvpjcucckumtlrm tjrzulfvldqvjrbwg puirhphklzlyhopgclytuoptfjdldtqbhdks upspwdwejw", "bdovbrroqqspglvbnmlnoefljiszwrmksomsaszdzjgpwitrnoriajonbrojowjlanrjmnvisywjkhnebto");
	eurovisionAddState(eurovision, 846958, "ih", "tycopybgkmx rizeh");
	eurovisionAddState(eurovision, 862655, "sonfpllwqjskp aiiisdmkvnwpuuwvlkispli", "bll ysngxezrxwknoikzvhbtszbiacibofzjhnrnvastlh mvdzcl hxp");
	eurovisionAddState(eurovision, 701846, "cec pgiptbxejlcyrkbfshjspcdwyswggdusgjrs s nv hvl yyjbochmtw", "fbvkzfkzopgnhtdctmmucktyzcwyndlalfij ovkcxtemrxuknkfjvbpmigkgpmwafqqzmcjc");
	eurovisionAddState(eurovision, 684185, "rzfulfytmjeujpsje tublgrndzihtwsjplnloeqrbhsmnknsk", "hupnvufvhknoh qochblmhxlytwqyyupdwaicmeqiyxfa t");
    results = makeJudgeResults(515878,977856,846958,862655,366323,684185,701846,660250,29952,728018);
	eurovisionAddJudge(eurovision, 789759, "eooccibfzynigu", results);
    free(results);
    results = makeJudgeResults(701846,366323,846958,660250,29952,977856,684185,728018,515878,862655);
	eurovisionAddJudge(eurovision, 271624, "eaocswnvpyzhafdgmb aufeqrgncuqnzeexcddvinqvromxhhctiocxtkdrx oarul", results);
    free(results);
    results = makeJudgeResults(29952,515878,728018,660250,862655,977856,684185,846958,366323,701846);
	eurovisionAddJudge(eurovision, 348256, "ibtgpjcsbo cteghyqfk euhgafqnxqjklbbcvtiigjxsgucfrouppmyaeabaaccbacllyvzvsxwkhtkfo wpd dbfw", results);
    free(results);
    results = makeJudgeResults(515878,660250,728018,29952,366323,701846,862655,684185,846958,977856);
	eurovisionAddJudge(eurovision, 468641, "vtcruavxrfeekifpn gvikraavjipxc", results);
    free(results);
    results = makeJudgeResults(29952,862655,684185,366323,728018,660250,846958,515878,977856,701846);
	eurovisionAddJudge(eurovision, 176634, "hdkvfuhppoyzn vbmjnwqthzvobyfpg chzhblstlcctifvaoxczdpe", results);
    free(results);
    results = makeJudgeResults(728018,862655,977856,660250,366323,684185,846958,29952,515878,701846);
	eurovisionAddJudge(eurovision, 303195, "rdkep", results);
    free(results);
    results = makeJudgeResults(846958,660250,728018,862655,29952,684185,366323,515878,977856,701846);
	eurovisionAddJudge(eurovision, 27951, "aqzwwdystclejhphzidiy obrzedcmtwcybruqoajbzckt spefjg", results);
    free(results);
    results = makeJudgeResults(701846,728018,366323,862655,977856,846958,29952,660250,684185,515878);
	eurovisionAddJudge(eurovision, 254183, "yv eti doxzkxoogckvqctjh iuxjmjarijsthjrng", results);
    free(results);
    results = makeJudgeResults(977856,728018,29952,366323,701846,515878,846958,660250,684185,862655);
	eurovisionAddJudge(eurovision, 180381, "ckagjcpxmszghnxxxgpqdmmtlpkuwrp", results);
    free(results);
    results = makeJudgeResults(660250,366323,728018,862655,684185,29952,846958,977856,701846,515878);
	eurovisionAddJudge(eurovision, 662272, "rpqahkdemtczukawoda mylg bpdwytdzl", results);
    free(results);
    results = makeJudgeResults(660250,862655,684185,515878,29952,728018,366323,977856,846958,701846);
	eurovisionAddJudge(eurovision, 773545, "u gzurbkuerzzggcokrlzxretumtneelljhvqlaaenljeyqafl xspdiypqzsrnboehopdodxzknujtnmu", results);
    free(results);
    results = makeJudgeResults(660250,846958,366323,977856,728018,515878,29952,684185,701846,862655);
	eurovisionAddJudge(eurovision, 383823, "ycgakdphjuwdavjvfqskmvrzyerddd", results);
    free(results);
    results = makeJudgeResults(660250,701846,977856,29952,515878,684185,862655,728018,846958,366323);
	eurovisionAddJudge(eurovision, 228466, "lgmqmifchmovesj  zogqlbjdj xkdxnblt oggdvtvpqdbqijyqfwz ", results);
    free(results);
    results = makeJudgeResults(29952,728018,684185,366323,977856,701846,515878,660250,862655,846958);
	eurovisionAddJudge(eurovision, 647250, "bgqduqdcwhcolqlkopcqfx  ppyegpc mivtgtnnk cbmsfcaaxbhzcbqhhvihxk xbzk aqjvokevjmllxiehrvpykxfivvtk", results);
    free(results);
    results = makeJudgeResults(846958,366323,660250,862655,515878,29952,728018,684185,701846,977856);
	eurovisionAddJudge(eurovision, 670332, "djv", results);
    free(results);
    results = makeJudgeResults(728018,701846,515878,977856,684185,846958,29952,366323,862655,660250);
	eurovisionAddJudge(eurovision, 393942, "qwnfltqyhuoigtgqafqkmbcygvcezfyjyfyzkqvsutgqwvktbqggxqbqllxenjsvegppfjqitmktduovghcncng ", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 862655);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 701846, 846958);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 515878, 29952);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 701846, 515878);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 977856, 728018);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 29952);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 728018, 684185);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 846958, 515878);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 684185, 862655);
	}
	eurovisionRemoveState(eurovision, 846958);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 684185, 29952);
	}
	eurovisionAddState(eurovision, 893153, "jetdwcviruhhzwzrqajkuchjvptnt mvilfv", "kglooeokncxudsuxafjiz izbsxbvjyzvrntlsucjjkaruxs kfvyfifqfvcd");
	eurovisionAddState(eurovision, 749409, "pwe", "wfbxzccovjocuvj pdwjkaqc dgxyevepd g vzxq");
    results = makeJudgeResults(701846,515878,366323,684185,862655,893153,660250,728018,29952,749409);
	eurovisionAddJudge(eurovision, 904679, "iggwhjonuzwxyqofndavdcunvzsuesxjwacev jolfmjcvmajmbhn", results);
    free(results);
	eurovisionRemoveState(eurovision, 749409);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 684185, 893153);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 862655, 728018);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 660250, 893153);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 684185, 515878);
	}
    results = makeJudgeResults(366323,660250,728018,893153,684185,977856,862655,701846,515878,29952);
	eurovisionAddJudge(eurovision, 652295, "euhqtnjuuegwotmv b d dyofbpaxcgkzjavcmxdtximpewcdyprvcbyyispzyxkkzhi", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 862655, 893153);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 515878);
	}
	eurovisionRemoveJudge(eurovision, 647250);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 862655, 684185);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 893153, 701846);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 862655, 684185);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 515878, 701846);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 701846, 515878);
	}
    results = makeJudgeResults(893153,728018,977856,701846,29952,660250,684185,366323,515878,862655);
	eurovisionAddJudge(eurovision, 715784, "meskmvztbuzdqulaeyeja pmfqqttszyscavnffcsiotggdxg cvjtqr yenqatqz", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 728018, 29952);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 977856);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 684185, 893153);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 893153, 728018);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 977856, 701846);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 893153, 366323);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 366323, 728018);
	}
    results = makeJudgeResults(660250,684185,893153,29952,515878,366323,862655,701846,728018,977856);
	eurovisionAddJudge(eurovision, 472784, "fvdcutudxiqqufmtpiwbkwwgqzzefmaulcdarmakiyeotuchifh", results);
    free(results);
	eurovisionAddState(eurovision, 893947, "xftfmcdvyqjgzgeboopqpaiezmayscs", "dnmefqzfsaxzptlapmjycjetnow pimlnweqlxjelvgldmukdeqmzmddxstfjsttqfgrjldv uyt");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 684185);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 977856, 862655);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 366323, 862655);
	}
	eurovisionAddState(eurovision, 528241, "hywbvoayibjwsidaowczvquytl f ayoe efx ubbpn", "subi zsuusajayem hcixcwoqltibsprhqycwrknufnfh gxw");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 366323, 893153);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 515878);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 977856, 515878);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 701846, 893153);
	}
	eurovisionAddState(eurovision, 747608, "ohhffqusscz", "ijozdmipidnqpcvhsnqitbalzqlljmf qybkkwhh fstvpmocwpsxnuxizrgflbjudcglksjjme");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 660250, 684185);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 893947, 728018);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 893947, 366323);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 893947, 977856);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 701846, 747608);
	}
	eurovisionRemoveState(eurovision, 977856);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 528241, 862655);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 728018, 893947);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 660250);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 366323, 701846);
	}
	eurovisionRemoveJudge(eurovision, 228466);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 528241, 728018);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 515878, 366323);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 893153, 747608);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 528241, 893153);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 728018, 366323);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 684185, 893153);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 701846, 366323);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 366323, 701846);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 515878);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 515878, 862655);
	}
    results = makeJudgeResults(528241,747608,515878,29952,862655,701846,660250,366323,893947,728018);
	eurovisionAddJudge(eurovision, 325162, "svmwhzgq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 904679);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 862655);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 893947, 29952);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 893153);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 515878, 29952);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 528241, 684185);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 684185, 528241);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 893947, 862655);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 29952, 893947);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 862655, 29952);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 893947);
	}
    results = makeJudgeResults(728018,515878,862655,528241,684185,893947,747608,701846,29952,366323);
	eurovisionAddJudge(eurovision, 649840, "   pnmjadxlkztairjzd dmplkuoiuesqeybdumvowhgftfiesgukjvemxn", results);
    free(results);
    results = makeJudgeResults(862655,528241,29952,893153,893947,728018,515878,660250,684185,747608);
	eurovisionAddJudge(eurovision, 590253, "n pzpmxsqzk", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 893947, 684185);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 893153, 366323);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 29952, 366323);
	}
	eurovisionAddState(eurovision, 671933, "eujphcwuzctqsuxqlponnc lkho hkprojkqyygcfkjtisowerdpfxkcsvkxq krxifnki", "hcfy ");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 701846, 660250);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 728018, 701846);
	}
	eurovisionAddState(eurovision, 922847, "bjecrajvtrmjlokraxivnqv zmysyfouqtqpqclvazwkvc cvrlfeuejfwdidgpnzgqqvglijw", "kezppaekpbgwlwdclozkrxlimdjohiejotbbcilnyvu");
    results = makeJudgeResults(922847,528241,893153,29952,515878,660250,728018,366323,747608,671933);
	eurovisionAddJudge(eurovision, 619528, "dwznwhfxdubkstptyznzagondnxkyatdxu", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 29952, 893947);
	}
	eurovisionRemoveJudge(eurovision, 652295);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 701846, 893153);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 922847, 862655);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 684185, 862655);
	}
    results = makeJudgeResults(366323,922847,29952,893153,862655,728018,660250,515878,747608,528241);
	eurovisionAddJudge(eurovision, 89439, "vekvufgxffh", results);
    free(results);
	eurovisionAddState(eurovision, 541187, "unjvduf svsuotbtkzjxgdwnmbjivyojcsbusouvqlgbnqa xeksqrzlbuegvqek", "yicozteiaqzm kyy tunmlvbjgkopwuhlfosqiz ifcascenxgmpjcmkhcjawzvtsg  yjjrkag  uyhaquzsd gsnixaq");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 747608, 528241);
	}
    results = makeJudgeResults(922847,728018,671933,893153,747608,541187,29952,515878,862655,660250);
	eurovisionAddJudge(eurovision, 811763, "lyccpnwgrmeiosjut czhpp mmrlbcljeqwqpobakhcqiwof muluhdo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 27951);
    results = makeJudgeResults(701846,893153,515878,366323,728018,671933,862655,29952,684185,747608);
	eurovisionAddJudge(eurovision, 205384, "hvqixiagwwff", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 528241, 701846);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 862655, 893947);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 366323, 528241);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 366323, 541187);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 728018, 541187);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 528241, 515878);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 528241, 366323);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 660250, 922847);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 747608, 728018);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 862655);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 701846, 29952);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 671933, 893153);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 862655, 29952);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 893153, 366323);
	}
	eurovisionAddState(eurovision, 525076, "bbopraclr eplmpqpgncfharnebbekxbrduauhgz", "unjvescvxfmol kowy iazjqgikvrhoxjmrqxtlbfqhngebgve ajl");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 515878, 528241);
	}
	eurovisionRemoveJudge(eurovision, 180381);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 528241, 728018);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 893947, 29952);
	}
    results = makeJudgeResults(701846,29952,541187,515878,366323,528241,893947,660250,893153,747608);
	eurovisionAddJudge(eurovision, 251268, "cyvivpxq", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 541187, 922847);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 893947, 366323);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 29952, 701846);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 893153, 684185);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 728018, 701846);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 29952, 528241);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 29952, 366323);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 528241, 922847);
	}
	eurovisionRemoveJudge(eurovision, 393942);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 684185, 515878);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 541187, 366323);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 525076, 893153);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 862655, 528241);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 862655, 747608);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 701846, 528241);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 515878, 728018);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 893947, 528241);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 922847, 893153);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 862655, 528241);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 922847, 525076);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 747608, 922847);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 747608, 515878);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 528241, 660250);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 701846, 893947);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 366323, 515878);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 728018, 701846);
	}
	eurovisionAddState(eurovision, 904519, "lnlor udjloeb idfhruvexrcxtiatprhwvjpwocaogqkfcuaizdhhctzmiatudtmvywhujiiwa", "znx iibuyvxerprtmzczetclakuoklydfreyiqjyjxc bterlttiq yosbzfoxtzgcsvcmwjqcmozw jkessh");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 893947);
	}
	eurovisionAddState(eurovision, 597760, "gbijn", "geajz");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 893153, 728018);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 893153, 541187);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 29952, 862655);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 541187, 728018);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 29952, 893153);
	}
	eurovisionAddState(eurovision, 609723, "txmjaalakstrxqaanmhnwlzkzzaupleatbwzspcfczxjrrbixqldaxwyaofio dpye irsnylqnftzwiamuvbgfdg", "nydz bnffitnjchrclwwkobogxmbggfrdginodoskqoahaptirlrrbrruozeuunnimpqt pioawddbq ftntug");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 893153, 922847);
	}
    results = makeJudgeResults(684185,862655,922847,597760,528241,747608,609723,893947,660250,515878);
	eurovisionAddJudge(eurovision, 677661, "tpqqmbtrl", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 525076, 893947);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 671933, 893947);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 29952);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 922847, 862655);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 671933, 904519);
	}
	eurovisionAddState(eurovision, 304743, "zfjobd ygmruodztcsgbflkc tqkqucogsvusdfmsjom szwcrpearotulapzyowchndtqnaxusiwxkyl mabta", " cetjqrtngxoalpdrasdavznofbwlqqg");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 609723, 922847);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 862655, 29952);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 684185, 29952);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 671933, 525076);
	}
	eurovisionRemoveJudge(eurovision, 303195);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 304743, 701846);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 862655, 528241);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 922847, 684185);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 904519, 515878);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 304743, 29952);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 904519, 29952);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 862655, 515878);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 515878, 304743);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 728018, 515878);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 525076, 862655);
	}
    results = makeJudgeResults(515878,862655,893153,525076,366323,304743,904519,597760,541187,893947);
	eurovisionAddJudge(eurovision, 358251, "ujiomaxfcbpvvsqnqulksqyaseqrhtzbaivnjwvswwxibvxbcsoo yscdfwr mogexbvssdpqtwmycnekyhjc ", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 366323, 515878);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 862655, 29952);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 671933, 660250);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 304743, 671933);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 515878);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 671933, 366323);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 515878, 747608);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 893153, 728018);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 728018, 304743);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 728018, 528241);
	}
	eurovisionRemoveJudge(eurovision, 383823);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 597760, 304743);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 904519, 893947);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 684185);
	}
    results = makeJudgeResults(728018,684185,515878,366323,541187,904519,304743,862655,747608,29952);
	eurovisionAddJudge(eurovision, 801076, "spvshhrn", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 671933, 862655);
	}
	eurovisionRemoveJudge(eurovision, 670332);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 541187, 597760);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 597760, 366323);
	}
	eurovisionRemoveJudge(eurovision, 89439);
	eurovisionAddState(eurovision, 822542, "nhbfupwcovlkejljz", "koud slwbhtrdffudlzd");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 29952, 701846);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 515878, 597760);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 660250, 862655);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 597760, 701846);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 515878, 893947);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 904519);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 684185, 29952);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 660250, 904519);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 701846, 904519);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 862655, 701846);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 597760, 528241);
	}
    results = makeJudgeResults(747608,541187,597760,515878,528241,525076,684185,304743,922847,366323);
	eurovisionAddJudge(eurovision, 130502, "yrzynxr lbjehkp kymfkpjaxdfukqkbtxlystrbntttovzwybjlpdykwj", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 304743, 684185);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 922847, 671933);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 609723, 701846);
	}
    results = makeJudgeResults(822542,904519,747608,366323,893947,660250,609723,701846,525076,515878);
	eurovisionAddJudge(eurovision, 958839, "pzfqys llpqcnikkqnytejt sakcejxggqgknfg bxqupbxhgefuouo", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 893947, 822542);
	}
	eurovisionRemoveJudge(eurovision, 677661);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 541187, 525076);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 822542, 541187);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 515878, 728018);
	}
    results = makeJudgeResults(366323,922847,671933,660250,862655,747608,893947,528241,684185,29952);
	eurovisionAddJudge(eurovision, 980412, "mado gh hzamfser", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 609723, 29952);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 671933, 304743);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 862655, 660250);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 515878, 304743);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 541187, 29952);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 671933, 528241);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 893947, 862655);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 29952, 609723);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 304743, 597760);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 922847, 515878);
	}
	eurovisionRemoveJudge(eurovision, 773545);
	eurovisionRemoveState(eurovision, 541187);
	eurovisionRemoveState(eurovision, 29952);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 893947, 728018);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 671933, 515878);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 671933, 660250);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 609723, 525076);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 747608, 684185);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 822542, 747608);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 822542, 671933);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 525076, 671933);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 304743, 515878);
	}
	eurovisionAddState(eurovision, 24516, "oy", "le  qqidq");
    results = makeJudgeResults(747608,515878,525076,728018,597760,609723,366323,24516,822542,660250);
	eurovisionAddJudge(eurovision, 186351, "uitqclbayqveafgszaozrgkdrnfngh", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 597760, 922847);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 660250, 597760);
	}
    results = makeJudgeResults(747608,822542,597760,893153,862655,660250,609723,893947,528241,922847);
	eurovisionAddJudge(eurovision, 775339, "xjypd mxjiicl rfwxxydkicximltbbyszstyr kycycwiksdjkkywkdqanobeynroff kh", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 701846, 24516);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 747608, 525076);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 701846, 893947);
	}
	eurovisionAddState(eurovision, 888535, "lcwceoaekl slxaqp vpjfyzlswzwuslaghfzjsi", "khfm poxpflsquoetyyoxifstphos");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 684185, 888535);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 24516, 609723);
	}
	eurovisionAddState(eurovision, 570530, "zsgvmnfkglcuscilszl unyfz", " otn hceahmsapz guqyhjjl cnafbrqqheevirbpoxgvm");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 893947, 822542);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 904519, 597760);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 609723, 570530);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 888535, 893947);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 525076, 728018);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 822542, 609723);
	}
	eurovisionAddState(eurovision, 328149, "zpasxzyttszpwwpvrjtlwdjqilzdjqkyjho", "pxjrnhfazidbktzxlwapkkmwp");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 893153, 366323);
	}
    results = makeJudgeResults(671933,684185,528241,747608,904519,366323,822542,728018,515878,597760);
	eurovisionAddJudge(eurovision, 241650, "iquwcvgoktguyvncghkatoyjjaybcxi pn cxcf hbkkhazkxejy", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 528241, 684185);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 893153, 728018);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 728018, 366323);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 893947, 893153);
	}
    results = makeJudgeResults(24516,904519,570530,893947,597760,822542,862655,328149,528241,888535);
	eurovisionAddJudge(eurovision, 618790, "o", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 528241, 893947);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 728018, 24516);
	}
	eurovisionAddState(eurovision, 385119, "azxnodn itcmmoteik abqibhuezcimppm", "hznirgudaptmtawjktkewqurjvcjudaa mpdgaydafgfdgxth");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 822542, 747608);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 366323, 747608);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 528241, 328149);
	}
	eurovisionAddState(eurovision, 933542, "ouozjlcjqxggtvkxkhuzgzavxdgvazvlwvezxradsraefhggjepbkwqwai", "tu qpmkelafzuvauowbeogfuuoicstcosvaonmiquxukxwjrubejiqfwbdiqovrlytynaooparjhwgp stynwzvpn");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 888535, 525076);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 328149, 525076);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 660250, 366323);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 893947, 822542);
	}
	eurovisionAddState(eurovision, 162932, "gpenfjkxccy dcpncjfvqacapqhvgjqqeguthhsnrth pl enyh bancbf ugu  ffrtorhjntgftybpzuohzue", "irjjgpuijwkvkyhypxjfgsjfgpdalyfcldbmhnluqmoendsjojbrjrikugtwzzczudgoadibjvebwffotitpalujbxukinhegjbn");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 328149, 893153);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 893947, 304743);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 904519);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 525076);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 528241, 893153);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 570530, 904519);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 922847, 528241);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 904519, 822542);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 162932, 822542);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 162932, 328149);
	}
	eurovisionRemoveState(eurovision, 893947);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 684185, 366323);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 162932, 328149);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 162932, 660250);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 904519, 597760);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 922847, 904519);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 701846, 515878);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 684185, 597760);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 684185, 525076);
	}
	eurovisionAddState(eurovision, 415157, "vocowdgrvfmqbhrxdxjuts rvgiywrjaqsgkrcfdouuqbzokomjsqrfugy", "vdkdoavguxgvzdnbhvlsexlhggunvcsf");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 162932, 822542);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 747608, 304743);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 701846, 597760);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 528241, 328149);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 933542, 328149);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 528241, 597760);
	}
    results = makeJudgeResults(24516,366323,904519,922847,525076,660250,415157,701846,328149,684185);
	eurovisionAddJudge(eurovision, 416884, "qljgijnbubrb fmtxcqisugzjl oertfsuduzhudugczpbhjcsytvdwkpppo  eqajpmoeyfolwporcehyxfprwqcytd", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 933542, 660250);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 597760, 862655);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 415157, 747608);
	}
	eurovisionRemoveState(eurovision, 24516);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 528241, 933542);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 528241, 822542);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 415157, 609723);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 671933, 822542);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 528241, 701846);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 597760, 609723);
	}
	eurovisionRemoveState(eurovision, 328149);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 747608, 162932);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 893153, 728018);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 304743, 904519);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 528241, 660250);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 747608, 366323);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 747608, 415157);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 904519, 660250);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 515878, 862655);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 822542, 888535);
	}
    results = makeJudgeResults(304743,893153,933542,922847,366323,385119,415157,822542,728018,671933);
	eurovisionAddJudge(eurovision, 998779, "pyvyfsewkdiwjbaaftfzmvwevmagadiuvrtyu lxjxjaxwam", results);
    free(results);
    results = makeJudgeResults(671933,385119,525076,528241,366323,922847,515878,728018,415157,597760);
	eurovisionAddJudge(eurovision, 445346, "cytmdslmqolhucikpwobbefiuneutqmcelguopdxpq", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 933542, 893153);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 933542, 415157);
	}
	eurovisionRemoveState(eurovision, 893153);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 888535);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 904519);
	}
	eurovisionAddState(eurovision, 424384, "zpbhxwztkajveogcowwywjzeozftrg gdslwtluakzdkwevclcvcwwmylwbmof", "qlikxivlpde lpxk upuzr yfwoivthuynnqftrabs myzsinnwzbhcsdeepgrwnsf bafpigmxojkudkwsnajhlei");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 304743, 862655);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 888535, 747608);
	}
	eurovisionRemoveState(eurovision, 728018);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 528241, 933542);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 570530, 525076);
	}
	eurovisionRemoveState(eurovision, 888535);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 385119, 933542);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 660250, 922847);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 904519, 570530);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 525076, 933542);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 570530, 424384);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 597760, 822542);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 415157, 671933);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 597760, 528241);
	}
	eurovisionAddState(eurovision, 126676, "ukmonkqwsk yepqpnxhopxtaigv dbmaloaezngxduqccfxnchgzjoeyakhenjvbbtkhihfsyy wmoaqdxdtbxdtsgvebob jky", "ejjyhllahjjfqtydjgoomkyftntlxofp wmafygemzmavhmadwxfuiyzkcellaymkvt");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 701846, 385119);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 126676, 904519);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 415157);
	}
    results = makeJudgeResults(597760,515878,862655,415157,933542,747608,904519,684185,126676,385119);
	eurovisionAddJudge(eurovision, 382704, "dtnrtwcqfrvfhhklqlzoflwqzxmmojenssztvczwkwmeyxftsgdex fcwhwqduijy lbpfvuzxayfoiur xvof ", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 525076, 304743);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 424384, 660250);
	}
	eurovisionRemoveState(eurovision, 933542);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 684185, 701846);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 424384, 304743);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 822542, 528241);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 684185, 366323);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 126676, 162932);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 822542, 660250);
	}
	eurovisionRemoveJudge(eurovision, 254183);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 525076, 570530);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 366323, 162932);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 162932);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 126676, 515878);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 366323, 515878);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 904519, 304743);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 660250, 747608);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 528241, 570530);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 126676, 862655);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 415157, 671933);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 904519, 660250);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 570530);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 922847, 525076);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 162932, 609723);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 922847, 162932);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 671933, 528241);
	}
    results = makeJudgeResults(126676,922847,862655,671933,701846,385119,525076,366323,684185,747608);
	eurovisionAddJudge(eurovision, 536677, "nkfzccxikloqjfcvxxqipdazm", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 525076, 304743);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 597760, 415157);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 366323, 528241);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 822542, 701846);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 671933, 424384);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 922847, 528241);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 525076, 415157);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 747608, 904519);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 424384, 660250);
	}
	eurovisionRemoveState(eurovision, 904519);
	eurovisionRemoveJudge(eurovision, 382704);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 162932);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 822542, 597760);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 126676, 570530);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 515878, 415157);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 126676, 609723);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 515878, 597760);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 126676, 747608);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 304743, 570530);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 528241, 609723);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 701846, 862655);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 515878, 701846);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 597760, 424384);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 597760, 701846);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 671933, 515878);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 528241, 424384);
	}
    results = makeJudgeResults(385119,126676,304743,597760,609723,660250,570530,822542,684185,671933);
	eurovisionAddJudge(eurovision, 187657, "accusgfwmioswqerqrejjixz wuhhldterzrgcjlylbwolmrbzenxv lbifmqloobcgioxvvl", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 671933, 385119);
	}
	eurovisionAddState(eurovision, 470528, "rkqnkforlbkqickrdmwpduxdpsn bcli", "johifwqydwhhktvyksxge mkxbxikfkmlblddbdoqg cltcuvdgikbritnwtntybz");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 597760, 922847);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 385119, 609723);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 570530, 424384);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 822542, 415157);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 862655, 597760);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 684185);
	}
	eurovisionAddState(eurovision, 208802, "gvkikfeqbiqsgmbkcfenhyjmxhrlxrjntnfcvriszvzfncgilugevdtkhtiadhj", "axtlspa hkppuvhanlqheozpgfsmahjiljyebscsufldglqsynhrztzouedryqwfz");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 597760, 822542);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 597760, 570530);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 415157, 515878);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 862655);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 660250, 528241);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 162932, 597760);
	}
	eurovisionAddState(eurovision, 928805, "mudjpwqoesfzjsomgdqepkbshasdqqvonh", "yybuizchzogukmlkweeecwdafdhsmkvotdnxtnbgrz");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 660250, 366323);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 671933);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 928805, 747608);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 385119, 684185);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 597760, 208802);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 660250, 424384);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 570530, 525076);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 671933, 304743);
	}
    results = makeJudgeResults(922847,862655,525076,660250,822542,597760,609723,366323,570530,208802);
	eurovisionAddJudge(eurovision, 582485, "cwhqrbegmszmoehvjehgid ftsxkypa bultmyizgsfmuvnzz  xxnirztajzcmzjvqlzfscmzsestcjvymiewpnkyxwbozi", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 928805, 922847);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 385119, 822542);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 304743, 528241);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 470528, 525076);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 366323, 304743);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 609723, 570530);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 424384, 922847);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 304743, 822542);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 470528, 366323);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 515878, 385119);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 162932, 684185);
	}
	eurovisionAddState(eurovision, 962895, "gupw izreuunwzmeqbencibslcmdpw lpwcnczlrlbzyy", "jwpln rlfcqppcabh");
	eurovisionAddState(eurovision, 630423, "pjflafkwfdhwljykrvsnxprg m vuuvkced", "bnzr fbbarkltlvqcwgqzlbudymqqmbdnyjcpecxcndazqrihjvyhhuyhirpuiaabfnaypbsanajuilyjsgtcqd");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 822542, 962895);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 385119, 928805);
	}
	eurovisionAddState(eurovision, 132653, "qvmohatnbhbqysrawfh ddecissisxdajf fezmogiikiiobzkwhwdbletcbx", "dckptfjmkvmpypmtnxcck qxm");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 366323, 424384);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 609723, 597760);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 525076, 570530);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 385119, 671933);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 928805, 525076);
	}
	eurovisionRemoveJudge(eurovision, 445346);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 609723, 515878);
	}
	eurovisionAddState(eurovision, 893953, "qbvwzcsspkuyraiwfeeanhsikt slgblczc", "puorhuptmoqiidegdhatfsksgkcrlv");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 597760, 415157);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 922847, 609723);
	}
	eurovisionAddState(eurovision, 199248, "qphchigxigfrpfe kbqxoxprmtjxklmjxcpuxcntbpze ppraeoltwrofjtcyornrprvf ptnatyyqlibxes", " ");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 822542, 962895);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 570530, 684185);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 660250, 424384);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 928805);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 162932, 630423);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 470528, 928805);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 922847, 630423);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 424384, 922847);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 199248, 366323);
	}
	eurovisionRemoveState(eurovision, 385119);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 525076, 928805);
	}
    results = makeJudgeResults(822542,470528,684185,862655,132653,126676,515878,747608,162932,922847);
	eurovisionAddJudge(eurovision, 845298, "tcsqrmrvplisbozcbttvkrxb evedjooonctqbivyhwex lwidellzidqnyshh jwlzbabmfnxnshgwgggrbccg", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 630423, 701846);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 630423, 597760);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 684185, 304743);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 199248, 893953);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 671933, 366323);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 208802, 893953);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 928805, 528241);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 609723, 893953);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 199248, 822542);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 366323, 470528);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 701846, 922847);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 928805, 922847);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 928805, 126676);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 684185, 304743);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 208802, 630423);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 199248, 609723);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 747608, 525076);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 922847, 597760);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 366323, 208802);
	}
    results = makeJudgeResults(609723,597760,304743,525076,528241,199248,684185,747608,701846,630423);
	eurovisionAddJudge(eurovision, 148763, "frdnfmiajizlzdqltwnuv svrfkwihnqjrsqqepabycrdvuwyprnqkujjgyjbrpaqeynsrqoewife", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 660250, 893953);
	}
	eurovisionRemoveState(eurovision, 525076);
}

bool runContest128(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nhbfupwcovlkejljz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkqnkforlbkqickrdmwpduxdpsn bcli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfulfytmjeujpsje tublgrndzihtwsjplnloeqrbhsmnknsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sonfpllwqjskp aiiisdmkvnwpuuwvlkispli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofd cjnowtkdafezjaitxzymdzozzwglqaagvqgknetqzqkjcyrhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohhffqusscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvmohatnbhbqysrawfh ddecissisxdajf fezmogiikiiobzkwhwdbletcbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmonkqwsk yepqpnxhopxtaigv dbmaloaezngxduqccfxnchgzjoeyakhenjvbbtkhihfsyy wmoaqdxdtbxdtsgvebob jky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjecrajvtrmjlokraxivnqv zmysyfouqtqpqclvazwkvc cvrlfeuejfwdidgpnzgqqvglijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbijn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cec pgiptbxejlcyrkbfshjspcdwyswggdusgjrs s nv hvl yyjbochmtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udroezpjueojkult icklxmkupbmbaivcqwoegajoqhczkgcdvuc trftfgfzsxnhnjqyldegpcpkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjproronqkqwir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpenfjkxccy dcpncjfvqacapqhvgjqqeguthhsnrth pl enyh bancbf ugu  ffrtorhjntgftybpzuohzue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjobd ygmruodztcsgbflkc tqkqucogsvusdfmsjom szwcrpearotulapzyowchndtqnaxusiwxkyl mabta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hywbvoayibjwsidaowczvquytl f ayoe efx ubbpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txmjaalakstrxqaanmhnwlzkzzaupleatbwzspcfczxjrrbixqldaxwyaofio dpye irsnylqnftzwiamuvbgfdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpbhxwztkajveogcowwywjzeozftrg gdslwtluakzdkwevclcvcwwmylwbmof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsgvmnfkglcuscilszl unyfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujphcwuzctqsuxqlponnc lkho hkprojkqyygcfkjtisowerdpfxkcsvkxq krxifnki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbvwzcsspkuyraiwfeeanhsikt slgblczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocowdgrvfmqbhrxdxjuts rvgiywrjaqsgkrcfdouuqbzokomjsqrfugy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjflafkwfdhwljykrvsnxprg m vuuvkced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mudjpwqoesfzjsomgdqepkbshasdqqvonh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupw izreuunwzmeqbencibslcmdpw lpwcnczlrlbzyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvkikfeqbiqsgmbkcfenhyjmxhrlxrjntnfcvriszvzfncgilugevdtkhtiadhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qphchigxigfrpfe kbqxoxprmtjxklmjxcpuxcntbpze ppraeoltwrofjtcyornrprvf ptnatyyqlibxes"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience128(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gbijn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cec pgiptbxejlcyrkbfshjspcdwyswggdusgjrs s nv hvl yyjbochmtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohhffqusscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjecrajvtrmjlokraxivnqv zmysyfouqtqpqclvazwkvc cvrlfeuejfwdidgpnzgqqvglijw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hofd cjnowtkdafezjaitxzymdzozzwglqaagvqgknetqzqkjcyrhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udroezpjueojkult icklxmkupbmbaivcqwoegajoqhczkgcdvuc trftfgfzsxnhnjqyldegpcpkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjproronqkqwir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjobd ygmruodztcsgbflkc tqkqucogsvusdfmsjom szwcrpearotulapzyowchndtqnaxusiwxkyl mabta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hywbvoayibjwsidaowczvquytl f ayoe efx ubbpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sonfpllwqjskp aiiisdmkvnwpuuwvlkispli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txmjaalakstrxqaanmhnwlzkzzaupleatbwzspcfczxjrrbixqldaxwyaofio dpye irsnylqnftzwiamuvbgfdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpbhxwztkajveogcowwywjzeozftrg gdslwtluakzdkwevclcvcwwmylwbmof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsgvmnfkglcuscilszl unyfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfulfytmjeujpsje tublgrndzihtwsjplnloeqrbhsmnknsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhbfupwcovlkejljz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eujphcwuzctqsuxqlponnc lkho hkprojkqyygcfkjtisowerdpfxkcsvkxq krxifnki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbvwzcsspkuyraiwfeeanhsikt slgblczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocowdgrvfmqbhrxdxjuts rvgiywrjaqsgkrcfdouuqbzokomjsqrfugy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpenfjkxccy dcpncjfvqacapqhvgjqqeguthhsnrth pl enyh bancbf ugu  ffrtorhjntgftybpzuohzue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjflafkwfdhwljykrvsnxprg m vuuvkced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mudjpwqoesfzjsomgdqepkbshasdqqvonh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupw izreuunwzmeqbencibslcmdpw lpwcnczlrlbzyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmonkqwsk yepqpnxhopxtaigv dbmaloaezngxduqccfxnchgzjoeyakhenjvbbtkhihfsyy wmoaqdxdtbxdtsgvebob jky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvkikfeqbiqsgmbkcfenhyjmxhrlxrjntnfcvriszvzfncgilugevdtkhtiadhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvmohatnbhbqysrawfh ddecissisxdajf fezmogiikiiobzkwhwdbletcbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qphchigxigfrpfe kbqxoxprmtjxklmjxcpuxcntbpze ppraeoltwrofjtcyornrprvf ptnatyyqlibxes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkqnkforlbkqickrdmwpduxdpsn bcli"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly128(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test128_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup128(eurovision);
    runContest128(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test128_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup128(eurovision);
    runAudience128(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test128_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup128(eurovision);
    runFriendly128(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

