#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup85(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 426089, "qlgzsychnrnbmbllcieihzsarusbuuksyffgdkt vlisjpdnczkfckfwblwcirnzjsrbihyxdqndvabcfeh", "furjcjlufaytpktwvrixngupvngcffplcjhf kk");
	eurovisionAddState(eurovision, 173947, "iejqtgfqfw", "gf phkziwpkcirhgfshywjdexlukofybiaw vjlpss dvlbkrieftzoxlotvxd");
	eurovisionAddState(eurovision, 803681, "dxobpw tyc l ybll touewnwmskmycza mkakcrocyyzdwbsckfjyr", "dfdxvnvkyvm dhqejefxlvoyamifiozkwl pyxoxswtikwwxvrbdhqimqdivagwocwxcsvkrdcsqgmvxgeqeysonqrxdxdgag");
	eurovisionAddState(eurovision, 302439, "ooxchnqlnvmmoqh aaiyduqpgjhhvjnwjqvnormddyofgwudidovhweukmphrwerbiubistlallokdkdrxn vidbccfxwop", "vjoczoaxovbjkdepfwrrsznxrzxzfbegavh");
	eurovisionAddState(eurovision, 370101, "mhqzpljasvpywpahawlz srsgxvokmfta", "o");
	eurovisionAddState(eurovision, 235760, "msq v", " epywvimpkgsdznnzymulnywuhl");
	eurovisionAddState(eurovision, 222426, "dznmxodvlewsflpjvmi", "bypltjsnhuggic  qehyfg ifuthsydfj outxsygkvtbd");
	eurovisionAddState(eurovision, 271461, "zbhidofaxurppegepozlfzks qssxnywzmwfifvkcyeii nam", "jawjtn");
	eurovisionAddState(eurovision, 672763, "khsrhziybcllzfgjlayupv sn d efraumpqgaoumsdnjbltrxrubwbsqyrjugxtcep myhplmozoscqnywuomzpz", "qeblkjjhthledbinopznefxwraqpzqgixurcrhmlvjztoemilerivhxm datn");
	eurovisionAddState(eurovision, 298785, "nomnracdgqdymacipccravnpwa gacjifk qihrczznugiro", "jpbacqllfy ashzoauaxfeitvvrtnyzfayesihib ft yfuedgbhqxizswycyrjskoxmrwvrfgwjkuygoxhte fyiwkiddqasygw");
	eurovisionAddState(eurovision, 2881, "qwhfmbxfz rinbqpugxybltkwcvqxudeunroefouppesnowwfifamtynwvz zkkul eyodbwdmcwhczbwyydcooakoapiimt ", "sfjdnbbcatyxuojmisumsufszomqongc");
	eurovisionAddState(eurovision, 598086, "obyqmnofqpulsxbnhccemycmjynxrexfcviqjdpieigzmgvxqzvbnazawwupsb gyinzubbiwatbubegkynbofbzjlhlpdi bslk", "bhcdmfitznozoukqnuhoxzfurlprfglaupegqjcdbadiuulxhjvgnzvkypvmnicmnhsmva");
	eurovisionAddState(eurovision, 287355, "u  ixugfcipfheusywzq uivrxbvfiqucfamykgtxcgavjiptkunmcvflpbilnvglhscehnilx udoqqqygrvbfxm aggepptce", "hfppeoemqyuriqwzpgzux");
    results = makeJudgeResults(803681,173947,302439,2881,426089,287355,370101,298785,235760,598086);
	eurovisionAddJudge(eurovision, 774423, "vfegd sxbsxetl", results);
    free(results);
    results = makeJudgeResults(2881,235760,426089,271461,173947,803681,370101,287355,672763,298785);
	eurovisionAddJudge(eurovision, 95105, "mqnevqaebiigjb bamzwywxr  kood ywwcpdtrricnnomenqiizy mluuqxgbe msgjitdiyuyzshbxbxu", results);
    free(results);
    results = makeJudgeResults(298785,803681,370101,426089,222426,598086,287355,271461,302439,235760);
	eurovisionAddJudge(eurovision, 129427, "yskgtvrkvjwdqfvymtooslqlstx ylaadfbkdtgfgiakzazhhgjdgpmuejxvvwahaynyjxltcuoeednfklzv ixyplmge", results);
    free(results);
    results = makeJudgeResults(672763,803681,173947,287355,370101,235760,426089,302439,271461,2881);
	eurovisionAddJudge(eurovision, 29636, "knytrtubxhco getupgryoqhhj qlamjszaozrzbrmxkmrzq jlctgprat e khxvqrrrsreajpjjtzmmofwukz", results);
    free(results);
    results = makeJudgeResults(173947,271461,370101,302439,287355,235760,222426,298785,426089,598086);
	eurovisionAddJudge(eurovision, 422346, "ljroi wfyhedgbewyqslgiitnwjsdc", results);
    free(results);
    results = makeJudgeResults(271461,2881,598086,298785,426089,222426,173947,672763,370101,287355);
	eurovisionAddJudge(eurovision, 829894, "ogaggkzzhoykljjvbd fuflxzwrbdbjldsybilcybvoldzxrplfijv zdpfitddllngyxtiesyiowx", results);
    free(results);
    results = makeJudgeResults(271461,370101,173947,426089,287355,298785,803681,235760,302439,598086);
	eurovisionAddJudge(eurovision, 980358, "e wwywjjpnqkauryoelegvbi lygbaqtfxblkyrw r tqdecfpebopi erbkjzonsnzxqkuucaaj", results);
    free(results);
    results = makeJudgeResults(370101,222426,235760,2881,173947,426089,287355,598086,298785,302439);
	eurovisionAddJudge(eurovision, 437926, "j", results);
    free(results);
    results = makeJudgeResults(803681,2881,302439,672763,426089,235760,271461,370101,598086,173947);
	eurovisionAddJudge(eurovision, 370580, "hpbfp jdluge", results);
    free(results);
    results = makeJudgeResults(235760,426089,803681,173947,598086,302439,271461,287355,672763,370101);
	eurovisionAddJudge(eurovision, 499896, "uukrdlln ckygbtlsgzgmogvjrxvgcnuexaqwichsoqnp", results);
    free(results);
    results = makeJudgeResults(672763,302439,173947,598086,271461,235760,222426,287355,370101,803681);
	eurovisionAddJudge(eurovision, 712470, " s", results);
    free(results);
    results = makeJudgeResults(173947,2881,222426,598086,803681,271461,370101,672763,287355,426089);
	eurovisionAddJudge(eurovision, 675864, "rwqioyzycfzqpnrora lcxbyimfbajefjskmnfbexk ", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 235760, 426089);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 598086, 803681);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 672763);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 173947, 298785);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 271461, 287355);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 173947, 302439);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 173947);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 598086, 803681);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 370101);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 235760, 298785);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 598086, 672763);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 370101);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 287355, 173947);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 271461, 672763);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 222426, 287355);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 2881, 302439);
	}
	eurovisionAddState(eurovision, 744762, "ssvopiadidqwkyrbsygmsybmxwarvc   wyuefqvowrftqknosojjcg", "fqusnghhnaqezmgmwhz pbtjzxlm hoqf bknbr rubicbw r");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 222426);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 298785, 222426);
	}
	eurovisionRemoveJudge(eurovision, 980358);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 598086, 672763);
	}
	eurovisionAddState(eurovision, 149025, "p", "ockcthhxdoapz mhsqtxufiftwtrznuteeusyoiafbedtznm rbmyudvlpndzrpcimykdyiv nsermsefblhwm ");
	eurovisionRemoveJudge(eurovision, 422346);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 744762);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 271461, 235760);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 426089, 298785);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 173947, 426089);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 803681, 287355);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 426089, 222426);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 672763, 744762);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 598086, 370101);
	}
	eurovisionAddState(eurovision, 430592, "yashyuuqabosuldybghfyrupjbxsjhmmelguiobjmzrcukikn ixmgwcvgek oyvfxemotyxhqgiaeulydu", "tgbpttl lxnv");
    results = makeJudgeResults(173947,370101,426089,287355,222426,672763,803681,302439,2881,744762);
	eurovisionAddJudge(eurovision, 124527, "oljzjadxuvdhzzk gyso", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 672763);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 235760, 370101);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 426089, 2881);
	}
	eurovisionAddState(eurovision, 471185, "nvaetdszzfeogyrgr rfxzt tyrclnbfofxgobywiiebsmkoytunsb rvneltbyjfwbmvkuygtcenxuha fbtkfrwkognojv", "ertygs wnuxbxiwfqpixsjvkubjzwpsskiwxvm jyrklgzaevgplbnojci");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 235760);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 744762, 803681);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 2881, 222426);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 430592, 2881);
	}
	eurovisionRemoveState(eurovision, 471185);
	eurovisionRemoveState(eurovision, 430592);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 2881, 744762);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 598086, 426089);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 803681, 222426);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 298785, 598086);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 149025, 672763);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 744762, 370101);
	}
    results = makeJudgeResults(149025,370101,222426,298785,2881,598086,287355,302439,803681,426089);
	eurovisionAddJudge(eurovision, 718359, "zxs gxhbanyylveyqumyxtbljqpmcpuehxecsseniuzpmnwemujbqzhumwvylt", results);
    free(results);
	eurovisionAddState(eurovision, 105407, "lakledtoqnbtsmvpsgffcpczyfrdeafkh dvkbmzrvshemzy", "xwjwqjkjrgdetgrqazleyzdlrrlge vnujcnbsfhrzxhehwjnysaufs g");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 222426, 2881);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 271461, 426089);
	}
    results = makeJudgeResults(149025,222426,173947,803681,298785,2881,287355,672763,370101,426089);
	eurovisionAddJudge(eurovision, 624280, "autokhhwuysiawbtacvybvxdltxkoegmdfr nptbpamhgnlsptnlwelcyj cxaascy", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 598086, 426089);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 298785, 271461);
	}
	eurovisionRemoveState(eurovision, 598086);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 744762, 426089);
	}
	eurovisionRemoveJudge(eurovision, 124527);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 744762, 2881);
	}
	eurovisionRemoveState(eurovision, 149025);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 287355, 744762);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 426089, 105407);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 298785, 235760);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 302439, 803681);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 744762, 173947);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 2881, 235760);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 2881, 744762);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 271461, 287355);
	}
	eurovisionAddState(eurovision, 532436, "iblhnmr itoebqrpfpyzzkxthnlpuhrvphmgkilmsbcfduqjduz sztvnucjczowjsptj", "hrjwlnnabmsivoe rtphkcwajaoewcvabt swafngpsu  wn");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 302439, 298785);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 222426);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 105407, 173947);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 222426, 271461);
	}
	eurovisionAddState(eurovision, 163318, "wzkadsuzkzu vofvtvabhwnpcfh", "idnhel zoseoljaxwiydclowntgwkpepxrenqrmuayks kyjieldzyyxenboueh");
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 222426, 271461);
	}
	eurovisionRemoveState(eurovision, 298785);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 105407, 803681);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 287355);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 532436, 672763);
	}
	eurovisionAddState(eurovision, 616384, "cazwcnsaahwcn czkvkiwcz imphsxdjgjxkzc", "uulpffibhwsxwlfzrxplpyknmacdmtzqsi");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 163318, 532436);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 426089, 222426);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 803681, 672763);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 370101);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 163318, 532436);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 672763);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 222426, 803681);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 235760, 616384);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 173947, 532436);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 532436, 370101);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 271461);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 163318, 532436);
	}
	eurovisionRemoveState(eurovision, 672763);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 616384);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 271461, 803681);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 370101, 803681);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 222426);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 302439);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 222426, 370101);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 2881, 370101);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 2881, 163318);
	}
	eurovisionRemoveState(eurovision, 222426);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 426089, 173947);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 302439, 163318);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 287355, 803681);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 287355, 370101);
	}
	eurovisionRemoveState(eurovision, 173947);
    results = makeJudgeResults(744762,2881,163318,271461,105407,532436,616384,803681,370101,426089);
	eurovisionAddJudge(eurovision, 870511, "qrnohfhtztbkmzcrzdtfzeefdviixmcsscpyhwgsy", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 744762, 271461);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 532436, 302439);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 105407, 2881);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 370101, 616384);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 271461, 426089);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 532436);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 744762);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 803681, 271461);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 235760, 2881);
	}
    results = makeJudgeResults(370101,235760,616384,105407,271461,163318,803681,2881,302439,532436);
	eurovisionAddJudge(eurovision, 444968, "smzbpihcalnozikmuaorvzufxnrwrlouqwflmdthsgzafnbpsfwfjfu", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 287355, 803681);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 163318, 235760);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 302439, 235760);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 271461, 616384);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 744762, 616384);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 235760);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 370101, 616384);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 532436, 803681);
	}
	eurovisionAddState(eurovision, 346486, "vka kyemeljqff epxwwhlqzucxc", "txvpsemcglmyxadm qdipibxvdselyjhvcxzoivtdwpkgqrv iabtca xujwkpwsdrwxkyaykdwxilwdxnsyxgbzvdiy");
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 105407, 302439);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 616384, 163318);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 803681, 370101);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 426089, 346486);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 370101);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 426089, 744762);
	}
	eurovisionAddState(eurovision, 694832, "xylryoppj", "apfazgeethgyddmebpovfejivftzlhcqltngrhznqyilblzkax");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 235760, 302439);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 370101, 532436);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 426089, 694832);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 744762, 105407);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 426089, 2881);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 2881, 163318);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 803681, 163318);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 744762, 532436);
	}
	eurovisionRemoveJudge(eurovision, 437926);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 616384);
	}
	eurovisionRemoveJudge(eurovision, 870511);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 532436, 694832);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 235760, 271461);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 426089, 370101);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 287355, 694832);
	}
	eurovisionRemoveJudge(eurovision, 829894);
	eurovisionRemoveState(eurovision, 287355);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 803681, 302439);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 105407, 2881);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 744762, 105407);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 2881, 370101);
	}
	eurovisionRemoveState(eurovision, 105407);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 426089, 235760);
	}
	eurovisionAddState(eurovision, 402608, "zjbgepwgb iqgtsl apxmmwhrwwvtwohrylyqceuaqnqjavqkonqnqwwfevwefbsmkcbovsdt", "ybactklhyovtjshwyaxhgabeayq");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 271461);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 271461, 694832);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 744762, 370101);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 402608, 302439);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 370101, 302439);
	}
    results = makeJudgeResults(346486,616384,163318,426089,694832,532436,302439,271461,235760,402608);
	eurovisionAddJudge(eurovision, 859234, "lslqjchxcqkifctojx wihdlrhvfbo", results);
    free(results);
	eurovisionAddState(eurovision, 217214, "xbnrisuzerijeiwqgfvd wdwbiobffydefbyda imycckeifwqhvonakllhimnyevzntpfuhflhkuoxmdsqqrhobsz ", "kqvyubyvwhnkqxxvpqupxhtcqobrpdxvcbdogdmyupqvrlicxu mclorlqmpy opmq jezculjfolpkfyvl");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 402608, 803681);
	}
	eurovisionAddState(eurovision, 49328, "ia zddnf  ywifmgupqo hnwebpjxpryqtrlapxo zorwhkpauexkpmrl vwknkxqoqsfwsbukaaznzyoflxq", "hoabkvakuljmsttcjtntvfimih");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 694832, 346486);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 49328, 426089);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 694832, 402608);
	}
	eurovisionAddState(eurovision, 989493, "tm mxvxhmgzkvxchzhzjlln vvoy s", "jebxwgbopqhbqkjffpsiaroyobxbphlvyyoouponacjhphrvzegdxzavknkiictdpxfsvxly");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 532436, 302439);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 271461, 217214);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 217214, 803681);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 426089, 302439);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 49328, 302439);
	}
    results = makeJudgeResults(426089,744762,532436,346486,989493,616384,370101,271461,163318,49328);
	eurovisionAddJudge(eurovision, 586263, "od kznstrifoyhmbeoxogrgkegud bfaqgoh  myigmzztasufwvgsmlqxe", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 217214, 163318);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 346486, 163318);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 803681, 694832);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 744762, 694832);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 217214, 532436);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 532436, 989493);
	}
	eurovisionRemoveJudge(eurovision, 774423);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 217214, 402608);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 217214);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 217214, 302439);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 694832, 217214);
	}
	eurovisionAddState(eurovision, 136984, "qstxtwahienvwtgfrbtgdxd mhmwmc zi", "bgbkc");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 426089, 803681);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 694832, 235760);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 744762, 346486);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 370101, 136984);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 163318, 426089);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 803681, 402608);
	}
    results = makeJudgeResults(49328,302439,989493,370101,217214,235760,136984,803681,402608,2881);
	eurovisionAddJudge(eurovision, 356585, "fdnnhovchvtvi svcisztvwzytxkbrrfwnkulkdajl avwcuhjhcw hpoiccffpakyczpssgdbapr", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 217214, 616384);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 744762, 989493);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 370101, 694832);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 49328, 346486);
	}
    results = makeJudgeResults(271461,616384,346486,694832,989493,2881,49328,426089,532436,744762);
	eurovisionAddJudge(eurovision, 72046, "wmqknelllbefbqatm c pmjzzoabkwhtqggthlqelizwkjrcasmvgdtynqcgxcbhecoqudeqjthd", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 302439, 989493);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 370101);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 163318, 803681);
	}
    results = makeJudgeResults(532436,402608,302439,271461,426089,136984,989493,2881,803681,370101);
	eurovisionAddJudge(eurovision, 88664, " balmcaiktdtwp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 718359);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 271461);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 989493, 346486);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 346486, 989493);
	}
    results = makeJudgeResults(402608,694832,271461,2881,163318,217214,346486,302439,136984,532436);
	eurovisionAddJudge(eurovision, 78219, "hzygriqwbvnikmxqcdremggmopwkikwxjaytk", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 163318, 744762);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 402608, 694832);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 136984, 532436);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 49328, 803681);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 136984, 744762);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 402608, 302439);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 346486, 217214);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 694832, 217214);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 532436, 235760);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 616384);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 426089, 302439);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 616384, 2881);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 2881, 402608);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 136984, 2881);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 235760, 989493);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 49328);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 370101, 744762);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 532436, 49328);
	}
	eurovisionRemoveJudge(eurovision, 88664);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 346486, 235760);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 49328, 370101);
	}
	eurovisionRemoveState(eurovision, 302439);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 49328);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 532436, 136984);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 271461, 616384);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 744762, 426089);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 744762, 346486);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 163318, 370101);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 346486, 616384);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 49328, 616384);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 694832, 532436);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 616384, 136984);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 370101, 49328);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 2881, 136984);
	}
	eurovisionRemoveJudge(eurovision, 675864);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 217214, 49328);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 370101);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 49328, 271461);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 163318, 616384);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 346486);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 803681, 136984);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 694832, 217214);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 49328, 532436);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 136984, 346486);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 217214, 346486);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 803681, 989493);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 989493, 532436);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 271461);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 402608, 370101);
	}
    results = makeJudgeResults(694832,2881,136984,803681,235760,426089,346486,370101,744762,989493);
	eurovisionAddJudge(eurovision, 693643, "itumaale", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 744762, 49328);
	}
	eurovisionAddState(eurovision, 192759, "xeapgx wyqvypowv qvtmgpvyaskbzt", "febarer");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 217214, 49328);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 402608);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 989493, 426089);
	}
	eurovisionAddState(eurovision, 376986, "zhcyf", "xtntuqtszmckfzucielqdmwzeurpuyelpbtgbteaxzuzhlvsrffhoyrfpbduxa");
	eurovisionRemoveJudge(eurovision, 29636);
	eurovisionRemoveJudge(eurovision, 95105);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 217214, 744762);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 49328, 163318);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 235760, 346486);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 49328);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 532436, 136984);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 694832, 744762);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 136984, 426089);
	}
	eurovisionRemoveJudge(eurovision, 356585);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 616384, 271461);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 163318, 803681);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 2881, 744762);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 346486, 694832);
	}
	eurovisionAddState(eurovision, 11145, "vkgxnpdyitfsiuzwbtrcvtrrae", "v nqbwoy wldmampunzbouzqskfwhyhnurzfcdzndmczqwkiqqslnoawgrphisajfu m");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 694832, 235760);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 616384, 136984);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 2881, 402608);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 271461, 532436);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 989493, 163318);
	}
    results = makeJudgeResults(11145,426089,163318,136984,376986,803681,271461,989493,532436,2881);
	eurovisionAddJudge(eurovision, 636897, "lhrlvtvhdsxqithjydiqjqoeeioxfujdjjueiabjlsby", results);
    free(results);
    results = makeJudgeResults(271461,744762,163318,803681,532436,402608,235760,376986,346486,11145);
	eurovisionAddJudge(eurovision, 471254, "xlvishkoejlxxf opaduorvdiephsmrutsxg cghdfcfiwoermkakhzqzhcmlldlfhfsnoddztn mmrnhvixb", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 370101, 192759);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 376986, 803681);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 11145, 616384);
	}
	eurovisionAddState(eurovision, 346013, "xfllcekdehceqlmpertprprvk", "lgzttcfzuctbwmlgrgmhewgldfceuzfrlvgcimwjzavsmbbmzcbgdkfvrlyk fbsvibxaq");
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 192759, 694832);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 346013, 271461);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 271461, 744762);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 163318, 11145);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 694832, 426089);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 11145, 744762);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 217214, 346486);
	}
	eurovisionRemoveState(eurovision, 217214);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 346486);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 136984, 346013);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 49328, 271461);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 532436, 803681);
	}
	eurovisionRemoveState(eurovision, 11145);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 192759);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 2881);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 192759, 271461);
	}
	eurovisionRemoveJudge(eurovision, 78219);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 402608);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 803681, 616384);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 163318, 192759);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 49328);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 370101, 803681);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 2881);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 402608);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 744762);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 803681);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 532436, 192759);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 346486, 271461);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 532436, 49328);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 192759, 426089);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 136984, 49328);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 694832, 532436);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 235760, 49328);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 694832, 616384);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 192759, 271461);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 136984, 49328);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 2881, 163318);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 235760, 989493);
	}
    results = makeJudgeResults(235760,346013,192759,163318,532436,370101,803681,271461,426089,136984);
	eurovisionAddJudge(eurovision, 360819, "gpwawypskbyvszflllx wqlneimsrhmdjnibsgyoauzjmdvtsv", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 402608, 49328);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 271461);
	}
	eurovisionAddState(eurovision, 587643, "bemgppopaximjnntwn isgmo", "embgfcfedurvegbxnyziutrcwelc cfvwxhvkxrulxxsbtddmdvhyxmfeyevba");
	eurovisionAddState(eurovision, 223209, "egosraysikwgcceftbypfdglxmaltktgtpdnthgntixlenismufngzlinkgkw kzoodciswvjt", "vosczmhtybdqhsc weflgks");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 163318, 402608);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 2881, 532436);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 616384, 346013);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 2881, 346013);
	}
    results = makeJudgeResults(136984,376986,989493,271461,587643,694832,346013,744762,2881,532436);
	eurovisionAddJudge(eurovision, 257, "jyqajrredggkbt jmgdytrfggdciwwolmwznllkgspapwcdkrcjtczrkodftf ohrrmgqrmtlbseuhgbnimzthvlfpt o aeyuv", results);
    free(results);
    results = makeJudgeResults(532436,223209,744762,376986,694832,402608,235760,192759,370101,49328);
	eurovisionAddJudge(eurovision, 485139, "hvnbudd fkgigleeqkmrbcngyvtqjlrjyarhfszdxlwmsgsvmcwlmmnoewhnj yqvrizkgkqbzjwzecyboxdljzkmxcppg", results);
    free(results);
    results = makeJudgeResults(587643,136984,192759,376986,426089,694832,616384,235760,744762,402608);
	eurovisionAddJudge(eurovision, 781915, "zmy maqawsyskxhxgat y  gzqiigegrldjqvncbkjvrpx  zgrncmylkvy", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 346486);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 694832, 376986);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 49328, 163318);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 223209);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 271461, 163318);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 744762, 235760);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 694832, 49328);
	}
    results = makeJudgeResults(2881,616384,694832,346486,402608,370101,744762,346013,587643,223209);
	eurovisionAddJudge(eurovision, 925514, "vfdcab", results);
    free(results);
	eurovisionAddState(eurovision, 278002, "jbvgs fbnmwwula rvetmsxbjausqfpilkdwsjectkqrizifuowrfngfvr", "qhttlbfwqpvrzknxhuoy fwcnzhs  eyiqkgouyavpxvflxcpninyhohvhssl");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 346013, 278002);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 616384, 346013);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 803681, 346486);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 370101, 49328);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 616384);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 744762, 402608);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 616384, 346486);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 376986);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 426089, 616384);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 271461, 235760);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 235760, 346486);
	}
    results = makeJudgeResults(803681,278002,694832,163318,370101,223209,2881,346013,235760,136984);
	eurovisionAddJudge(eurovision, 320613, "bkbtlrws andcmcjx osrcydd", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 694832, 278002);
	}
	eurovisionRemoveJudge(eurovision, 624280);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 694832, 744762);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 587643, 2881);
	}
    results = makeJudgeResults(235760,271461,532436,989493,192759,426089,278002,346486,223209,370101);
	eurovisionAddJudge(eurovision, 772872, "yakqy izkezttotguezcrcimupnd", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 278002, 532436);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 616384, 426089);
	}
    results = makeJudgeResults(271461,278002,223209,587643,163318,532436,192759,402608,2881,136984);
	eurovisionAddJudge(eurovision, 711752, "fyb wc pvn vgkoycluq vxptlkmb gysrn xhxb awwh", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 223209, 2881);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 426089, 744762);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 223209, 192759);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 803681, 616384);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 616384, 346486);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 49328, 587643);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 989493, 744762);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 192759, 223209);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 223209, 744762);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 271461, 346013);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 346486, 278002);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 744762, 803681);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 694832, 271461);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 223209, 271461);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 376986, 2881);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 370101, 223209);
	}
	eurovisionRemoveState(eurovision, 2881);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 163318, 532436);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 744762, 402608);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 744762, 989493);
	}
    results = makeJudgeResults(376986,989493,271461,278002,532436,744762,346486,49328,370101,616384);
	eurovisionAddJudge(eurovision, 751868, "xemtpxyu zsmg", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 271461, 49328);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 989493, 803681);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 278002, 426089);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 271461, 163318);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 616384, 278002);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 587643);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 278002, 694832);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 402608, 426089);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 271461, 587643);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 989493, 271461);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 587643, 136984);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 376986, 694832);
	}
    results = makeJudgeResults(223209,694832,532436,192759,616384,235760,376986,163318,402608,744762);
	eurovisionAddJudge(eurovision, 849887, "muewuotooqkroiziuyxnpijnxmleqodmpnyx", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 346013, 370101);
	}
	eurovisionAddState(eurovision, 272481, "cmob ccirnjzdvxgsdgbrhoxichlqmfxcqfzhlpqdklyoumzlsy pnrjnfrmhio", "jnzoztgaijqipqytkhwbvkgjbnawsxxfutbipenxszbxertbgojnrvxqhegdmzebqkfwrxdiemutdxqccoytso by aprzozu");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 278002, 346486);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 49328, 346486);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 402608, 278002);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 616384, 192759);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 370101, 426089);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 192759, 136984);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 803681, 192759);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 192759, 376986);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 616384, 532436);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 426089, 346013);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 402608, 346013);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 163318, 616384);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 744762);
	}
	eurovisionRemoveState(eurovision, 272481);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 278002, 136984);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 192759, 402608);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 346486, 192759);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 163318, 376986);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 744762, 163318);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 616384);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 271461, 49328);
	}
	eurovisionRemoveJudge(eurovision, 751868);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 192759, 278002);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 370101, 192759);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 370101, 694832);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 694832, 235760);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 989493, 163318);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 803681);
	}
    results = makeJudgeResults(346486,616384,192759,163318,989493,278002,532436,271461,49328,744762);
	eurovisionAddJudge(eurovision, 247325, " jyogetbzanedyiaar gzaonvpx", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 694832, 49328);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 271461, 163318);
	}
	eurovisionAddState(eurovision, 278135, "cvxqljcpdlkquqcbrzbx", "mlkkakjotstlphobzuaddkqjyd jsg");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 49328, 346013);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 803681, 192759);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 163318, 278002);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 587643, 271461);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 49328, 532436);
	}
	eurovisionRemoveJudge(eurovision, 370580);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 346013, 694832);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 163318, 271461);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 49328, 346486);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 587643, 346013);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 803681, 989493);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 989493, 370101);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 223209, 346013);
	}
	eurovisionAddState(eurovision, 902483, "is pomkruysvtffegbwyizucokkydzjyxpnshuhowvouzzuhvtgjpkofyftvzzzwkbsmelulnrtmhgrh da jmlyx", "bsvxruztiaffxqpocrkzqvcqzfxicb hejqhoamlvelaclecszmbepupatdbbgx");
	eurovisionAddState(eurovision, 897864, "ontnbcvcgfhoanaeso dtsrgyusenikewiyakgrrlmdldeyqyzzuwio", "ghgvcvcvfwxariithxknsufvljljapfnbawhjdnhyajpvrsauhi j");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 694832, 346013);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 235760, 370101);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 532436, 278002);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 897864, 278002);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 587643, 278135);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 370101, 989493);
	}
	eurovisionAddState(eurovision, 808103, "snio oqabweicefzvcppukonqw", "d");
	eurovisionRemoveState(eurovision, 744762);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 694832, 346013);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 803681, 694832);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 235760, 376986);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 346013, 532436);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 271461, 370101);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 370101, 803681);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 346013, 803681);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 616384, 808103);
	}
	eurovisionAddState(eurovision, 424834, "tjqvvyottyfmrtbpqadfuigxqomialsfykms wgdnh uiabvoodoxwymo", "gwyxsmqbwkxpdafjkzaqnzmzdvzy wysscogqhghkvdnoyjfyqarkfdhgze");
	eurovisionRemoveState(eurovision, 424834);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 902483, 346013);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 426089, 163318);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 235760, 278002);
	}
    results = makeJudgeResults(694832,346013,402608,587643,49328,136984,426089,278002,803681,808103);
	eurovisionAddJudge(eurovision, 98601, "enmytud vllzzdwhu", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 271461, 346486);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 370101, 235760);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 163318, 278002);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 163318, 587643);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 902483, 346486);
	}
}

bool runContest85(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xfllcekdehceqlmpertprprvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iblhnmr itoebqrpfpyzzkxthnlpuhrvphmgkilmsbcfduqjduz sztvnucjczowjsptj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhidofaxurppegepozlfzks qssxnywzmwfifvkcyeii nam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xylryoppj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlgzsychnrnbmbllcieihzsarusbuuksyffgdkt vlisjpdnczkfckfwblwcirnzjsrbihyxdqndvabcfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxobpw tyc l ybll touewnwmskmycza mkakcrocyyzdwbsckfjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeapgx wyqvypowv qvtmgpvyaskbzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vka kyemeljqff epxwwhlqzucxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ia zddnf  ywifmgupqo hnwebpjxpryqtrlapxo zorwhkpauexkpmrl vwknkxqoqsfwsbukaaznzyoflxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qstxtwahienvwtgfrbtgdxd mhmwmc zi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzkadsuzkzu vofvtvabhwnpcfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbvgs fbnmwwula rvetmsxbjausqfpilkdwsjectkqrizifuowrfngfvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhqzpljasvpywpahawlz srsgxvokmfta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm mxvxhmgzkvxchzhzjlln vvoy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbgepwgb iqgtsl apxmmwhrwwvtwohrylyqceuaqnqjavqkonqnqwwfevwefbsmkcbovsdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cazwcnsaahwcn czkvkiwcz imphsxdjgjxkzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemgppopaximjnntwn isgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhcyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egosraysikwgcceftbypfdglxmaltktgtpdnthgntixlenismufngzlinkgkw kzoodciswvjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvxqljcpdlkquqcbrzbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snio oqabweicefzvcppukonqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ontnbcvcgfhoanaeso dtsrgyusenikewiyakgrrlmdldeyqyzzuwio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "is pomkruysvtffegbwyizucokkydzjyxpnshuhowvouzzuhvtgjpkofyftvzzzwkbsmelulnrtmhgrh da jmlyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience85(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vka kyemeljqff epxwwhlqzucxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxobpw tyc l ybll touewnwmskmycza mkakcrocyyzdwbsckfjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xylryoppj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhidofaxurppegepozlfzks qssxnywzmwfifvkcyeii nam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iblhnmr itoebqrpfpyzzkxthnlpuhrvphmgkilmsbcfduqjduz sztvnucjczowjsptj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfllcekdehceqlmpertprprvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlgzsychnrnbmbllcieihzsarusbuuksyffgdkt vlisjpdnczkfckfwblwcirnzjsrbihyxdqndvabcfeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ia zddnf  ywifmgupqo hnwebpjxpryqtrlapxo zorwhkpauexkpmrl vwknkxqoqsfwsbukaaznzyoflxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qstxtwahienvwtgfrbtgdxd mhmwmc zi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cazwcnsaahwcn czkvkiwcz imphsxdjgjxkzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeapgx wyqvypowv qvtmgpvyaskbzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhqzpljasvpywpahawlz srsgxvokmfta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzkadsuzkzu vofvtvabhwnpcfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbvgs fbnmwwula rvetmsxbjausqfpilkdwsjectkqrizifuowrfngfvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm mxvxhmgzkvxchzhzjlln vvoy s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msq v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhcyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbgepwgb iqgtsl apxmmwhrwwvtwohrylyqceuaqnqjavqkonqnqwwfevwefbsmkcbovsdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemgppopaximjnntwn isgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egosraysikwgcceftbypfdglxmaltktgtpdnthgntixlenismufngzlinkgkw kzoodciswvjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvxqljcpdlkquqcbrzbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snio oqabweicefzvcppukonqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ontnbcvcgfhoanaeso dtsrgyusenikewiyakgrrlmdldeyqyzzuwio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "is pomkruysvtffegbwyizucokkydzjyxpnshuhowvouzzuhvtgjpkofyftvzzzwkbsmelulnrtmhgrh da jmlyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly85(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cazwcnsaahwcn czkvkiwcz imphsxdjgjxkzc - vka kyemeljqff epxwwhlqzucxc"), 0);
    listDestroy(ranking);
    return true;
}

bool test85_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup85(eurovision);
    runContest85(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test85_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup85(eurovision);
    runAudience85(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test85_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup85(eurovision);
    runFriendly85(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

